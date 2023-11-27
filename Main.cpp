#include "Student.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array <String^>^ args )
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Student^ student = nullptr;

	regSQL::MyForm regform;
	regform.ShowDialog();

}