#pragma once

namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		
		}

	protected:	
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Title;
	protected:
	private: System::Windows::Forms::Button^ NumSetter;
	private: System::Windows::Forms::TextBox^ NumTextbox;
	private: System::Windows::Forms::Label^ NumTitle;
	private: System::Windows::Forms::DataGridView^ procesT;
	private: System::Windows::Forms::Button^ ProcessAdd;
	private: System::Windows::Forms::TextBox^ BurstIn;
	private: System::Windows::Forms::Label^ P_cnt;
	private: System::Windows::Forms::Label^ Qtitle;
	private: System::Windows::Forms::Button^ QSetter;
	private: System::Windows::Forms::TextBox^ QIn;
	private: System::Windows::Forms::Label^ AvgWT;
	private: System::Windows::Forms::Panel^ ganttChart;
	private: System::Windows::Forms::Label^ ganttText;
	private: System::Windows::Forms::Label^ GanttTitle;
	private: System::Windows::Forms::Button^ Resetting;
	private: System::Windows::Forms::Button^ CalcBtn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProcNum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BurstTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ WT_Res;
	private: System::Windows::Forms::Label^ RemCnt;
	int P_num;
	int PNum;
	int P_cnter = 1;
	private: System::Windows::Forms::Button^ ExitBtn;
	int Quantime;
	array< int >^ BTarr;
	private:		
		System::ComponentModel::Container ^components;
	private: bool dragging;
	private: System::Windows::Forms::Label^ Cnter;

	private: Point offset;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Title = (gcnew System::Windows::Forms::Label());
			this->NumSetter = (gcnew System::Windows::Forms::Button());
			this->NumTextbox = (gcnew System::Windows::Forms::TextBox());
			this->NumTitle = (gcnew System::Windows::Forms::Label());
			this->procesT = (gcnew System::Windows::Forms::DataGridView());
			this->ProcNum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BurstTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->WT_Res = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProcessAdd = (gcnew System::Windows::Forms::Button());
			this->BurstIn = (gcnew System::Windows::Forms::TextBox());
			this->P_cnt = (gcnew System::Windows::Forms::Label());
			this->Qtitle = (gcnew System::Windows::Forms::Label());
			this->QSetter = (gcnew System::Windows::Forms::Button());
			this->QIn = (gcnew System::Windows::Forms::TextBox());
			this->AvgWT = (gcnew System::Windows::Forms::Label());
			this->ganttChart = (gcnew System::Windows::Forms::Panel());
			this->Cnter = (gcnew System::Windows::Forms::Label());
			this->ganttText = (gcnew System::Windows::Forms::Label());
			this->GanttTitle = (gcnew System::Windows::Forms::Label());
			this->Resetting = (gcnew System::Windows::Forms::Button());
			this->CalcBtn = (gcnew System::Windows::Forms::Button());
			this->RemCnt = (gcnew System::Windows::Forms::Label());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->procesT))->BeginInit();
			this->ganttChart->SuspendLayout();
			this->SuspendLayout();
			// 
			// Title
			// 
			this->Title->AccessibleName = L"";
			this->Title->AutoSize = true;
			this->Title->BackColor = System::Drawing::Color::Transparent;
			this->Title->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->Title->Location = System::Drawing::Point(121, 27);
			this->Title->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(503, 39);
			this->Title->TabIndex = 2;
			this->Title->Text = L"Cpu Scheduling Round Robin";
			this->Title->UseMnemonic = false;
			// 
			// NumSetter
			// 
			this->NumSetter->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NumSetter->ForeColor = System::Drawing::Color::Black;
			this->NumSetter->Location = System::Drawing::Point(112, 138);
			this->NumSetter->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->NumSetter->Name = L"NumSetter";
			this->NumSetter->Size = System::Drawing::Size(85, 27);
			this->NumSetter->TabIndex = 7;
			this->NumSetter->Text = L"Set";
			this->NumSetter->UseVisualStyleBackColor = true;
			this->NumSetter->Click += gcnew System::EventHandler(this, &MyForm::NumSetter_Click);
			// 
			// NumTextbox
			// 
			this->NumTextbox->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NumTextbox->Location = System::Drawing::Point(18, 138);
			this->NumTextbox->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->NumTextbox->Name = L"NumTextbox";
			this->NumTextbox->Size = System::Drawing::Size(105, 27);
			this->NumTextbox->TabIndex = 6;
			// 
			// NumTitle
			// 
			this->NumTitle->AutoSize = true;
			this->NumTitle->BackColor = System::Drawing::Color::Transparent;
			this->NumTitle->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NumTitle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->NumTitle->Location = System::Drawing::Point(14, 110);
			this->NumTitle->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->NumTitle->Name = L"NumTitle";
			this->NumTitle->Size = System::Drawing::Size(226, 24);
			this->NumTitle->TabIndex = 5;
			this->NumTitle->Text = L"Number of Processes";
			// 
			// procesT
			// 
			this->procesT->AllowUserToAddRows = false;
			this->procesT->AllowUserToDeleteRows = false;
			this->procesT->AllowUserToResizeColumns = false;
			this->procesT->AllowUserToResizeRows = false;
			this->procesT->BackgroundColor = System::Drawing::Color::MediumSeaGreen;
			this->procesT->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->procesT->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->ProcNum, this->BurstTime,
					this->WT_Res
			});
			this->procesT->GridColor = System::Drawing::Color::MediumSeaGreen;
			this->procesT->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->procesT->Location = System::Drawing::Point(348, 110);
			this->procesT->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->procesT->Name = L"procesT";
			this->procesT->ReadOnly = true;
			this->procesT->RowHeadersWidth = 51;
			this->procesT->RowTemplate->Height = 26;
			this->procesT->Size = System::Drawing::Size(376, 285);
			this->procesT->TabIndex = 16;
			// 
			// ProcNum
			// 
			this->ProcNum->Frozen = true;
			this->ProcNum->HeaderText = L"Process\'s Number";
			this->ProcNum->Name = L"ProcNum";
			this->ProcNum->ReadOnly = true;
			this->ProcNum->Width = 115;
			// 
			// BurstTime
			// 
			this->BurstTime->Frozen = true;
			this->BurstTime->HeaderText = L"Burst Time";
			this->BurstTime->Name = L"BurstTime";
			this->BurstTime->ReadOnly = true;
			this->BurstTime->Width = 90;
			// 
			// WT_Res
			// 
			this->WT_Res->Frozen = true;
			this->WT_Res->HeaderText = L"Wating Time Result";
			this->WT_Res->Name = L"WT_Res";
			this->WT_Res->ReadOnly = true;
			this->WT_Res->Width = 125;
			// 
			// ProcessAdd
			// 
			this->ProcessAdd->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProcessAdd->ForeColor = System::Drawing::Color::Black;
			this->ProcessAdd->Location = System::Drawing::Point(207, 213);
			this->ProcessAdd->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->ProcessAdd->Name = L"ProcessAdd";
			this->ProcessAdd->Size = System::Drawing::Size(102, 28);
			this->ProcessAdd->TabIndex = 19;
			this->ProcessAdd->Text = L"Add";
			this->ProcessAdd->UseVisualStyleBackColor = true;
			this->ProcessAdd->Click += gcnew System::EventHandler(this, &MyForm::ProcessAdd_Click);
			// 
			// BurstIn
			// 
			this->BurstIn->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BurstIn->Location = System::Drawing::Point(75, 213);
			this->BurstIn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->BurstIn->Name = L"BurstIn";
			this->BurstIn->Size = System::Drawing::Size(142, 27);
			this->BurstIn->TabIndex = 18;
			this->BurstIn->Text = L"Burst time";
			this->BurstIn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::BurstIn_MouseClick);
			// 
			// P_cnt
			// 
			this->P_cnt->AutoSize = true;
			this->P_cnt->BackColor = System::Drawing::Color::Transparent;
			this->P_cnt->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P_cnt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->P_cnt->Location = System::Drawing::Point(14, 213);
			this->P_cnt->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->P_cnt->Name = L"P_cnt";
			this->P_cnt->Size = System::Drawing::Size(48, 24);
			this->P_cnt->TabIndex = 17;
			this->P_cnt->Text = L"P(1)";
			// 
			// Qtitle
			// 
			this->Qtitle->AutoSize = true;
			this->Qtitle->BackColor = System::Drawing::Color::Transparent;
			this->Qtitle->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Qtitle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Qtitle->Location = System::Drawing::Point(14, 263);
			this->Qtitle->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Qtitle->Name = L"Qtitle";
			this->Qtitle->Size = System::Drawing::Size(160, 24);
			this->Qtitle->TabIndex = 20;
			this->Qtitle->Text = L"Quantum time";
			// 
			// QSetter
			// 
			this->QSetter->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QSetter->ForeColor = System::Drawing::Color::Black;
			this->QSetter->Location = System::Drawing::Point(112, 301);
			this->QSetter->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->QSetter->Name = L"QSetter";
			this->QSetter->Size = System::Drawing::Size(85, 27);
			this->QSetter->TabIndex = 22;
			this->QSetter->Text = L"Set";
			this->QSetter->UseVisualStyleBackColor = true;
			this->QSetter->Click += gcnew System::EventHandler(this, &MyForm::QSetter_Click);
			// 
			// QIn
			// 
			this->QIn->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QIn->Location = System::Drawing::Point(18, 301);
			this->QIn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->QIn->Name = L"QIn";
			this->QIn->Size = System::Drawing::Size(118, 27);
			this->QIn->TabIndex = 21;
			// 
			// AvgWT
			// 
			this->AvgWT->AutoSize = true;
			this->AvgWT->BackColor = System::Drawing::Color::Transparent;
			this->AvgWT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AvgWT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->AvgWT->Location = System::Drawing::Point(14, 406);
			this->AvgWT->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->AvgWT->Name = L"AvgWT";
			this->AvgWT->Size = System::Drawing::Size(180, 24);
			this->AvgWT->TabIndex = 23;
			this->AvgWT->Text = L"Avg WT result ->";
			// 
			// ganttChart
			// 
			this->ganttChart->AutoScroll = true;
			this->ganttChart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ganttChart->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ganttChart->Controls->Add(this->Cnter);
			this->ganttChart->Controls->Add(this->ganttText);
			this->ganttChart->ForeColor = System::Drawing::Color::Aquamarine;
			this->ganttChart->Location = System::Drawing::Point(30, 497);
			this->ganttChart->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->ganttChart->Name = L"ganttChart";
			this->ganttChart->Size = System::Drawing::Size(694, 86);
			this->ganttChart->TabIndex = 25;
			// 
			// Cnter
			// 
			this->Cnter->AutoSize = true;
			this->Cnter->BackColor = System::Drawing::Color::Transparent;
			this->Cnter->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cnter->Location = System::Drawing::Point(2, 10);
			this->Cnter->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Cnter->Name = L"Cnter";
			this->Cnter->Size = System::Drawing::Size(0, 12);
			this->Cnter->TabIndex = 1;
			// 
			// ganttText
			// 
			this->ganttText->AutoSize = true;
			this->ganttText->BackColor = System::Drawing::Color::Black;
			this->ganttText->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ganttText->Location = System::Drawing::Point(2, 30);
			this->ganttText->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->ganttText->Name = L"ganttText";
			this->ganttText->Size = System::Drawing::Size(0, 12);
			this->ganttText->TabIndex = 0;
			// 
			// GanttTitle
			// 
			this->GanttTitle->AutoSize = true;
			this->GanttTitle->BackColor = System::Drawing::Color::Transparent;
			this->GanttTitle->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GanttTitle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->GanttTitle->Location = System::Drawing::Point(14, 458);
			this->GanttTitle->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->GanttTitle->Name = L"GanttTitle";
			this->GanttTitle->Size = System::Drawing::Size(133, 24);
			this->GanttTitle->TabIndex = 24;
			this->GanttTitle->Text = L"Gantt Chart";
			// 
			// Resetting
			// 
			this->Resetting->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Resetting->ForeColor = System::Drawing::Color::Black;
			this->Resetting->Location = System::Drawing::Point(409, 430);
			this->Resetting->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Resetting->Name = L"Resetting";
			this->Resetting->Size = System::Drawing::Size(130, 40);
			this->Resetting->TabIndex = 27;
			this->Resetting->Text = L"Reset";
			this->Resetting->UseVisualStyleBackColor = true;
			this->Resetting->Click += gcnew System::EventHandler(this, &MyForm::Resetting_Click);
			// 
			// CalcBtn
			// 
			this->CalcBtn->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->CalcBtn->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CalcBtn->ForeColor = System::Drawing::Color::Black;
			this->CalcBtn->Location = System::Drawing::Point(18, 346);
			this->CalcBtn->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->CalcBtn->Name = L"CalcBtn";
			this->CalcBtn->Size = System::Drawing::Size(291, 44);
			this->CalcBtn->TabIndex = 26;
			this->CalcBtn->Text = L"Start Calculating";
			this->CalcBtn->UseVisualStyleBackColor = false;
			this->CalcBtn->Click += gcnew System::EventHandler(this, &MyForm::CalcBtn_Click);
			// 
			// RemCnt
			// 
			this->RemCnt->AutoSize = true;
			this->RemCnt->BackColor = System::Drawing::Color::Transparent;
			this->RemCnt->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemCnt->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->RemCnt->Location = System::Drawing::Point(15, 181);
			this->RemCnt->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->RemCnt->Name = L"RemCnt";
			this->RemCnt->Size = System::Drawing::Size(274, 18);
			this->RemCnt->TabIndex = 28;
			this->RemCnt->Text = L"Add The Number of Proccesses first";
			// 
			// ExitBtn
			// 
			this->ExitBtn->BackColor = System::Drawing::Color::Transparent;
			this->ExitBtn->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.28F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitBtn->ForeColor = System::Drawing::Color::Red;
			this->ExitBtn->Location = System::Drawing::Point(596, 430);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(41, 40);
			this->ExitBtn->TabIndex = 29;
			this->ExitBtn->Text = L"X";
			this->ExitBtn->UseVisualStyleBackColor = false;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &MyForm::ExitBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(755, 599);
			this->Controls->Add(this->ExitBtn);
			this->Controls->Add(this->RemCnt);
			this->Controls->Add(this->Resetting);
			this->Controls->Add(this->CalcBtn);
			this->Controls->Add(this->ganttChart);
			this->Controls->Add(this->GanttTitle);
			this->Controls->Add(this->AvgWT);
			this->Controls->Add(this->QSetter);
			this->Controls->Add(this->QIn);
			this->Controls->Add(this->Qtitle);
			this->Controls->Add(this->ProcessAdd);
			this->Controls->Add(this->BurstIn);
			this->Controls->Add(this->P_cnt);
			this->Controls->Add(this->procesT);
			this->Controls->Add(this->NumSetter);
			this->Controls->Add(this->NumTextbox);
			this->Controls->Add(this->NumTitle);
			this->Controls->Add(this->Title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"CPU Scheduling";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->procesT))->EndInit();
			this->ganttChart->ResumeLayout(false);
			this->ganttChart->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	// Form loading - first run
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dragging = false;
		BurstIn->Enabled = false;
		ProcessAdd->Enabled = false;
	}

	// Input the num of processes 
	private: System::Void NumSetter_Click(System::Object^ sender, System::EventArgs^ e) {
			P_num = Int32::Parse(NumTextbox->Text);
			PNum = Int32::Parse(NumTextbox->Text);
			NumTextbox->Enabled = false;
			NumSetter->Enabled = false;
			RemCnt->Text = NumTextbox->Text + " Processes Remaining";
			BTarr = gcnew array< int >(PNum);
			BurstIn->Enabled = true;
			ProcessAdd->Enabled = true;
	}

	// Add the burst time of processes
	private: System::Void ProcessAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		// Show a message dialogue with "There are no left processes"
		if (P_num == 0) ;
		else {
			P_num--;
			procesT->Rows->Add(P_cnt->Text, BurstIn->Text);
			BTarr[P_cnter-1] = Int32::Parse(BurstIn->Text);
			P_cnter++;
			P_cnt->Text = "P(" + P_cnter + ")";
			
			if (P_num == 0) {
				RemCnt->Text = "Processes Added Successfully";
				P_cnt->Text = "Done";
				BurstIn->Enabled = false;
				ProcessAdd->Enabled = false;
			}
			else RemCnt->Text = P_num + " Processes Remaining";
		}
	}
	
	// Exit the form button
	private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	// Quantom input
	private: System::Void QSetter_Click(System::Object^ sender, System::EventArgs^ e) {
		Quantime = Int32::Parse(QIn->Text);
		QIn->Enabled = false;
		QSetter->Enabled = false;
	}

	// Round robin Algorithm
	private: System::Void CalcBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		// Add the wating time to the table
		int temp = 0;

		array< int >^ BTarr2 = gcnew array< int >(PNum);
		for (int i = 0; i < PNum; i++) BTarr2[i] = BTarr[i];

		array<bool>^ BT_dn = gcnew array< bool >(PNum);

		for (int i = 0; i < PNum; i++) BT_dn[i] = false;
		
		// Gantt Chart
		int sum = 0; 
		for (int i = 0; i < PNum; i++) sum += BTarr[i];
		int sumWT=0;

 		for (int i = 0, cnt=0; cnt<sum ;i++)
		{
			if (i == PNum) i = 0;

			if (BT_dn[i]) continue;

			if (BTarr[i] > Quantime) 
			{
				BTarr[i] -= Quantime;

				for (int j = 0; j < Quantime; j++)
				{
					cnt++;
					ganttText->Text += "|" + "P(" + (i + 1) + ")";
					if (cnt < 10)
						Cnter->Text += " " + cnt + " --";
					else
						Cnter->Text += " " + cnt + "--";
				}
			}
			// The left in the process is less than quantom time
			else
			{

				for (int j = 0; j < BTarr[i]; j++)
				{
					cnt++;
					ganttText->Text += "|" + "P(" + (i + 1) + ")";
					if(cnt<10)
						Cnter->Text += " " + cnt + " --";
					else
						Cnter->Text += " " + cnt + "--";

				}

				BTarr[i] = 0;
				BT_dn[i] = true;
				sumWT += cnt-BTarr2[i];
				procesT->Rows[i]->Cells[2]->Value = (cnt - BTarr2[i]);
			}

			// Finish a one cycle
			if (i+1 == PNum) i = -1;
		}

		// Write the average waiting time
		double AvgRes = (double)sumWT / (double)PNum;
		AvgWT->Text += " " + AvgRes.ToString("f3");
		CalcBtn->Text = "Succesfully Calculated";
		CalcBtn->Enabled = false;
	}

	// The dragging of the window
	//=============================
	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}	
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (this->dragging)
		{
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = false;
	}
	//=============================


	private: System::Void Resetting_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Restart();	
	}
	private: System::Void BurstIn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		BurstIn->Text = "";
	}
};
}
