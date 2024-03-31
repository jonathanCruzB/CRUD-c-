#pragma once
#include "DB.h"
#include "Modificar.cpp"
#include "Modificar.h"




namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CRUD;
	


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->data = gcnew DB();


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::TextBox^ txt_edad;
	private: System::Windows::Forms::Button^ btn_guardar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ data_grid;

	private: DB^ data;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::Label^ label_user;


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
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad = (gcnew System::Windows::Forms::TextBox());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->label_user = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_nombre
			// 
			this->txt_nombre->Location = System::Drawing::Point(178, 49);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(121, 20);
			this->txt_nombre->TabIndex = 0;
			this->txt_nombre->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// txt_edad
			// 
			this->txt_edad->Location = System::Drawing::Point(178, 105);
			this->txt_edad->Name = L"txt_edad";
			this->txt_edad->Size = System::Drawing::Size(121, 20);
			this->txt_edad->TabIndex = 1;
			// 
			// btn_guardar
			// 
			this->btn_guardar->Location = System::Drawing::Point(50, 155);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(90, 48);
			this->btn_guardar->TabIndex = 2;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = true;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Form1::btn_guardar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Edad";
			// 
			// data_grid
			// 
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid->Location = System::Drawing::Point(330, 22);
			this->data_grid->Name = L"data_grid";
			this->data_grid->ReadOnly = true;
			this->data_grid->RowHeadersVisible = false;
			this->data_grid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid->Size = System::Drawing::Size(240, 165);
			this->data_grid->TabIndex = 5;
			this->data_grid->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::data_grid_CellClick);
			this->data_grid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::data_grid_CellContentClick);
			this->data_grid->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::data_grid_MouseDoubleClick);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->Location = System::Drawing::Point(50, 223);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(90, 41);
			this->btn_eliminar->TabIndex = 6;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = true;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &Form1::btn_eliminar_Click);
			// 
			// label_user
			// 
			this->label_user->AutoSize = true;
			this->label_user->Location = System::Drawing::Point(169, 228);
			this->label_user->Name = L"label_user";
			this->label_user->Size = System::Drawing::Size(75, 13);
			this->label_user->TabIndex = 7;
			this->label_user->Text = L"Seleccionado:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(602, 295);
			this->Controls->Add(this->label_user);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->data_grid);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->txt_edad);
			this->Controls->Add(this->txt_nombre);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
		
	
	}

	 public :
		 void Consulta() {

			 this->data->AbrirConexion();
			 this->data_grid->DataSource = this->data->getData();
			 this->data->CerrarConexion();

		 }



	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {

	this->data->AbrirConexion();
	this->data->Insertar(this->txt_nombre->Text, this->txt_edad->Text);
	this->data->CerrarConexion();
	this->Consulta();
	this->txt_nombre->Text = " ";
	this->txt_edad->Text = " ";
}
private: System::Void data_grid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
	private: System::Void data_grid_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		String^ nombre = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
		String^ edad = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
		CRUD::Modificar^ form = gcnew CRUD::Modificar();
		
		form->txt_nombre->Text = nombre;
		form->txt_edad->Text = edad;
		form->ShowDialog();
		DB^ data = gcnew DB();
		this->data->AbrirConexion();
		this->data->Modificar(form->txt_nombre->Text, form->txt_edad->Text, nombre);
		this->data->CerrarConexion();

		this->Consulta();

		
		 


}
private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ nombre = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	String^ edad = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	DB^ data = gcnew DB();
	this->data->AbrirConexion();
	this->data->Eliminar(nombre);

	this->data->CerrarConexion();

	this->Consulta();
	

}
private: System::Void data_grid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {


	String^ nombre = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	label_user->Text = " Seleccionado: " + nombre;

}
};
}
