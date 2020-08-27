#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Student
{
private:
	char* surname;
	char* name;
	char* patronymic;
	char* contactNumber;
	char* emailAddress;
	char* homeAddress;
public:
	Student(const char* surname,const char* name,const  char* contactNumber)
	{
		void SetSurname();
		void SetName();
		void SetContactNumber();
		this->surname = new char[strlen(surname) + 1];
		this->name = new char[strlen(name) + 1];
		this->contactNumber = new char[strlen(contactNumber) + 1];
		strcpy(this->surname, surname);
		strcpy(this->name, name);
		strcpy(this->contactNumber, contactNumber);
	}
	
	void showData()
	{
		cout << surname << endl;
		cout << name << endl;
		cout << contactNumber << endl;
	}
};
class InputData 
{
private:
	char surname1[35];
	char* surname;

	char* name;
	char* patronymic;
	char* contactNumber;
	char* emailAddress;
	char* homeAddress;
public:
	
	void SetSurname()
	{
		cout << "Enter Student surname" << endl;
		short c;
		int i = 0;
		while ((c = getchar()) != '\n')
		{
			surname1[i] = c;
			i++;
			/*	if ('\n')
				{
					surname[i + 1] = '\0';
				}*/
		}
		surname = new char[i + 1];
		strcpy(surname, surname1);
		cout << endl;
	}
	char* GetSurname()
	{
		return surname;

	}
	//void SetName()
	//{
	//	cout << "Enter Student name" << endl;
	//	short c;
	//	for (int i = 0; (c = getchar()) != '\n'; i++)
	//	{
	//		name[i] = c;
	//		/*	if ('\n')
	//			{
	//				surname[i + 1] = '\0';
	//			}*/
	//	}
	//	cout << endl;
	//}
	//void SetContactNumber()
	//{
	//	cout << "Enter Student contactNumber" << endl;
	//	short c;
	//	for (int i = 0; (c = getchar()) != '\n'; i++)
	//	{
	//		contactNumber[i] = c;
	//		/*	if ('\n')
	//			{
	//				surname[i + 1] = '\0';
	//			}*/
	//	}
	//	cout << endl;
	//}

};

int main()
{
	InputData objInput;
	Student objS(objInput.GetSurname(), objInput.GetSurname(), objInput.GetSurname());
	objS.showData();
}