#include "pch.h"
#include "DB.h"


DB::DB() {

	this->connectionString = "datasource=localhost; username=root; password=" "; database=prueba; ";
	this->conn = gcnew MySqlConnection(this->connectionString);

}


void DB::AbrirConexion() {

	this->conn->Open();

}

void DB::CerrarConexion() {

	this->conn->Close();
}



DataTable^ DB::getData() {

	String^ sql = "select * from persona";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;


}

void DB::Insertar(String^ n, String^ e) {

	String^ sql = "insert into persona(nombre, edad) value('" + n + "'," + e + ")";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {

		cursor->ExecuteNonQuery();

	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message);

	}

}

void DB::Modificar(String^ n, String^ e, String^ ref) {

	String^ sql = "update persona set nombre='" + n + "', edad='" + e + "' where nombre= '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();

	}
	catch (Exception^ e) {

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message);

	}
}

void DB::Eliminar(String^ nombre){
	String^ sql = "delete from persona where nombre='" + nombre + "' ";

	MySqlCommand ^ cursor = gcnew MySqlCommand(sql, this->conn);

	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show("Eliminado");

	}
	catch (Exception^ e) {

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message);

	}

}
