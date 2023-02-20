#pragma once

//Reduces size of win32 headers by excluding less used APIs
#define WIN32_LEAN_AND_MEAN

#include <Windows.h>

#include "../input/inputclass.h"
#include "../graphics/graphicsclass.h"

class SystemClass {
public:
	SystemClass();
	SystemClass(const SystemClass&);
	~SystemClass();

	bool Init();
	void Run();
	void ShutDown();

	LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);
private:
	bool Frame();
	void InitWindows(int&, int&);
	void ShutDownWindows();

private:
	LPCWSTR m_applicationName;
	HINSTANCE m_hinstance;
	HWND m_hwnd;

	InputClass* m_Input;
	GraphicsClass* m_Graphics;
};