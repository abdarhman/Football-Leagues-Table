#include <string>
#include "Classes.h"
#include <msclr\marshal_cppstd.h>

#pragma once

namespace FottballTeamsProject {

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
	
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Panel^  panel1;












	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  Team;
	private: System::Windows::Forms::ColumnHeader^  Played;
	private: System::Windows::Forms::ColumnHeader^  Points;
	private: System::Windows::Forms::ColumnHeader^  Goals;
	private: System::Windows::Forms::ComboBox^  comboBox3;





















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Team = (gcnew System::Windows::Forms::ColumnHeader());
			this->Played = (gcnew System::Windows::Forms::ColumnHeader());
			this->Points = (gcnew System::Windows::Forms::ColumnHeader());
			this->Goals = (gcnew System::Windows::Forms::ColumnHeader());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Save League";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(154, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(197, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Welcome to your league";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter your league name";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(154, 96);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(197, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(154, 122);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(197, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(154, 148);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(197, 20);
			this->textBox4->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(154, 174);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(197, 20);
			this->textBox5->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(154, 200);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(197, 20);
			this->textBox6->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Team 1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Team 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Team 3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 177);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Team 4";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 203);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Team 5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 229);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Team 6";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(154, 226);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(197, 20);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(154, 252);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(197, 20);
			this->textBox8->TabIndex = 16;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(154, 278);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(197, 20);
			this->textBox9->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 255);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Team 7";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 281);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Team 8";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->tabControl1);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(376, 375);
			this->panel1->TabIndex = 20;
			this->panel1->Visible = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 25);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(370, 347);
			this->tabControl1->TabIndex = 10;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->textBox10);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(362, 321);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Match Arena";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(256, 153);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(33, 13);
			this->label17->TabIndex = 22;
			this->label17->Text = L"Away";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(53, 153);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(35, 13);
			this->label16->TabIndex = 21;
			this->label16->Text = L"Home";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 73);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(76, 13);
			this->label15->TabIndex = 20;
			this->label15->Text = L"Choose Match";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(125, 276);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Record Match";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(143, 194);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(60, 13);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Final Score";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(223, 191);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 16;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(23, 191);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 15;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(13, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(75, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Choose Week";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(159, 153);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 13);
			this->label11->TabIndex = 12;
			this->label11->Text = L"VS";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(95, 70);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(245, 21);
			this->comboBox2->TabIndex = 11;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(94, 13);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(246, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged_1);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listView1);
			this->tabPage2->Controls->Add(this->comboBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(362, 321);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"League Table";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->Team, this->Played,
					this->Points, this->Goals
			});
			this->listView1->Location = System::Drawing::Point(6, 46);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(350, 269);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// Team
			// 
			this->Team->Text = L"Team";
			this->Team->Width = 166;
			// 
			// Played
			// 
			this->Played->Text = L"Played";
			// 
			// Points
			// 
			this->Points->Text = L"Points";
			// 
			// Goals
			// 
			this->Goals->Text = L"Goals";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(5, 6);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(351, 21);
			this->comboBox3->TabIndex = 0;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(4, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 13;
			this->label12->Text = L"label12";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(376, 374);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		league* MY_LEAGUE;
		node<team> * p;
		team* team1;
		team* team2;
		team* team3;
		team* team4;
		team* team5;
		team* team6;
		team* team7;
		team* team8;
		vector<team>* teamsvectorforweeks;
		match* CurrentMatch = new match();

		
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		MY_LEAGUE = new league(msclr::interop::marshal_as<std::string>(textBox1->Text));
		team1 = new team(msclr::interop::marshal_as<std::string>(textBox2->Text));
		team2 = new team(msclr::interop::marshal_as<std::string>(textBox3->Text));
		team3 = new team(msclr::interop::marshal_as<std::string>(textBox4->Text));
		team4 = new team(msclr::interop::marshal_as<std::string>(textBox5->Text));
		team5 = new team(msclr::interop::marshal_as<std::string>(textBox6->Text));
		team6 = new team(msclr::interop::marshal_as<std::string>(textBox7->Text));
		team7 = new team(msclr::interop::marshal_as<std::string>(textBox8->Text));
		team8 = new team(msclr::interop::marshal_as<std::string>(textBox9->Text));
		teamsvectorforweeks = new vector<team>();
		teamsvectorforweeks->push_back(*team1);
		teamsvectorforweeks->push_back(*team2);
		teamsvectorforweeks->push_back(*team3);
		teamsvectorforweeks->push_back(*team4);
		teamsvectorforweeks->push_back(*team5);
		teamsvectorforweeks->push_back(*team6);
		teamsvectorforweeks->push_back(*team7);
		teamsvectorforweeks->push_back(*team8);
		MY_LEAGUE->AddTeam(*team1);
		MY_LEAGUE->AddTeam(*team2);
		MY_LEAGUE->AddTeam(*team3);
		MY_LEAGUE->AddTeam(*team4);
		MY_LEAGUE->AddTeam(*team5);
		MY_LEAGUE->AddTeam(*team6);
		MY_LEAGUE->AddTeam(*team7);
		MY_LEAGUE->AddTeam(*team8);

		comboBox1->Items->Add("Weak 1");
		comboBox1->Items->Add("Weak 2");
		comboBox1->Items->Add("Weak 3");
		comboBox1->Items->Add("Weak 4");
		comboBox1->Items->Add("Weak 5");
		comboBox1->Items->Add("Weak 6");
		comboBox1->Items->Add("Weak 7");
		comboBox1->Items->Add("Weak 8");
		comboBox1->Items->Add("Weak 9");
		comboBox1->Items->Add("Weak 10");
		comboBox1->Items->Add("Weak 11");
		comboBox1->Items->Add("Weak 12");
		comboBox1->Items->Add("Weak 13");
		comboBox1->Items->Add("Weak 14");

		

		
		/*l->additem(*team1);
		l->additem(*team2);
		l->additem(*team3);
		l->additem(*team4);
		l->additem(*team5);
		l->additem(*team6);
		l->additem(*team7);
		l->additem(*team8);*/
		
		label12->Text = "Welcome to " + textBox1->Text;
		
		

		comboBox3->Items->Add("Name");
		comboBox3->Items->Add("Points");
		comboBox3->Items->Add("Goals");
		comboBox3->Items->Add("Mateches Played");
		panel1->Visible = true;
		//textBox1->Text =  gcnew String(team1->getName().c_str());
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 int i = 0;
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox3->Text == "Name"){stype = 0;}
	else if (comboBox3->Text == "Points"){ stype = 1; }
	else if (comboBox3->Text == "Goals"){ stype = 2; }
	else if (comboBox3->Text == "Mateches Played"){ stype = 3; }
	if (i == 0){ p = merge_sort(MY_LEAGUE->getHead(), 8); i++; }
	else { p = merge_sort(p, 8); }
	listView1->Items->Clear();
	listView1->View = Windows::Forms::View::Details;
	ListViewItem^ lvi1 = gcnew ListViewItem(gcnew String(p->getdata().getName().c_str()));
	lvi1->SubItems->Add(System::Convert::ToString(p->getdata().getMatchesPlayed()));
	lvi1->SubItems->Add(System::Convert::ToString(p->getdata().getPoints()));
	lvi1->SubItems->Add(System::Convert::ToString(p->getdata().getGoals()));
	ListViewItem^ lvi2 = gcnew ListViewItem(gcnew String(p->getnext()->getdata().getName().c_str()));
	lvi2->SubItems->Add(System::Convert::ToString(p->getnext()->getdata().getMatchesPlayed()));
	lvi2->SubItems->Add(System::Convert::ToString(p->getnext()->getdata().getPoints()));
	lvi2->SubItems->Add(System::Convert::ToString(p->getnext()->getdata().getGoals()));
	ListViewItem^ lvi3 = gcnew ListViewItem(gcnew String(p->getnext()->getnext()->getdata().getName().c_str()));
	lvi3->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getdata().getMatchesPlayed()).c_str()));
	lvi3->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getdata().getPoints()).c_str()));
	lvi3->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getdata().getGoals()).c_str()));
	ListViewItem^ lvi4 = gcnew ListViewItem(gcnew String(p->getnext()->getnext()->getnext()->getdata().getName().c_str()));
	lvi4->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getdata().getMatchesPlayed()).c_str()));
	lvi4->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getdata().getPoints()).c_str()));
	lvi4->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getdata().getGoals()).c_str()));
	ListViewItem^ lvi5 = gcnew ListViewItem(gcnew String(p->getnext()->getnext()->getnext()->getnext()->getdata().getName().c_str()));
	lvi5->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getnext()->getdata().getMatchesPlayed()).c_str()));
	lvi5->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getnext()->getdata().getPoints()).c_str()));
	lvi5->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getnext()->getdata().getGoals()).c_str()));
	ListViewItem^ lvi6 = gcnew ListViewItem(gcnew String(p->getnext()->getnext()->getnext()->getnext()->getnext()->getdata().getName().c_str()));
	lvi6->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getnext()->getnext()->getdata().getMatchesPlayed()).c_str()));
	lvi6->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getnext()->getnext()->getdata().getPoints()).c_str()));
	lvi6->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getnext()->getnext()->getdata().getGoals()).c_str()));
	ListViewItem^ lvi7 = gcnew ListViewItem(gcnew String(p->getnext()->getnext()->getnext()->getnext()->getnext()->getnext()->getdata().getName().c_str()));
	lvi7->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getnext()->getnext()->getnext()->getdata().getMatchesPlayed()).c_str()));
	lvi7->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getnext()->getnext()->getnext()->getdata().getPoints()).c_str()));
	lvi7->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getnext()->getnext()->getnext()->getdata().getGoals()).c_str()));
	ListViewItem^ lvi8 = gcnew ListViewItem(gcnew String(p->getnext()->getnext()->getnext()->getnext()->getnext()->getnext()->getnext()->getdata().getName().c_str()));
	lvi8->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getnext()->getnext()->getnext()->getnext()->getdata().getMatchesPlayed()).c_str()));
	lvi8->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getnext()->getnext()->getnext()->getnext()->getdata().getPoints()).c_str()));
	lvi8->SubItems->Add(gcnew String(to_string(p->getnext()->getnext()->getnext()->getnext()->getnext()->getnext()->getnext()->getdata().getGoals()).c_str()));
	listView1->Items->Add(lvi1);
	listView1->Items->Add(lvi2);
	listView1->Items->Add(lvi3);
	listView1->Items->Add(lvi4);
	listView1->Items->Add(lvi5);
	listView1->Items->Add(lvi6);
	listView1->Items->Add(lvi7);
	listView1->Items->Add(lvi8);
	//gcnew String(p->getdata().getName().c_str())
}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
	vector<week>WeeklySchedule = getWeeklyScedule(*teamsvectorforweeks);
	string comboentry1, comboentry2, comboentry3, comboentry4;
	if (comboBox1->Text == "Weak 1")
	{
		comboentry1 = WeeklySchedule[0].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[0].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[0].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[0].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[0].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[0].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[0].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[0].getMatches()[3].getSecondTeam().getName();
	}
	else if (comboBox1->Text == "Weak 2")
	{
		comboentry1 = WeeklySchedule[1].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[1].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[1].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[1].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[1].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[1].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[1].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[1].getMatches()[3].getSecondTeam().getName();
	}
	else if (comboBox1->Text == "Weak 3")
	{
		comboentry1 = WeeklySchedule[2].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[2].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[2].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[2].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[2].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[2].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[2].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[2].getMatches()[3].getSecondTeam().getName();
	}
	else if (comboBox1->Text == "Weak 4")
	{
		comboentry1 = WeeklySchedule[3].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[3].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[3].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[3].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[3].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[3].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[3].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[3].getMatches()[3].getSecondTeam().getName();
	}
	else if (comboBox1->Text == "Weak 5")
	{
		comboentry1 = WeeklySchedule[4].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[4].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[4].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[4].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[4].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[4].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[4].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[4].getMatches()[3].getSecondTeam().getName();
	}
	else if (comboBox1->Text == "Weak 6")
	{
		comboentry1 = WeeklySchedule[5].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[5].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[5].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[5].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[5].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[5].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[5].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[5].getMatches()[3].getSecondTeam().getName();
	}
	else if (comboBox1->Text == "Weak 7")
	{
		comboentry1 = WeeklySchedule[6].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[6].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[6].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[6].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[6].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[6].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[6].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[6].getMatches()[3].getSecondTeam().getName();
	}
	else if (comboBox1->Text == "Weak 8")
	{
		comboentry1 = WeeklySchedule[7].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[7].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[7].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[7].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[7].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[7].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[7].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[7].getMatches()[3].getSecondTeam().getName();
	}
	else if (comboBox1->Text == "Weak 9")
	{
		comboentry1 = WeeklySchedule[8].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[8].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[8].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[8].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[8].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[8].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[8].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[8].getMatches()[3].getSecondTeam().getName();
	}
	else if (comboBox1->Text == "Weak 10")
	{
		comboentry1 = WeeklySchedule[9].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[9].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[9].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[9].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[9].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[9].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[9].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[9].getMatches()[3].getSecondTeam().getName();
	}
	else if (comboBox1->Text == "Weak 11")
	{
		comboentry1 = WeeklySchedule[10].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[10].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[10].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[10].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[10].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[10].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[10].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[10].getMatches()[3].getSecondTeam().getName();
	}
	else if (comboBox1->Text == "Weak 12")
	{
		comboentry1 = WeeklySchedule[11].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[11].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[11].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[11].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[11].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[11].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[11].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[11].getMatches()[3].getSecondTeam().getName();
	}
	else if (comboBox1->Text == "Weak 13")
	{
		comboentry1 = WeeklySchedule[12].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[12].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[12].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[12].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[12].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[12].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[12].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[12].getMatches()[3].getSecondTeam().getName();
	}
	else if (comboBox1->Text == "Weak 14")
	{
		comboentry1 = WeeklySchedule[13].getMatches()[0].getFirstTeam().getName() + " VS " + WeeklySchedule[13].getMatches()[0].getSecondTeam().getName();
		comboentry2 = WeeklySchedule[13].getMatches()[1].getFirstTeam().getName() + " VS " + WeeklySchedule[13].getMatches()[1].getSecondTeam().getName();
		comboentry3 = WeeklySchedule[13].getMatches()[2].getFirstTeam().getName() + " VS " + WeeklySchedule[13].getMatches()[2].getSecondTeam().getName();
		comboentry4 = WeeklySchedule[13].getMatches()[3].getFirstTeam().getName() + " VS " + WeeklySchedule[13].getMatches()[3].getSecondTeam().getName();
	}
	comboBox2->Text = "";
	comboBox2->Items->Clear();
	comboBox2->Items->Add(gcnew String(comboentry1.c_str()));
	comboBox2->Items->Add(gcnew String(comboentry2.c_str()));
	comboBox2->Items->Add(gcnew String(comboentry3.c_str()));
	comboBox2->Items->Add(gcnew String(comboentry4.c_str()));
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox2->SelectedIndex == 0)	{ *CurrentMatch = GetCurrentMatch(0); }
	if (comboBox2->SelectedIndex == 1)	{ *CurrentMatch = GetCurrentMatch(1); }
	if (comboBox2->SelectedIndex == 2)	{ *CurrentMatch = GetCurrentMatch(2); }
	if (comboBox2->SelectedIndex == 3)	{ *CurrentMatch = GetCurrentMatch(3); }
	
}
		 private: match GetCurrentMatch(int index)
		 {
			 vector<week> t = getWeeklyScedule(*teamsvectorforweeks);
			 if (comboBox1->Text == "Weak 1"){ return t[0].getMatches()[index]; }
			 if (comboBox1->Text == "Weak 2"){ return t[1].getMatches()[index]; }
			 if (comboBox1->Text == "Weak 3"){ return t[2].getMatches()[index]; }
			 if (comboBox1->Text == "Weak 4"){ return t[3].getMatches()[index]; }
			 if (comboBox1->Text == "Weak 5"){ return t[4].getMatches()[index]; }
			 if (comboBox1->Text == "Weak 6"){ return t[5].getMatches()[index]; }
			 if (comboBox1->Text == "Weak 7"){ return t[6].getMatches()[index]; }
			 if (comboBox1->Text == "Weak 8"){ return t[7].getMatches()[index]; }
			 if (comboBox1->Text == "Weak 9"){ return t[8].getMatches()[index]; }
			 if (comboBox1->Text == "Weak 10"){ return t[9].getMatches()[index]; }
			 if (comboBox1->Text == "Weak 11"){ return t[10].getMatches()[index]; }
			 if (comboBox1->Text == "Weak 12"){ return t[11].getMatches()[index]; }
			 if (comboBox1->Text == "Weak 13"){ return t[12].getMatches()[index]; }
			 else{ return t[12].getMatches()[index]; }
		 }
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		int homegoals = int::Parse(textBox10->Text);
		int awaygoals = int::Parse(textBox11->Text);
		CurrentMatch->setScore(homegoals, awaygoals);
		CurrentMatch->setAsPlayed();
		textBox10->Text = "";
		textBox11->Text = "";
		if (CurrentMatch->getFirstTeam().getName() == team1->getName()){ team1->addGoals(homegoals); team1->addmatch(); }
		else if (CurrentMatch->getFirstTeam().getName() == team2->getName()){ team2->addGoals(homegoals); team2->addmatch(); }
		else if (CurrentMatch->getFirstTeam().getName() == team3->getName()){ team3->addGoals(homegoals); team3->addmatch(); }
		else if (CurrentMatch->getFirstTeam().getName() == team4->getName()){ team4->addGoals(homegoals); team4->addmatch(); }
		else if (CurrentMatch->getFirstTeam().getName() == team5->getName()){ team5->addGoals(homegoals); team5->addmatch(); }
		else if (CurrentMatch->getFirstTeam().getName() == team6->getName()){ team6->addGoals(homegoals); team6->addmatch(); }
		else if (CurrentMatch->getFirstTeam().getName() == team7->getName()){ team7->addGoals(homegoals); team7->addmatch(); }
		else if (CurrentMatch->getFirstTeam().getName() == team8->getName()){ team8->addGoals(homegoals); team8->addmatch(); }

		if (CurrentMatch->getSecondTeam().getName() == team1->getName()){ team1->addGoals(awaygoals); team1->addmatch(); }
		else if (CurrentMatch->getSecondTeam().getName() == team2->getName()){ team2->addGoals(awaygoals); team2->addmatch(); }
		else if (CurrentMatch->getSecondTeam().getName() == team3->getName()){ team3->addGoals(awaygoals); team3->addmatch(); }
		else if (CurrentMatch->getSecondTeam().getName() == team4->getName()){ team4->addGoals(awaygoals); team4->addmatch(); }
		else if (CurrentMatch->getSecondTeam().getName() == team5->getName()){ team5->addGoals(awaygoals); team5->addmatch(); }
		else if (CurrentMatch->getSecondTeam().getName() == team6->getName()){ team6->addGoals(awaygoals); team6->addmatch(); }
		else if (CurrentMatch->getSecondTeam().getName() == team7->getName()){ team7->addGoals(awaygoals); team7->addmatch(); }
		else if (CurrentMatch->getSecondTeam().getName() == team8->getName()){ team8->addGoals(awaygoals); team8->addmatch(); }
		if (homegoals != awaygoals){
			if (CurrentMatch->getWinner().getName() == team1->getName()){ team1->addPoints(3); }
			else if (CurrentMatch->getWinner().getName() == team2->getName()){ team2->addPoints(3); }
			else if (CurrentMatch->getWinner().getName() == team3->getName()){ team3->addPoints(3); }
			else if (CurrentMatch->getWinner().getName() == team4->getName()){ team4->addPoints(3); }
			else if (CurrentMatch->getWinner().getName() == team5->getName()){ team5->addPoints(3); }
			else if (CurrentMatch->getWinner().getName() == team6->getName()){ team6->addPoints(3); }
			else if (CurrentMatch->getWinner().getName() == team7->getName()){ team7->addPoints(3); }
			else if (CurrentMatch->getWinner().getName() == team8->getName()){ team8->addPoints(3); }
		}
		else 
		{
			if (CurrentMatch->getFirstTeam().getName() == team1->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getFirstTeam().getName() == team2->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getFirstTeam().getName() == team3->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getFirstTeam().getName() == team4->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getFirstTeam().getName() == team5->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getFirstTeam().getName() == team6->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getFirstTeam().getName() == team7->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getFirstTeam().getName() == team8->getName()){ team1->addPoints(1); }

			if (CurrentMatch->getSecondTeam().getName() == team1->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getSecondTeam().getName() == team2->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getSecondTeam().getName() == team3->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getSecondTeam().getName() == team4->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getSecondTeam().getName() == team5->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getSecondTeam().getName() == team6->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getSecondTeam().getName() == team7->getName()){ team1->addPoints(1); }
			else if (CurrentMatch->getSecondTeam().getName() == team8->getName()){ team1->addPoints(1); }
		}
		MY_LEAGUE = new league(msclr::interop::marshal_as<std::string>(textBox1->Text));
		MY_LEAGUE->AddTeam(*team1);
		MY_LEAGUE->AddTeam(*team2);
		MY_LEAGUE->AddTeam(*team3);
		MY_LEAGUE->AddTeam(*team4);
		MY_LEAGUE->AddTeam(*team5);
		MY_LEAGUE->AddTeam(*team6);
		MY_LEAGUE->AddTeam(*team7);
		MY_LEAGUE->AddTeam(*team8);
		i = 0;
}
};
}
