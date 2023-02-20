#include "./sys/systemclass.h"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pScmdline, int iCmdshow) {
	SystemClass* sys;
	bool result;

	//create sys obj
	sys = new SystemClass;
	if (!sys) {
		return 0;
	}

	result = sys->Init();
	if (result) {
		sys->Run();
	}

	sys->ShutDown();
	delete sys;
	sys = 0;

	return 0;
}
