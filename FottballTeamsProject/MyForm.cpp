#include "MyForm.h"
#include "Classes.h"

lists <int> test;

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	FottballTeamsProject::MyForm form;
	Application::Run(%form);
}

