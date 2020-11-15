#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <string>

struct Personas {

	unsigned int clavemaquina = 0;
	char nombremaquina[30] = "";
	char nombreproveedor[30] = "";
	char numerocelular[11] = "";
	char correoelectronico[40] = "";


};
Personas registros[50];
void OrdenamientoClave();
void OrdenamientoNombre();
bool validarCadena(char cadena[]);
namespace AppDefinitiva {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ dash_Button;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ DashboardPanel;
	private: System::Windows::Forms::Panel^ AgregarPanel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ RemoverPanel;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClaveMaquina;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreMaquina;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreProveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumeroCelular;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CorreoElectronico;
	private: System::Windows::Forms::Panel^ LocalizarPanel;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ OrdenamientosPanel;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::PictureBox^ pictureBox1;











	protected:

	protected:










	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dash_Button = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ClaveMaquina = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreMaquina = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreProveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumeroCelular = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CorreoElectronico = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DashboardPanel = (gcnew System::Windows::Forms::Panel());
			this->AgregarPanel = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->OrdenamientosPanel = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->RemoverPanel = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->LocalizarPanel = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->DashboardPanel->SuspendLayout();
			this->AgregarPanel->SuspendLayout();
			this->OrdenamientosPanel->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->RemoverPanel->SuspendLayout();
			this->LocalizarPanel->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->dash_Button);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(186, 580);
			this->panel1->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Top;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button7->Location = System::Drawing::Point(0, 374);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(186, 42);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Salir";
			this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button6->Location = System::Drawing::Point(0, 332);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(186, 42);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Ordenar Maquinas";
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button5->Location = System::Drawing::Point(0, 290);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(186, 42);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Localizar Maquina";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button4->Location = System::Drawing::Point(0, 248);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 42);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Remover Maquina";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button3->Location = System::Drawing::Point(0, 296);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 42);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Localizar Maquina";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button2->Location = System::Drawing::Point(0, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Agregar Maquina";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// dash_Button
			// 
			this->dash_Button->Dock = System::Windows::Forms::DockStyle::Top;
			this->dash_Button->FlatAppearance->BorderSize = 0;
			this->dash_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dash_Button->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dash_Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->dash_Button->Location = System::Drawing::Point(0, 159);
			this->dash_Button->Name = L"dash_Button";
			this->dash_Button->Size = System::Drawing::Size(186, 47);
			this->dash_Button->TabIndex = 1;
			this->dash_Button->Text = L"Dashboard";
			this->dash_Button->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->dash_Button->UseVisualStyleBackColor = true;
			this->dash_Button->Click += gcnew System::EventHandler(this, &MainForm::dashClick);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(186, 159);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel2_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label1->Location = System::Drawing::Point(42, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Alan Cisneros";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(558, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(377, 580);
			this->panel3->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ClaveMaquina,
					this->NombreMaquina, this->NombreProveedor, this->NumeroCelular, this->CorreoElectronico
			});
			this->dataGridView1->Location = System::Drawing::Point(11, 205);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(349, 169);
			this->dataGridView1->TabIndex = 0;
			// 
			// ClaveMaquina
			// 
			this->ClaveMaquina->HeaderText = L"ClaveMaquina";
			this->ClaveMaquina->Name = L"ClaveMaquina";
			// 
			// NombreMaquina
			// 
			this->NombreMaquina->HeaderText = L"NombreMaquina";
			this->NombreMaquina->Name = L"NombreMaquina";
			// 
			// NombreProveedor
			// 
			this->NombreProveedor->HeaderText = L"NombreProveedor";
			this->NombreProveedor->Name = L"NombreProveedor";
			// 
			// NumeroCelular
			// 
			this->NumeroCelular->HeaderText = L"NumeroCelular";
			this->NumeroCelular->Name = L"NumeroCelular";
			// 
			// CorreoElectronico
			// 
			this->CorreoElectronico->HeaderText = L"CorreoElectronico";
			this->CorreoElectronico->Name = L"CorreoElectronico";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(103, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Welcome to the program";
			// 
			// DashboardPanel
			// 
			this->DashboardPanel->Controls->Add(this->label2);
			this->DashboardPanel->Location = System::Drawing::Point(212, 168);
			this->DashboardPanel->Name = L"DashboardPanel";
			this->DashboardPanel->Size = System::Drawing::Size(332, 256);
			this->DashboardPanel->TabIndex = 3;
			// 
			// AgregarPanel
			// 
			this->AgregarPanel->Controls->Add(this->textBox1);
			this->AgregarPanel->Controls->Add(this->button1);
			this->AgregarPanel->Controls->Add(this->label3);
			this->AgregarPanel->Location = System::Drawing::Point(212, 168);
			this->AgregarPanel->Name = L"AgregarPanel";
			this->AgregarPanel->Size = System::Drawing::Size(332, 250);
			this->AgregarPanel->TabIndex = 4;
			this->AgregarPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::AgregarPanel_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(56, 121);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(222, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 170);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(103, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ingresa el nombre del txt";
			// 
			// OrdenamientosPanel
			// 
			this->OrdenamientosPanel->Controls->Add(this->button10);
			this->OrdenamientosPanel->Controls->Add(this->groupBox2);
			this->OrdenamientosPanel->Controls->Add(this->label6);
			this->OrdenamientosPanel->Location = System::Drawing::Point(212, 168);
			this->OrdenamientosPanel->Name = L"OrdenamientosPanel";
			this->OrdenamientosPanel->Size = System::Drawing::Size(332, 256);
			this->OrdenamientosPanel->TabIndex = 7;
			this->OrdenamientosPanel->Visible = false;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(122, 191);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 2;
			this->button10->Text = L"Ordenar";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::button10_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Location = System::Drawing::Point(62, 75);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 96);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->ForeColor = System::Drawing::Color::White;
			this->radioButton4->Location = System::Drawing::Point(25, 53);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(170, 17);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Ordenar por nombre-proveedor";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(25, 20);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(161, 17);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Ordenar por clave-proveedor";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(119, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Ordenamientos";
			this->label6->Click += gcnew System::EventHandler(this, &MainForm::label6_Click);
			// 
			// RemoverPanel
			// 
			this->RemoverPanel->Controls->Add(this->textBox2);
			this->RemoverPanel->Controls->Add(this->button8);
			this->RemoverPanel->Controls->Add(this->label4);
			this->RemoverPanel->Location = System::Drawing::Point(212, 168);
			this->RemoverPanel->Name = L"RemoverPanel";
			this->RemoverPanel->Size = System::Drawing::Size(332, 256);
			this->RemoverPanel->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(62, 130);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(222, 20);
			this->textBox2->TabIndex = 1;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(125, 178);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Eliminar";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(85, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Ingresa la matricula a dar de baja";
			this->label4->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// LocalizarPanel
			// 
			this->LocalizarPanel->Controls->Add(this->groupBox1);
			this->LocalizarPanel->Controls->Add(this->button9);
			this->LocalizarPanel->Controls->Add(this->label5);
			this->LocalizarPanel->Location = System::Drawing::Point(212, 169);
			this->LocalizarPanel->Name = L"LocalizarPanel";
			this->LocalizarPanel->Size = System::Drawing::Size(332, 255);
			this->LocalizarPanel->TabIndex = 6;
			this->LocalizarPanel->Visible = false;
			this->LocalizarPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::LocalizarPanel_Paint);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(62, 58);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(222, 126);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(32, 98);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(165, 20);
			this->textBox3->TabIndex = 2;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(32, 66);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(165, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Localizar por clave-proveedor";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(32, 29);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(174, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Localizar por nombre-proveedor";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(125, 201);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Search";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(136, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Localizar";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(22, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(124, 98);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->ClientSize = System::Drawing::Size(935, 580);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->DashboardPanel);
			this->Controls->Add(this->OrdenamientosPanel);
			this->Controls->Add(this->RemoverPanel);
			this->Controls->Add(this->LocalizarPanel);
			this->Controls->Add(this->AgregarPanel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"C++ Application";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->DashboardPanel->ResumeLayout(false);
			this->DashboardPanel->PerformLayout();
			this->AgregarPanel->ResumeLayout(false);
			this->AgregarPanel->PerformLayout();
			this->OrdenamientosPanel->ResumeLayout(false);
			this->OrdenamientosPanel->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->RemoverPanel->ResumeLayout(false);
			this->RemoverPanel->PerformLayout();
			this->LocalizarPanel->ResumeLayout(false);
			this->LocalizarPanel->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dashClick(System::Object^ sender, System::EventArgs^ e) {
	
		OrdenamientosPanel->SendToBack();
		AgregarPanel->SendToBack();
		RemoverPanel->SendToBack();
		DashboardPanel->BringToFront();
		LocalizarPanel->Visible = false;
		OrdenamientosPanel->Visible = false;

	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		LocalizarPanel->Visible = false;
		AgregarPanel->SendToBack();
		RemoverPanel->SendToBack();
		DashboardPanel->SendToBack();
		OrdenamientosPanel->Visible = true;
		OrdenamientosPanel->BringToFront();

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		OrdenamientosPanel->SendToBack();
		OrdenamientosPanel->Visible = false;
		RemoverPanel->SendToBack();
		DashboardPanel->SendToBack();
		AgregarPanel->BringToFront();
		LocalizarPanel->Visible = false;
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream archivo;
		int i = 0; 	int clavemaquina = 0, fail = 0; bool yaExiste = false;
		String^ texto2 = textBox1->Text;
		msclr::interop::marshal_context context;
		std::string std_string = context.marshal_as<std::string>(texto2);
		char texto[100] = "";
		strcpy_s(texto, std_string.c_str());
		char nm[30] = ""; char np[30] = ""; char nc[11] = ""; char ce[40] = "";
		archivo.open(texto, std::ios::in);
		if (archivo.fail()) {
			MessageBox::Show("El archivo no se pudo abrir o no existe. ", "Mensaje de ERROR");
		}
		else {
			while (!archivo.eof()) {

				while (registros[i].clavemaquina != 0) {
					i++;
				};

				if (registros[i].clavemaquina == 0 && i < 50) {
					yaExiste = false;
					clavemaquina = 0;
					archivo >> clavemaquina;
					char ncp[40];

					if (clavemaquina != 0) {
						archivo >> nm;
						archivo >> np;
						archivo >> ncp;
						if (strlen(ncp) < 11) {
							strcpy_s(nc, ncp);
						}
						else {
							MessageBox::Show("El usuario con matricula [" + clavemaquina + "] tiene un numero que excede los 10 digitos. ");
							strcpy_s(nc, "error");
						}
						archivo >> ce;
					}


					for (int i = 0; i < 50; i++) {
						if (clavemaquina != 0 && registros[i].clavemaquina == clavemaquina) {
							yaExiste = true;
							MessageBox::Show("El usuario con clave de maquina [" + clavemaquina + "] ya existe, no fue registrado. ");
						}
					}
					/*
										if (validarCorreo(ce, 1) == 0) {
											cout << "Correo equivocado en la maquina con clave [" << clavemaquina << "]. Corriga para poder registrarla. " << endl;
										}

										if (validarCadena(nm) == 0) {
											MessageBox::Show("Nombre de la maquina equivocado en la maquina con clave [" + clavemaquina + "]. Corriga para poder registrarla. ");
										}

										if (validarCadena(np) == 0) {
											cout << "Nombre de proveedor equivocado en la maquina con clave [" + clavemaquina + "]. Corriga para poder registrarla. " << endl;
										}

										if (validarTelefono(nc) == 0) {
											MessageBox::Show("Telefono equivocado en la maquina con clave [" << clavemaquina << "]. Corriga para poder registrarla. ");
										}

										if (clavemaquina != 0 && validarRangoClave(clavemaquina) == 0) {
											MessageBox::Show("Clave no está en el rango requerido [XXXX] en la maquina con clave [" + clavemaquina + "]. Corriga para poder registrarla. ");
										}
										*/
					if (/*validarRangoClave(clavemaquina) && validarCorreo(ce, 0) && */validarCadena(nm) && validarCadena(np) == 1 && yaExiste == false && clavemaquina != 0 /*&& validarTelefono(nc) == 1 */ && nc != "error") {
						registros[i].clavemaquina = clavemaquina;
						strcpy_s(registros[i].nombremaquina, nm);
						strcpy_s(registros[i].nombreproveedor, np);
						strcpy_s(registros[i].numerocelular, nc);
						strcpy_s(registros[i].correoelectronico, ce);
						//MessageBox::Show( "Maquina [" + clavemaquina + "] registrada en posicion [" + i + "]" );
						i++;
					}

				}
				if (i > 50) {
					MessageBox::Show("Se ha excedido el numero maximo de registros, por favor borre o reinicie la aplicacion.\n ");
				}
			}
			archivo.close();
			dataGridView1->Rows->Clear();
			for (int i = 0; i < 50; i++) {
				if (registros[i].clavemaquina != 0) {
					int x = dataGridView1->Rows->Add();
					String^ x5 = gcnew String(""+registros[i].clavemaquina);
					String^ x1 = gcnew String(registros[i].nombremaquina);
					String^ x2 = gcnew String(registros[i].nombreproveedor);
					String^ x3 = gcnew String(registros[i].numerocelular);
					String^ x4 = gcnew String(registros[i].correoelectronico);
					String^ final = "Nombre de la maquina: " + x1 + "\n" + "Nombre del proveedor:" + x2 + "\n" + "Numero celular: " + x3 + "\n" + "Correo electronico: " + x4 + "\n";
					dataGridView1->Rows[x]->Cells[0]->Value = (x5);
					dataGridView1->Rows[x]->Cells[1]->Value = (x1);
					dataGridView1->Rows[x]->Cells[2]->Value = (x2);
					dataGridView1->Rows[x]->Cells[3]->Value = (x3);
					dataGridView1->Rows[x]->Cells[4]->Value = (x4);
				}
			}
		}
	}
	
private: System::Void AgregarPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	OrdenamientosPanel->SendToBack();
	LocalizarPanel->Visible = false;
	OrdenamientosPanel->Visible = false;
	DashboardPanel->SendToBack();
	AgregarPanel->SendToBack();
	RemoverPanel->BringToFront();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ texto2 = textBox2->Text;
	msclr::interop::marshal_context context;
	std::string std_string = context.marshal_as<std::string>(texto2);
	char texto[100] = "";
	strcpy_s(texto, std_string.c_str());
	char vacio[10] = "";
	bool encontrado = false;

	for (int i = 0; i < 50; i++) {
		System::String^ s = registros[i].clavemaquina.ToString();
		if (s == texto2 && texto2 != "0") {
			System::Windows::Forms::MessageBox::Show("El usuario ha sido de baja con exito. ");
			registros[i].clavemaquina = 0;
			strcpy_s(registros[i].nombremaquina, vacio);
			strcpy_s(registros[i].nombreproveedor, vacio);
			strcpy_s(registros[i].numerocelular, vacio);
			strcpy_s(registros[i].correoelectronico, vacio);
			encontrado = true;
			dataGridView1->Rows->Clear();
			for (int i = 0; i < 50; i++) {
				if (registros[i].clavemaquina != 0) {
					int x = dataGridView1->Rows->Add();
					String^ x5 = gcnew String("" + registros[i].clavemaquina);
					String^ x1 = gcnew String(registros[i].nombremaquina);
					String^ x2 = gcnew String(registros[i].nombreproveedor);
					String^ x3 = gcnew String(registros[i].numerocelular);
					String^ x4 = gcnew String(registros[i].correoelectronico);
					String^ final = "Nombre de la maquina: " + x1 + "\n" + "Nombre del proveedor:" + x2 + "\n" + "Numero celular: " + x3 + "\n" + "Correo electronico: " + x4 + "\n";
					dataGridView1->Rows[x]->Cells[0]->Value = (x5);
					dataGridView1->Rows[x]->Cells[1]->Value = (x1);
					dataGridView1->Rows[x]->Cells[2]->Value = (x2);
					dataGridView1->Rows[x]->Cells[3]->Value = (x3);
					dataGridView1->Rows[x]->Cells[4]->Value = (x4);
				}
			}
		}
	}
	if (encontrado == false) {
		System::Windows::Forms::MessageBox::Show("Lo sentimos, el ID no existe en la base de datos. ");
	}

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	OrdenamientosPanel->SendToBack();
	OrdenamientosPanel->Visible = false;
	AgregarPanel->SendToBack();
	RemoverPanel->SendToBack();
	DashboardPanel->SendToBack();
	LocalizarPanel->Visible=true;
	LocalizarPanel->BringToFront();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(6);
}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked) {
			String^ texto2 = textBox3->Text;
			bool encontrado = false;
			for (int i = 0; i < 50; i++) {
				String^ s = gcnew String(registros[i].nombreproveedor);
				if (s == texto2 && texto2 != "0") {
					String^ x1 = gcnew String(registros[i].nombremaquina);
					String^ x2 = gcnew String(registros[i].nombreproveedor);
					String^ x3 = gcnew String(registros[i].numerocelular);
					String^ x4 = gcnew String(registros[i].correoelectronico);
					String^ final = "Nombre de la maquina: " + x1 + "\n" + "Nombre del proveedor:" + x2 + "\n" + "Numero celular: " + x3 + "\n" + "Correo electronico: " + x4 + "\n";
					MessageBox::Show("Clave de la maquina: " + registros[i].clavemaquina + "\n" + final);
					encontrado = true;
				}
			}

			if (encontrado == false) {
				MessageBox::Show("No se pudo localizar la máquina con esta clave. ");
			}
		}
		if (radioButton2->Checked) {
			String^ texto2 = textBox3->Text;

			bool encontrado = false;
			for (int i = 0; i < 50; i++) {
				System::String^ s = registros[i].clavemaquina.ToString();
				if (s == texto2 && texto2 != "0") {
					String^ x1 = gcnew String(registros[i].nombremaquina);
					String^ x2 = gcnew String(registros[i].nombreproveedor);
					String^ x3 = gcnew String(registros[i].numerocelular);
					String^ x4 = gcnew String(registros[i].correoelectronico);
					String^ final = "Nombre de la maquina: " + x1 + "\n" + "Nombre del proveedor:" + x2 + "\n" + "Numero celular: " + x3 + "\n" + "Correo electronico: " + x4 + "\n";
					MessageBox::Show("Clave de la maquina: " + registros[i].clavemaquina + "\n" + final);
					encontrado = true;
				}
			}

			if (encontrado == false) {
				MessageBox::Show("No se pudo localizar la máquina con esta clave. ");
			}
		}
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton3->Checked) {
		OrdenamientoClave();
		dataGridView1->Rows->Clear();
		for (int i = 0; i < 50; i++) {
			if (registros[i].clavemaquina != 0) {
				int x = dataGridView1->Rows->Add();
				String^ x5 = gcnew String("" + registros[i].clavemaquina);
				String^ x1 = gcnew String(registros[i].nombremaquina);
				String^ x2 = gcnew String(registros[i].nombreproveedor);
				String^ x3 = gcnew String(registros[i].numerocelular);
				String^ x4 = gcnew String(registros[i].correoelectronico);
				String^ final = "Nombre de la maquina: " + x1 + "\n" + "Nombre del proveedor:" + x2 + "\n" + "Numero celular: " + x3 + "\n" + "Correo electronico: " + x4 + "\n";
				dataGridView1->Rows[x]->Cells[0]->Value = (x5);
				dataGridView1->Rows[x]->Cells[1]->Value = (x1);
				dataGridView1->Rows[x]->Cells[2]->Value = (x2);
				dataGridView1->Rows[x]->Cells[3]->Value = (x3);
				dataGridView1->Rows[x]->Cells[4]->Value = (x4);
			}
		}
	}
	if (radioButton4->Checked) {
		OrdenamientoNombre();
		dataGridView1->Rows->Clear();
		for (int i = 0; i < 50; i++) {
			if (registros[i].clavemaquina != 0) {
				int x = dataGridView1->Rows->Add();
				String^ x5 = gcnew String("" + registros[i].clavemaquina);
				String^ x1 = gcnew String(registros[i].nombremaquina);
				String^ x2 = gcnew String(registros[i].nombreproveedor);
				String^ x3 = gcnew String(registros[i].numerocelular);
				String^ x4 = gcnew String(registros[i].correoelectronico);
				String^ final = "Nombre de la maquina: " + x1 + "\n" + "Nombre del proveedor:" + x2 + "\n" + "Numero celular: " + x3 + "\n" + "Correo electronico: " + x4 + "\n";
				dataGridView1->Rows[x]->Cells[0]->Value = (x5);
				dataGridView1->Rows[x]->Cells[1]->Value = (x1);
				dataGridView1->Rows[x]->Cells[2]->Value = (x2);
				dataGridView1->Rows[x]->Cells[3]->Value = (x3);
				dataGridView1->Rows[x]->Cells[4]->Value = (x4);
			}
		}
	}
}
private: System::Void LocalizarPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
bool validarCadena(char cadena[]) {
	bool valCadena = true;
	for (int i = 0; i < strlen(cadena); i++) {
		if (isdigit(cadena[i]) != 0) valCadena = false;
	}
	return valCadena;
}

