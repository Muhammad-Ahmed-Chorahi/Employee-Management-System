//----------Header Files----------//
#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

//----------Class of Employee----------//
class Employee
{
public:
	string name,id,designation,experience;
	int age, ctc;

	Employee()
	{
		name = " ";
		id = " ";
		designation = " ";
		experience = " ";
		age = 0;
		ctc = 0;
	}
};

//----------Class to create node----------//
class node
{
public:
	Employee val;
	node* next;

	node(Employee data)
	{
		val = data;
		next = NULL;
	}
};

//----------Class of Data Muplation----------//
class mangement
{
private:
	node* head=NULL;

public:
	mangement()
	{
		head = NULL;
	}

	//----------Function to Add New Employee Record----------//
	void add() 
	{
		system("cls");
		cout << "\n\t\t\t--------------------------------------------";
		cout << "\n\t\t\t\t|| WELCOME TO EMPLOYEE MANAGEMENT SYSTEM ||";
		cout << "\n\t\t\t--------------------------------------------";
		cout << "\n\n\t\t\t\t\t-| Add New Employee Record |-";
		Employee data;
		cin.ignore();
		cout << "\n\n\t\t\tEnter Employee Name: ";
		getline(cin, data.name);
		cout << "\n\t\t\tEnter Employee ID: ";
		getline(cin, data.id);
		cout << "\n\t\t\tEnter Employee Designation: ";
		getline(cin, data.designation);
		cout << "\n\t\t\tEnter Employee Experience: ";
		getline(cin, data.experience);
		cout << "\n\t\t\tEnter Employee Age: ";
		cin >> data.age;
		cout << "\n\t\t\tEnter Employee CTC: ";
		cin >> data.ctc;
		node* new_node = new node(data);
		if (head == NULL)
		{
			head = new_node;
		}
		else
		{
			node* temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = new_node;
		}
		cout << "\n\n\t\t\t\t\t-| Record Added Successfully |-";
		system("pause");
	}

	//----------Function to Display All Employee Record----------//
	void display()
	{
		system("cls");
		cout << "\n\t\t\t--------------------------------------------";
		cout << "\n\t\t\t\t|| WELCOME TO EMPLOYEE MANAGEMENT SYSTEM ||";
		cout << "\n\t\t\t--------------------------------------------";
		cout << "\n\n\t\t\t\t\t-| Display All Employee Record |-";
		if (head == NULL)
		{
			cout << "\n\n\t\t\t\t\t     -| List is empty |-" << endl;
			system("pause");
			return;
		}
		node* temp = head;
		while (temp != NULL)
		{
			cout << "\n\n\t\t\tEmployee Name: " << temp->val.name;
			cout << "\n\t\t\tEmployee ID: " << temp->val.id;
			cout << "\n\t\t\tEmployee Designation: " << temp->val.designation;
			cout << "\n\t\t\tEmployee Experience: " << temp->val.experience;
			cout << "\n\t\t\tEmployee Age: " << temp->val.age;
			cout << "\n\t\t\tEmployee CTC: " << temp->val.ctc;
			temp = temp->next;
		}
		cout << endl;
		system("pause");
	}

	//----------Function to Modify Employee Record----------//
	void modify()
	{
		system("cls");
		cout << "\n\t\t\t--------------------------------------------";
		cout << "\n\t\t\t\t|| WELCOME TO EMPLOYEE MANAGEMENT SYSTEM ||";
		cout << "\n\t\t\t--------------------------------------------";
		cout << "\n\n\t\t\t\t\t-| Modify Employee Record |-";
		if (head == NULL)
		{
			cout << "\n\n\t\t\t\t\t -| List is empty |-" << endl;
			system("pause");
			return;
		}
		string id;
		cin.ignore();
		cout << "\n\n\t\t\tEnter Employee ID: ";
		getline(cin, id);
		node* temp = head;
		while (temp != NULL)
		{
			if (temp->val.id == id)
			{
				cout << "\n\n\t\t\tEnter Employee Name: ";
				getline(cin, temp->val.name);
				cout << "\n\t\t\tEnter Employee ID: ";
				getline(cin, temp->val.id);
				cout << "\n\t\t\tEnter Employee Designation: ";
				getline(cin, temp->val.designation);
				cout << "\n\t\t\tEnter Employee Experience: ";
				getline(cin, temp->val.experience);
				cout << "\n\t\t\tEnter Employee Age: ";
				cin >> temp->val.age;
				cout << "\n\t\t\tEnter Employee CTC: ";
				cin >> temp->val.ctc;
				cout << "\n\n\t\t\t\t\t-| Record Modified Successfully |-";
				break;
			}
			temp = temp->next;
		}
		system("pause");
	}

