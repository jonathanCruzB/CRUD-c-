#pragma once

namespace CRUD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Modificar
	/// </summary>
	public ref class Modificar : public System::Windows::Forms::Form
	{
	public:
		Modificar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			


		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Modificar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_guardar;
	private: System::Windows::Forms::Button^ btn_cancelar;
	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	

	public: System::Windows::Forms::TextBox^ txt_nombre;
	public: System::Windows::Forms::TextBox^ txt_edad;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_guardar
			// 
			this->btn_guardar->Location = System::Drawing::Point(31, 209);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(75, 23);
			this->btn_guardar->TabIndex = 0;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = true;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Modificar::btn_guardar_Click);
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->Location = System::Drawing::Point(155, 209);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(75, 23);
			this->btn_cancelar->TabIndex = 1;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = true;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &Modificar::btn_cancelar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre";
			this->label1->Click += gcnew System::EventHandler(this, &Modificar::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Edad";
			// 
			// txt_nombre
			// 
			this->txt_nombre->Location = System::Drawing::Point(116, 52);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(101, 20);
			this->txt_nombre->TabIndex = 4;
			// 
			// txt_edad
			// 
			this->txt_edad->Location = System::Drawing::Point(116, 93);
			this->txt_edad->Name = L"txt_edad";
			this->txt_edad->Size = System::Drawing::Size(101, 20);
			this->txt_edad->TabIndex = 5;
			// 
			// Modificar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->txt_edad);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_guardar);
			this->Name = L"Modificar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Modificar";
			this->Load += gcnew System::EventHandler(this, &Modificar::Modificar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Modificar_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	MessageBox::Show("Actualizado");
	this->Close();

}
};
}
