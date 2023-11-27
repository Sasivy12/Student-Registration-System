#pragma once
#include "Student.h"

namespace regSQL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ headerLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ nameBox;
	private: System::Windows::Forms::TextBox^ emailBox;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ passwBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->headerLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->emailBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->passwBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// headerLabel
			// 
			this->headerLabel->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->headerLabel->Location = System::Drawing::Point(0, 9);
			this->headerLabel->Name = L"headerLabel";
			this->headerLabel->Size = System::Drawing::Size(936, 75);
			this->headerLabel->TabIndex = 0;
			this->headerLabel->Text = L"Registration";
			this->headerLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->headerLabel->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(174, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name";
			// 
			// nameBox
			// 
			this->nameBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameBox->Location = System::Drawing::Point(266, 183);
			this->nameBox->Multiline = true;
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(443, 29);
			this->nameBox->TabIndex = 2;
			// 
			// emailBox
			// 
			this->emailBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->emailBox->Location = System::Drawing::Point(266, 247);
			this->emailBox->Multiline = true;
			this->emailBox->Name = L"emailBox";
			this->emailBox->Size = System::Drawing::Size(443, 29);
			this->emailBox->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(174, 247);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Email";
			// 
			// passwBox
			// 
			this->passwBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->passwBox->Location = System::Drawing::Point(266, 299);
			this->passwBox->Multiline = true;
			this->passwBox->Name = L"passwBox";
			this->passwBox->Size = System::Drawing::Size(443, 29);
			this->passwBox->TabIndex = 6;
			this->passwBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(116, 299);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(363, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 44);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Plum;
			this->ClientSize = System::Drawing::Size(935, 527);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->passwBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->emailBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->nameBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->headerLabel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	public: Student^ student = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		String^ name = nameBox->Text;
		String^ email = emailBox->Text;
		String^ password = passwBox->Text;

		if (this->emailBox->Text->Length == 0 || this->passwBox->Text->Length == 0 || this->nameBox->Text->Length == 0)
		{
			MessageBox::Show("Please enter corrcect information!", "Input Error", MessageBoxButtons::OK);
		}

		//SqlConnection sqlConn("Data Source=DESKTOP-6QL0FP6\\MSSQLSERVER01;Initial Catalog=university;Integrated Security=True");
		//sqlConn.Open();
		
		try
		{
			
			SqlConnection sqlConn("Data Source=DESKTOP-6QL0FP6\\MSSQLSERVER01;Initial Catalog=university;Integrated Security=True");
			sqlConn.Open();
			
			String^ Querry = "Insert Into students(name, email, password) Values (@name, @email, @passw)";
				
			SqlCommand command(Querry,% sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@passw", password);

			
			command.ExecuteNonQuery();
			student = gcnew Student;
			student->name = name;
			student->email = email;
			student->passw = password;

			MessageBox::Show("Student added succesfully!", "Succesful Regestartion", MessageBoxButtons::OK);
			
			sqlConn.Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to register new user!", "Register Error", MessageBoxButtons::OK);
		}
		
	}
	
};
}