	//----------Function to Search Employee Record----------//
	void search()
	{
		system("cls");
		cout << "\n\t\t\t--------------------------------------------";
		cout << "\n\t\t\t\t|| WELCOME TO EMPLOYEE MANAGEMENT SYSTEM ||";
		cout << "\n\t\t\t--------------------------------------------";
		cout << "\n\n\t\t\t\t\t-| Search Employee Record |-";
		if (head == NULL)
		{
			cout << "\n\n\t\t\t\t\t -| List is empty |-" << endl;
			system("pause");
			return;
		}
		string id;
		cin.ignore();
		cout << "\n\n\t\t\tEnter Employee ID: ";
		getline(cin, id);
		node* temp = head;
		while (temp != NULL)
		{
			if (temp->val.id == id)
			{
				cout << "\n\n\t\t\tEmployee Name: " << temp->val.name;
				cout << "\n\t\t\tEmployee ID: " << temp->val.id;
				cout << "\n\t\t\tEmployee Designation: " << temp->val.designation;
				cout << "\n\t\t\tEmployee Experience: " << temp->val.experience;
				cout << "\n\t\t\tEmployee Age: " << temp->val.age;
				cout << "\n\t\t\tEmployee CTC: " << temp->val.ctc;
				break;
			}
			temp = temp->next;
		}
		cout << endl;
		system("pause");
	}

	//----------Function to Delete Employee Record----------//
	void Delete()
	{
		system("cls");
		cout << "\n\t\t\t--------------------------------------------";
		cout << "\n\t\t\t\t|| WELCOME TO EMPLOYEE MANAGEMENT SYSTEM ||";
		cout << "\n\t\t\t--------------------------------------------";
		cout << "\n\n\t\t\t\t\t-| Delete Employee Record |-";
		if (head == NULL)
		{
			cout << "\n\n\t\t\t\t\t -| List is empty |-" << endl;
			system("pause");
			return;
		}
		string id;
		cin.ignore();
		cout << "\n\n\t\t\tEnter Employee ID: ";
		getline(cin, id);
		node* temp = head;
		node* prev = NULL;
		while (temp != NULL)
		{
			if (temp->val.id == id)
			{
				if (prev == NULL)
				{
					head = temp->next;
				}
				else
				{
					prev->next = temp->next;
				}
				delete temp;
				cout << "\n\n\t\t\t\t\t-| Record Deleted Successfully |-";
				break;
			}
			prev = temp;
			temp = temp->next;
		}
		system("pause");
	}

	//----------Function to Exit----------//
	void exit()
	{
		system("cls");
		cout << "\n\t\t\t--------------------------------------------";
		cout << "\n\t\t\t\t|| WELCOME TO EMPLOYEE MANAGEMENT SYSTEM ||";
		cout << "\n\t\t\t--------------------------------------------";
		cout << "\n\n\t\t\t\t\t-| Thank You For Using Our System |-";
		cout << "\n\n\t\t\t\t\t-| Press Any Key To Exit |-";
		cin.get();
		cin.get();
	}

