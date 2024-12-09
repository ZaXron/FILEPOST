#include <fstream>
#include <iostream>
using namespace std;

class Student
{
	string name;
	string surname;
	int age;
public:
	Student() = default;
	Student(const char* n, const char* sur, int a)
	{
		name = n;
		surname = sur;
		age = a;
	}
	void Print()
	{
		cout << "Name: " << name << endl << "Surname: " << surname << endl << "Age: " << age;
	}
	void SaveFile()
	{
		ofstream write("StudentFile.txt");
		write << "Name: " << name << endl << "Surname: " << surname << endl << "Age: " << age;
	}
	void ReadFile()
	{
		ifstream read("StudentFile.txt");
		if (read)
		{
			const int size = 300;
			do
			{
				char buffer[size] = {};
				read.getline(buffer, size);
				cout << buffer << endl;
			} while (read);
			read.close();
		}
		else
		{
			cout << "Could not open the file" << endl;
		}
	}

};

int main() {
	//char str[100];
	//cout << "Enter text: ";
	//cin.getline(str, 100);
	///*cout << str << endl;*/
	//
	//ofstream write("MyFile.txt");
	//write << str << endl;
	//write.close();

	//ifstream read("MyFile.txt");

	//char buff[10];
	//while (!read.eof()) {
	//	read >> buff;
	//	cout << buff << ' ';
	//}
	//read.close();

	Student Rita("Zachary", "Egorov", 17);
	Rita.Print();
	Rita.ReadFile();
}