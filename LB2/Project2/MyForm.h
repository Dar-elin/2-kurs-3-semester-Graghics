#pragma once

using namespace std;
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститьToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::TextBox^ textBox2;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(873, 29);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->открытьToolStripMenuItem,
					this->сохранитьToolStripMenuItem, this->сохранитьКакToolStripMenuItem, this->очиститьToolStripMenuItem
			});
			this->файлToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->файлToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(69, 25);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openFile_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveFile_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как...";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveFileAs_Click);
			// 
			// очиститьToolStripMenuItem
			// 
			this->очиститьToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->очиститьToolStripMenuItem->Name = L"очиститьToolStripMenuItem";
			this->очиститьToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->очиститьToolStripMenuItem->Text = L"Очистить";
			this->очиститьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox1->Location = System::Drawing::Point(32, 97);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(285, 250);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkMagenta;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(32, 375);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(270, 40);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Транспонировать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkMagenta;
			this->label1->Location = System::Drawing::Point(27, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(361, 28);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Введите элементы матрицы";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::DarkMagenta;
			this->label4->Location = System::Drawing::Point(466, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(448, 28);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Транспонированная матрица";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox2->Location = System::Drawing::Point(471, 97);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(285, 250);
			this->textBox2->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(873, 427);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::White;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Матрица";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openFile_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dr;
		String^ fn;
		dr = openFileDialog1->ShowDialog();
		if (dr == System::Windows::Forms::DialogResult::OK) {
			fn = openFileDialog1->FileName;
			Text = fn;
			try {
				System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(fn);
				textBox1->Text = sr->ReadToEnd();
				sr->Close();
			}
			catch (System::IO::FileLoadException^ e) {
				MessageBox::Show("Ошибка ввода:\n" + e->Message,
					"Матрица",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void saveFile_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fn;
		fn = Text;
		if (fn == "Untitled") {
			saveFileAs_Click(sender, e);
			return;
		}
		try {
			System::IO::FileInfo^ fi = gcnew System::IO::FileInfo(fn);
			System::IO::StreamWriter^ sw = fi->CreateText();
			sw->Write(textBox2->Text);
			sw->Close();
		}
		catch (System::IO::IOException^ e) {
			MessageBox::Show(e->ToString(),
				"Матрица",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
	private: System::Void saveFileAs_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dr;
		String^ fn;
		dr = saveFileDialog1->ShowDialog();
		if (dr == System::Windows::Forms::DialogResult::OK) {
			fn = saveFileDialog1->FileName;
			Text = fn;
			try {
				System::IO::FileInfo^ fi = gcnew System::IO::FileInfo(fn);
				System::IO::StreamWriter^ sw = fi->CreateText();
				sw->Write(textBox2->Text);
				sw->Close();
			}
			catch (System::IO::IOException^ e) {
				MessageBox::Show(e->ToString(),
					"Vectors",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender,
		System::Windows::Forms::KeyPressEventArgs^ e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == 8)
			|| (e->KeyChar == ' ') || (e->KeyChar == '-') || Char::IsControl(e->KeyChar))
			return;
		//остальные символы запрещены
		e->Handled = true;
	}
	public:
		void TransposeMatrix(array<int, 2>^& matrix, int size) {
			int t;
			for (int i = 0; i < size; i++)
				for (int j = i; j < size; j++) {
					t = matrix[i, j];
					matrix[i, j] = matrix[j, i];
					matrix[j, i] = t;
				}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length == 0)
			MessageBox::Show("Вы ввели не все данные!\n",
				"Матрица",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		else {
			String^ s = "";
			array<String^>^ as;
			array<String^>^ ass;
			array<Char>^ ar = gcnew array<Char>(1);
			ar[0] = ' ';
			int n;
			n = textBox1->Lines->Length;
			for (int i = 1; i < n; i++)
				if (textBox1->Lines[i]->Split(ar)->Length != textBox1->Lines[i - 1]->Split(ar)->Length) {
					MessageBox::Show("Вы ввели не все данные!\n",
						"Матрица",
						MessageBoxButtons::OK,
						MessageBoxIcon::Error);
					return;
				}
			if (textBox1->Lines[0]->Split(ar)->Length != n) {
				MessageBox::Show("Неверные данные!\nДанная матрица не является квадратной.\n",
					"Матрица",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}
			array<int, 2>^ M = gcnew array<int, 2>(n, n);
			for (int i = 0; i < n; i++) {
				as = textBox1->Lines[i]->Split(ar);
				for (int j = 0; j < n; j++)
					M[i, j] = Convert::ToInt32(as[j]);
			}
			TransposeMatrix(M, n);
			textBox2->Text = "";
			as = gcnew array<String^>(n);
			for (int i = 0; i < n; i++) {
				s = "";
				for (int j = 0; j < n; j++)
					s += M[i, j].ToString() + " ";
				as[i] = s;
			}
			textBox2->Lines = as;
		}
	}
	};
}