void OrdenamientoClave() {

	int i, j, aux;
	char aux2[30] = "", aux3[30] = "", aux4[11] = "", aux5[40] = "";

	for (i = 0; i < 50; i++) {
		for (j = 0; j < 50; j++) {
			if (registros[j].clavemaquina > registros[j + 1].clavemaquina) {
				aux = registros[j].clavemaquina;
				strcpy_s(aux2, registros[j].nombremaquina);
				strcpy_s(aux3, registros[j].nombreproveedor);
				strcpy_s(aux4, registros[j].numerocelular);
				strcpy_s(aux5, registros[j].correoelectronico);
				registros[j].clavemaquina = registros[j + 1].clavemaquina;
				strcpy_s(registros[j].nombremaquina, registros[j + 1].nombremaquina);
				strcpy_s(registros[j].nombreproveedor, registros[j + 1].nombreproveedor);
				strcpy_s(registros[j].numerocelular, registros[j + 1].numerocelular);
				strcpy_s(registros[j].correoelectronico, registros[j + 1].correoelectronico);
				registros[j + 1].clavemaquina = aux;
				strcpy_s(registros[j + 1].nombremaquina, aux2);
				strcpy_s(registros[j + 1].nombreproveedor, aux3);
				strcpy_s(registros[j + 1].numerocelular, aux4);
				strcpy_s(registros[j + 1].correoelectronico, aux5);
			}
		}

	};
}

