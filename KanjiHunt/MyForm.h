#pragma once

namespace KanjiHunt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
			
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected:
	private: System::Windows::Forms::Button^  startbutton;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textTimer;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textHunt;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->startbutton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textTimer = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textHunt = (gcnew System::Windows::Forms::TextBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->startbutton);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->textTimer);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->textHunt);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->button21);
			this->splitContainer1->Panel2->Controls->Add(this->button22);
			this->splitContainer1->Panel2->Controls->Add(this->button23);
			this->splitContainer1->Panel2->Controls->Add(this->button24);
			this->splitContainer1->Panel2->Controls->Add(this->button25);
			this->splitContainer1->Panel2->Controls->Add(this->button16);
			this->splitContainer1->Panel2->Controls->Add(this->button17);
			this->splitContainer1->Panel2->Controls->Add(this->button18);
			this->splitContainer1->Panel2->Controls->Add(this->button19);
			this->splitContainer1->Panel2->Controls->Add(this->button20);
			this->splitContainer1->Panel2->Controls->Add(this->button11);
			this->splitContainer1->Panel2->Controls->Add(this->button12);
			this->splitContainer1->Panel2->Controls->Add(this->button13);
			this->splitContainer1->Panel2->Controls->Add(this->button14);
			this->splitContainer1->Panel2->Controls->Add(this->button15);
			this->splitContainer1->Panel2->Controls->Add(this->button6);
			this->splitContainer1->Panel2->Controls->Add(this->button7);
			this->splitContainer1->Panel2->Controls->Add(this->button8);
			this->splitContainer1->Panel2->Controls->Add(this->button9);
			this->splitContainer1->Panel2->Controls->Add(this->button10);
			this->splitContainer1->Panel2->Controls->Add(this->button5);
			this->splitContainer1->Panel2->Controls->Add(this->button4);
			this->splitContainer1->Panel2->Controls->Add(this->button3);
			this->splitContainer1->Panel2->Controls->Add(this->button2);
			this->splitContainer1->Panel2->Controls->Add(this->button1);
			this->splitContainer1->Size = System::Drawing::Size(684, 691);
			this->splitContainer1->SplitterDistance = 70;
			this->splitContainer1->TabIndex = 0;
			// 
			// startbutton
			// 
			this->startbutton->Font = (gcnew System::Drawing::Font(L"メイリオ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->startbutton->Location = System::Drawing::Point(437, 12);
			this->startbutton->Name = L"startbutton";
			this->startbutton->Size = System::Drawing::Size(211, 55);
			this->startbutton->TabIndex = 5;
			this->startbutton->Text = L"START";
			this->startbutton->UseVisualStyleBackColor = true;
			this->startbutton->Click += gcnew System::EventHandler(this, &MyForm::startbutton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(389, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 12);
			this->label3->TabIndex = 4;
			this->label3->Text = L"秒";
			// 
			// textTimer
			// 
			this->textTimer->Font = (gcnew System::Drawing::Font(L"メイリオ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->textTimer->Location = System::Drawing::Point(219, 12);
			this->textTimer->Multiline = true;
			this->textTimer->Name = L"textTimer";
			this->textTimer->Size = System::Drawing::Size(160, 55);
			this->textTimer->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(182, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 12);
			this->label2->TabIndex = 2;
			this->label2->Text = L"記録:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(73, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"を探せ!";
			// 
			// textHunt
			// 
			this->textHunt->Font = (gcnew System::Drawing::Font(L"メイリオ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->textHunt->Location = System::Drawing::Point(12, 12);
			this->textHunt->Multiline = true;
			this->textHunt->Name = L"textHunt";
			this->textHunt->Size = System::Drawing::Size(55, 55);
			this->textHunt->TabIndex = 0;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button21->Location = System::Drawing::Point(23, 443);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(125, 100);
			this->button21->TabIndex = 24;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button22->Location = System::Drawing::Point(154, 443);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(125, 100);
			this->button22->TabIndex = 23;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button23->Location = System::Drawing::Point(285, 443);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(125, 100);
			this->button23->TabIndex = 22;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button24->Location = System::Drawing::Point(416, 443);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(125, 100);
			this->button24->TabIndex = 21;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button25->Location = System::Drawing::Point(547, 443);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(125, 100);
			this->button25->TabIndex = 20;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button16->Location = System::Drawing::Point(23, 337);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(125, 100);
			this->button16->TabIndex = 19;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button17->Location = System::Drawing::Point(154, 337);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(125, 100);
			this->button17->TabIndex = 18;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button18->Location = System::Drawing::Point(285, 337);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(125, 100);
			this->button18->TabIndex = 17;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button19->Location = System::Drawing::Point(416, 337);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(125, 100);
			this->button19->TabIndex = 16;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button20->Location = System::Drawing::Point(547, 337);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(125, 100);
			this->button20->TabIndex = 15;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button11->Location = System::Drawing::Point(23, 231);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(125, 100);
			this->button11->TabIndex = 14;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button12->Location = System::Drawing::Point(154, 231);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(125, 100);
			this->button12->TabIndex = 13;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button13->Location = System::Drawing::Point(285, 231);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(125, 100);
			this->button13->TabIndex = 12;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button14->Location = System::Drawing::Point(416, 231);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(125, 100);
			this->button14->TabIndex = 11;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button15->Location = System::Drawing::Point(547, 231);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(125, 100);
			this->button15->TabIndex = 10;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button6->Location = System::Drawing::Point(23, 125);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 100);
			this->button6->TabIndex = 9;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button7->Location = System::Drawing::Point(154, 125);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(125, 100);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button8->Location = System::Drawing::Point(285, 125);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(125, 100);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button9->Location = System::Drawing::Point(416, 125);
			this->button9->Name = L"button9";
this->button9->Size = System::Drawing::Size(125, 100);
this->button9->TabIndex = 6;
this->button9->UseVisualStyleBackColor = true;
this->button9->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
// 
// button10
// 
this->button10->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
	static_cast<System::Byte>(128)));
this->button10->Location = System::Drawing::Point(547, 125);
this->button10->Name = L"button10";
this->button10->Size = System::Drawing::Size(125, 100);
this->button10->TabIndex = 5;
this->button10->UseVisualStyleBackColor = true;
this->button10->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
// 
// button5
// 
this->button5->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
	static_cast<System::Byte>(128)));
this->button5->Location = System::Drawing::Point(547, 19);
this->button5->Name = L"button5";
this->button5->Size = System::Drawing::Size(125, 100);
this->button5->TabIndex = 4;
this->button5->UseVisualStyleBackColor = true;
this->button5->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
// 
// button4
// 
this->button4->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
	static_cast<System::Byte>(128)));
