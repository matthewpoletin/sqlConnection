#include <Windows.h>

#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

using namespace sqlConnection;

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Application::EnableVisualStyles();
	Application::Run(gcnew MainForm());

	return 0;
}