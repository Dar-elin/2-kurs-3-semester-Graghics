#pragma once
#include <cmath>

double PI = 3.14;

namespace Project3 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label3;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(600, 517);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"y = tgx";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(1030, 517);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"z = 1 + 2xy - x - y";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(469, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(370, 450);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(845, 42);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(538, 450);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox3_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(26, 42);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(370, 450);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox2_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(158, 517);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 23);
			this->label3->TabIndex = 7;
			this->label3->Text = L"y = ctgx";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1432, 591);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Графики";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int l, b, h, w;

		//======================================= График функций y = tgx ==========================================

	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		h = pictureBox1->Height;
		w = pictureBox1->Width;

		e->Graphics->DrawLine(Pens::White, 0, h / 2, w, h / 2);
		e->Graphics->DrawLine(Pens::White, w / 2, 0, w / 2, h);

		e->Graphics->DrawLine(Pens::White, w - 15, h / 2 + 5, w, h / 2);
		e->Graphics->DrawLine(Pens::White, w - 15, h / 2 - 5, w, h / 2);
		e->Graphics->DrawLine(Pens::White, w / 2 - 5, 15, w / 2, 0);
		e->Graphics->DrawLine(Pens::White, w / 2 + 5, 15, w / 2, 0);

		e->Graphics->DrawString("X", this->Font, Brushes::Red, w - 15, h / 2 - 15);
		e->Graphics->DrawString("Y", this->Font, Brushes::Red, w / 2 - 15, 5);

		double x1, x2, y1, y2, x, y, mx, my, dx;
		x1 = -0.9 * PI / 2;
		x2 = 0.9 * PI / 2;
		dx = 0.001;
		y1 = Math::Tan(x1);
		y2 = Math::Tan(x2);
		x = x1;
		while (x <= x2) {
			y = Math::Tan(x);
			if (y < y1) y1 = y;
			if (y > y2) y2 = y;
			x += dx;
		}
		my = 0.5 * h / (y2 - y1);
		mx = w / (x2 - x1);
		x = x1;
		y1 = Math::Tan(x);
		x += dx;
		while (x <= x2) {
			y = Math::Tan(x);
			e->Graphics->DrawLine(Pens::Green, (int)(x1 * mx + w / 2), (int)(h / 2 - y1 * my), (int)(x * mx + w / 2), (int)(h / 2 - y * my));
			x1 = x;
			y1 = y;
			x += dx;
		}
	}

		   //====================================== График функций y = ctgx ==========================================

	private: System::Void pictureBox2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		h = pictureBox1->Height;
		w = pictureBox1->Width;

		e->Graphics->DrawLine(Pens::White, 0, h / 2, w, h / 2);
		e->Graphics->DrawLine(Pens::White, w / 50, 0, w / 50, h);

		e->Graphics->DrawLine(Pens::White, w - 15, h / 2 + 5, w, h / 2);
		e->Graphics->DrawLine(Pens::White, w - 15, h / 2 - 5, w, h / 2);
		e->Graphics->DrawLine(Pens::White, w / 50 - 5, 15, w / 50, 0);
		e->Graphics->DrawLine(Pens::White, w / 50 + 5, 15, w / 50, 0);

		e->Graphics->DrawString("X", this->Font, Brushes::Red, w - 15, h / 2 - 15);
		e->Graphics->DrawString("Y", this->Font, Brushes::Red, w / 50 + 5, 5);

		double x1, x2, y1, y2, x, y, mx, my, dx;
		x1 = 0.1 * PI / 2;
		x2 = 1.9 * PI / 2;
		dx = 0.001;
		y1 = Math::Cos(x1) / Math::Sin(x1);
		y2 = Math::Cos(x2) / Math::Sin(x2);
		x = x1;
		while (x <= x2) {
			y = Math::Cos(x) / Math::Sin(x);
			if (y < y1) y1 = y;
			if (y > y2) y2 = y;
			x += dx;
		}
		my = 0.5 * h / (y2 - y1);
		mx = w / (x2 - x1);
		x = x1;
		y1 = Math::Cos(x) / Math::Sin(x);
		x += dx;
		while (x <= x2) {
			y = Math::Cos(x) / Math::Sin(x);
			e->Graphics->DrawLine(Pens::Blue, (int)(x1 * mx + w / 50), (int)(h / 2 - y1 * my), (int)(x * mx + w / 50), (int)(h / 2 - y * my));
			x1 = x;
			y1 = y;
			x += dx;
		}
	}

	private:
		static double x0 = 4, Y0 = -0.5, z0 = 3, alf = 4.4, bet = 4.92, A = -6.5, a = -6.5;
		static double Xmin = -1.5, Xmax = 1.5, Ymin = -1.5, Ymax = 1.5;
		static int Width = 200, Height = 200;
		static double h1 = 0.1, h0 = 0.25;
		static array<Point>^ ob = gcnew array<Point>(4);

	private: void IJ(double x, double y, double z, array<int>^ ar) {
		double Xn, Yn, Zn;

		//Осуществляем перенос системы координат в т.(x0,Y0,z0)
		Xn = (x - x0) * Math::Cos(alf) - (y - Y0) * Math::Sin(alf);
		Yn = ((x - x0) * Math::Sin(alf) + (y - Y0) * Math::Cos(alf)) * Math::Cos(bet) - (z - z0) * Math::Sin(bet);
		Zn = ((x - x0) * Math::Sin(alf) + (y - Y0) * Math::Cos(alf)) * Math::Sin(bet) + (z - z0) * Math::Cos(bet);

		//Делаем проекцию на плоскость
		Xn /= Zn / A + 1;
		Yn /= Zn / a + 1;

		//Масштабируем оси x и y
		ar[0] = Width * (Xn - Xmin) / (Xmax - Xmin);
		ar[1] = Height * (Yn - Ymax) / (Ymin - Ymax);
	}

	private: double F1(double x1, double y1) {
		return (1 + 2 * x1 * y1 - x1 - y1);
	}

		   //================================= График функции z = 1 + 2xy - x - y ====================================

	private: System::Void pictureBox3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		int i3, j3;
		int i1, j1, i2, j2;
		array<int>^ a1;
		array<int>^ a2;
		a1 = gcnew array<int>(2);
		a2 = gcnew array<int>(2);
		IJ(0, 0, 0, a1);

		//Рисуем и подписываем ось x
		IJ(4, 0, 0, a2);
		e->Graphics->DrawLine(Pens::White, a1[0], a1[1], a2[0], a2[1]);
		e->Graphics->DrawString("X", this->Font, Brushes::Red, a2[0] + 3, a2[1]);

		//Рисуем и подписываем ось y
		IJ(0, 4, 0, a2);
		e->Graphics->DrawLine(Pens::White, a1[0], a1[1], a2[0], a2[1]);
		e->Graphics->DrawString("Y", this->Font, Brushes::Red, a2[0] + 3, a2[1]);

		//Рисуем и подписываем ось z
		IJ(0, 0, 4.3, a2);
		e->Graphics->DrawLine(Pens::White, a1[0], a1[1], a2[0], a2[1]);
		e->Graphics->DrawString("Z", this->Font, Brushes::Red, a2[0] + 3, a2[1] - 3);


		for (j3 = 0; j3 < 25; j3++) {
			for (i3 = 0; i3 < 30; i3++) {
				IJ(h0 + h1 * i3, h0 + h1 * j3, F1(h0 + h1 * i3, h0 + h1 * j3), a1);
				ob[0].X = a1[0];
				ob[0].Y = a1[1];
				IJ(h0 + h1 * i3, h0 + h1 * (j3 + 1), F1(h0 + h1 * i3, h0 + h1 * (j3 + 1)), a1);
				ob[1].X = a1[0];
				ob[1].Y = a1[1];
				IJ(h0 + h1 * (i3 + 1), h0 + h1 * (j3 + 1), F1(h0 + h1 * (i3 + 1), h0 + h1 * (j3 + 1)), a1);
				ob[2].X = a1[0];
				ob[2].Y = a1[1];
				IJ(h0 + h1 * (i3 + 1), h0 + h1 * j3, F1(h0 + h1 * (i3 + 1), h0 + h1 * j3), a1);
				ob[3].X = a1[0];
				ob[3].Y = a1[1];
				e->Graphics->DrawPolygon(Pens::Yellow, ob);
			}
		}
	}
	};
}