	//----------Function to Display Menu----------//
	void menu()
	{
		int choice;
		system("cls");
		cout << "\n\t\t\t--------------------------------------------";
		cout << "\n\t\t\t\t|| WELCOME TO EMPLOYEE MANAGEMENT SYSTEM ||";
		cout << "\n\t\t\t--------------------------------------------";
		cout<<"\n\t\t\t\t 1. Enter New Employee Record";
		cout<<"\n\t\t\t\t 2. Display All Employee Record";
		cout<<"\n\t\t\t\t 3. Modify Employee Record";
		cout<<"\n\t\t\t\t 4. Search Employee Record";
		cout<<"\n\t\t\t\t 5. Delete Employee Record";
		cout<<"\n\t\t\t\t 0. Exit";
		cout<<"\n\n\t\t\t\t Enter Your Choice: ";
		cin>>choice;

		switch (choice)
		{
			case 1:
				add();
				menu();
				break;
			case 2:
				display();
				menu();
				break;
			case 3:
				modify();
				menu();
				break;
			case 4:
				search();
				menu();
				break;
			case 5:
				Delete();
				menu();
				break;
			case 0:
				exit();
				break;
			default:
				cout << "\n\n\t\t\t\t\t-| Invalid Choice |-";
				cout << "\n\n\t\t\tPress Any Key To Continue...";
				cin.get();
				cin.get();
				break;
		}
	}
};

//----------Funtion for Employee Authentication----------//
void password_user()
{
	string pass_reg = "";
	string name_reg = "";
	string pass = "";
	string name = "";
	fstream file;
	char ch;
	system("cls");
	cout << "\n\t\t\t -------------------------------------------";
	cout << "\n\t\t\t||  WELCOME TO EMPLOYEE MANAGEMENT SYSTEM  ||";
	cout << "\n\t\t\t -------------------------------------------";
	cout << "\n\n\t\t\t   -| Press: [1] Register & [2] Login  |-";
	int selection;
	cout << "\n\nPlease Enter Value: ";
	cin >> selection;
	//-------------------if user press [1], then it would lead them to register----------------//
	if (selection == 1)
	{
		system("cls");
		cout << "\n\t\t\t\t\t---------------------------";
		cout << "\n\t\t\t\t\t>> REGISTRATION EMPLOYEE <<";
		cout << "\n\t\t\t\t\t---------------------------";
		cout << "\n\n\t\t\t\t\tEnter Your Name: ";
		cin >> name_reg;
		cout << "\n\t\t\t\t\tEnter Your Password: ";
		ch = _getch();
		while (ch != 13)
		{
			pass_reg.push_back(ch);
			cout << '*';
			ch = _getch();
		}
		file.open("Ep_data.txt", ios::app);
		file << " " << name_reg << " " << pass_reg << "\n";
		file.close();
		cout << "\nRegistration Succesfully save";
		_getch();
		password_user();
	}
	//-------------------if user press [2], then it would lead them to login----------------//
	else if (selection == 2)
	{
		system("cls");
		file.open("Ep_data.txt", ios::in);
		cout << "\n\t\t\t\t\t--------------------";
		cout << "\n\t\t\t\t\t>> LOGIN EMPLOYEE <<";
		cout << "\n\t\t\t\t\t--------------------";
		cout << "\n\n\t\t\t\t\tEnter Your Name: ";
		cin >> name;
		cout << "\n\t\t\t\t\tEnter Your Password: ";
		ch = _getch();
		//To show star when the password is entered
		//13 is used so when enter is pressed is will stop displaying stars
		while (ch != 13)
		{
			pass.push_back(ch);
			cout << '*';
			ch = _getch();
		}
		//name and password pushed to the file
		file >> name_reg >> pass_reg;
		while (!file.eof())
		{
			if (pass == pass_reg && name == name_reg)
			{
				cout << "\n\n\n\t\t\t\t\t| Verfiying EMPLOYEE |\n\t\t\t\t\t";
				//sleep funtion to slow down the process by using header file windows.h
				for (int a = 1; a < 8; a++)
				{
					Sleep(500);
					cout << "...";
				}
				cout << "\n\nAccess Granted..\n\n";
				system("PAUSE");
				system("cls");
			}
			else
			{
				cout << "\n\n\n\t\t\t\t\t| Verfiying EMPLOYEE |\n\t\t\t\t\t";
				for (int a = 1; a < 8; a++)
				{
					Sleep(500);
					cout << "...";
				}
				cout << "\n\nAccess Aborted...\n\n";
				system("PAUSE");
				system("cls");
				password_user();
			}
			file >> name_reg >> pass_reg;
		}
		file.close();
	}
	else
	{
		cout << "\nInvalid Input.. Please Try Again..";
		password_user();
	}
}

//----------Main Function----------//
int main()
{
	password_user();
	mangement obj;
	obj.menu();
	return 0;
}