void OrdenamientoNombre() {

	int i, j, aux;
	char aux2[30] = "", aux3[30] = "", aux4[11] = "", aux5[40] = "";

	for (i = 0; i < 50; i++) {
		for (j = 0; j < 49; j++) {
			if (strcmp(registros[j].nombreproveedor, registros[j + 1].nombreproveedor) > 0) {
				aux = registros[j].clavemaquina;
				strcpy_s(aux2, registros[j].nombremaquina);
				strcpy_s(aux3, registros[j].nombreproveedor);
				strcpy_s(aux4, registros[j].numerocelular);
				strcpy_s(aux5, registros[j].correoelectronico);
				registros[j].clavemaquina = registros[j + 1].clavemaquina;
				strcpy_s(registros[j].nombremaquina, registros[j + 1].nombremaquina);
				strcpy_s(registros[j].nombreproveedor, registros[j + 1].nombreproveedor);
				strcpy_s(registros[j].numerocelular, registros[j + 1].numerocelular);
				strcpy_s(registros[j].correoelectronico, registros[j + 1].correoelectronico);
				registros[j + 1].clavemaquina = aux;
				strcpy_s(registros[j + 1].nombremaquina, aux2);
				strcpy_s(registros[j + 1].nombreproveedor, aux3);
				strcpy_s(registros[j + 1].numerocelular, aux4);
				strcpy_s(registros[j + 1].correoelectronico, aux5);
			}
		}

	};
}