this->button4->Location = System::Drawing::Point(416, 19);
this->button4->Name = L"button4";
this->button4->Size = System::Drawing::Size(125, 100);
this->button4->TabIndex = 3;
this->button4->UseVisualStyleBackColor = true;
this->button4->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
// 
// button3
// 
this->button3->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
	static_cast<System::Byte>(128)));
this->button3->Location = System::Drawing::Point(285, 19);
this->button3->Name = L"button3";
this->button3->Size = System::Drawing::Size(125, 100);
this->button3->TabIndex = 2;
this->button3->UseVisualStyleBackColor = true;
this->button3->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
// 
// button2
// 
this->button2->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
	static_cast<System::Byte>(128)));
this->button2->Location = System::Drawing::Point(154, 19);
this->button2->Name = L"button2";
this->button2->Size = System::Drawing::Size(125, 100);
this->button2->TabIndex = 1;
this->button2->UseVisualStyleBackColor = true;
this->button2->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
// 
// button1
// 
this->button1->Font = (gcnew System::Drawing::Font(L"メイリオ", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
	static_cast<System::Byte>(128)));
this->button1->Location = System::Drawing::Point(23, 19);
this->button1->Name = L"button1";
this->button1->Size = System::Drawing::Size(125, 100);
this->button1->TabIndex = 0;
this->button1->UseVisualStyleBackColor = true;
this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttons_click);
// 
// timer1
// 
this->timer1->Interval = 20;
this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
// 
// MyForm
// 
this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
this->ClientSize = System::Drawing::Size(684, 691);
this->Controls->Add(this->splitContainer1);
this->Name = L"MyForm";
this->Text = L"MyForm";
this->splitContainer1->Panel1->ResumeLayout(false);
this->splitContainer1->Panel1->PerformLayout();
this->splitContainer1->Panel2->ResumeLayout(false);
(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
this->splitContainer1->ResumeLayout(false);
this->ResumeLayout(false);

		}
#pragma endregion
		private:
			String^ correct = "荻";
			String^ mistake = "萩";
			double nowtime;


	private: System::Void buttons_click(System::Object^  sender, System::EventArgs^  e) {
		//25個のボタンすべてのクリックイベントを一括で定義
		if (((Button^)sender)->Text == correct){
				timer1->Stop();
			}
		else {
			nowtime += 10;
			}
	}
private: System::Void startbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	textHunt->Text = correct;

	for (int i = 0; i < splitContainer1->Panel2->Controls->Count; i++) {
		splitContainer1->Panel2->Controls[i]->Text = mistake;
	}
	Random^ rnd = gcnew Random();
	int crct = rnd->Next(0, splitContainer1->Panel2->Controls->Count);
	splitContainer1->Panel2->Controls[crct]->Text = correct;
	nowtime = 0;
	timer1->Start();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	nowtime += 0.02;
	textTimer->Text = nowtime.ToString("0.00");
}
};
}
