#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ txtDisplay;
	protected:

	protected:


	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ btn0;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ btn3;

	private: System::Windows::Forms::Button^ btn2;

	private: System::Windows::Forms::Button^ btn1;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn4;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btn9;

	private: System::Windows::Forms::Button^ btn8;

	private: System::Windows::Forms::Button^ btn7;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ lblShowOp;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::Color::White;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtDisplay->Location = System::Drawing::Point(32, 17);
			this->txtDisplay->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(360, 63);
			this->txtDisplay->TabIndex = 26;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(327, 372);
			this->button13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(67, 59);
			this->button13->TabIndex = 62;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(223, 372);
			this->button14->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(67, 59);
			this->button14->TabIndex = 61;
			this->button14->Text = L"=";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(128, 372);
			this->button15->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(67, 59);
			this->button15->TabIndex = 60;
			this->button15->Text = L",";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn0->Location = System::Drawing::Point(32, 372);
			this->btn0->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(67, 59);
			this->btn0->TabIndex = 59;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::buttom_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(327, 305);
			this->button9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 59);
			this->button9->TabIndex = 58;
			this->button9->Text = L"*";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->Location = System::Drawing::Point(223, 305);
			this->btn3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(67, 59);
			this->btn3->TabIndex = 57;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::buttom_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->Location = System::Drawing::Point(128, 305);
			this->btn2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(67, 59);
			this->btn2->TabIndex = 56;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::buttom_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->Location = System::Drawing::Point(32, 305);
			this->btn1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(67, 59);
			this->btn1->TabIndex = 55;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::buttom_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(327, 239);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 59);
			this->button4->TabIndex = 54;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->Location = System::Drawing::Point(223, 239);
			this->btn6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(67, 59);
			this->btn6->TabIndex = 53;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::buttom_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->Location = System::Drawing::Point(128, 239);
			this->btn5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(67, 59);
			this->btn5->TabIndex = 52;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::buttom_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn4->Location = System::Drawing::Point(32, 239);
			this->btn4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(67, 59);
			this->btn4->TabIndex = 51;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::buttom_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(327, 172);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 59);
			this->button2->TabIndex = 50;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn9->Location = System::Drawing::Point(223, 172);
			this->btn9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(67, 59);
			this->btn9->TabIndex = 49;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::buttom_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn8->Location = System::Drawing::Point(128, 172);
			this->btn8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(67, 59);
			this->btn8->TabIndex = 48;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::buttom_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->Location = System::Drawing::Point(32, 172);
			this->btn7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(67, 59);
			this->btn7->TabIndex = 47;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::buttom_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(327, 106);
			this->button17->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(67, 59);
			this->button17->TabIndex = 70;
			this->button17->Text = L"+/-";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(223, 106);
			this->button18->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(67, 59);
			this->button18->TabIndex = 69;
			this->button18->Text = L"C";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(128, 106);
			this->button19->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(67, 59);
			this->button19->TabIndex = 68;
			this->button19->Text = L"CE";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(32, 106);
			this->button20->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(67, 59);
			this->button20->TabIndex = 67;
			this->button20->Text = L"<-";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->Location = System::Drawing::Point(43, 27);
			this->lblShowOp->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 17);
			this->lblShowOp->TabIndex = 71;
			this->lblShowOp->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(416, 454);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->txtDisplay);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstNum;
		double secondNum;
		double result;
		String^ operation;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		// buttom C
		txtDisplay->Text = "0";
		lblShowOp->Text = "";
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
		if (txtDisplay->Text == "")
		{
			txtDisplay->Text = "0";
		}
	}
	private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		// buttom CE
		txtDisplay->Text = "0";
	}
	private: System::Void buttom_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);

		if (txtDisplay->Text == "0")
		{
			txtDisplay->Text = Numbers->Text;
		}
		else
		{
			txtDisplay->Text = txtDisplay->Text + Numbers->Text;
		}
	}
	private: System::Void Arithmetic(System::Object^ sender, System::EventArgs^ e) {

		Button^ op = safe_cast<Button^>(sender);
		firstNum = Double::Parse(txtDisplay->Text);
		txtDisplay->Text = "";
		operation = op->Text;
		lblShowOp->Text = System::Convert::ToString(firstNum) + " " + operation;
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		lblShowOp->Text = "";
		secondNum = Double::Parse(txtDisplay->Text);

		if (operation == "+")
		{
			result = firstNum + secondNum;
			txtDisplay->Text = System::Convert::ToString(result);
		}
		else if (operation == "-")
		{
			result = firstNum - secondNum;
			txtDisplay->Text = System::Convert::ToString(result);
		}
		else if (operation == "*")
		{
			result = firstNum * secondNum;
			txtDisplay->Text = System::Convert::ToString(result);
		}
		else if (operation == "/")
		{
			result = firstNum / secondNum;
			txtDisplay->Text = System::Convert::ToString(result);
		}
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtDisplay->Text->Length > 0)
		{
			txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
		}
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		// Decimal point
		if (!txtDisplay->Text->Contains(","))
		{
			txtDisplay->Text = txtDisplay->Text + ",";
		}
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		// Plus change minus 
		if (txtDisplay->Text->Contains("-"))
		{
			txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
		}
		else
		{
			txtDisplay->Text = "-" + txtDisplay->Text;
		}
	}
	};
}
