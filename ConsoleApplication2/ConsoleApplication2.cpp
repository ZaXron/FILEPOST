#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    cout << "1. Write" << endl;
    cout << "2. Read" << endl;

    int choice = 0;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        // �������� ��������� ��������� ������ � ���������� � ��� �����, ������� ����������� �� ������ � 
        // ��������� ������.
        ofstream out("Text.txt");

        // ���� ���� ������� �������.
        if (out.is_open())
        {
            // ���������� ������ � ����.
            out << 10 << ' ' << 123.5;
            out << "This is text file";

            // �������� ��������� ������.
            out.close();
        }
        else
        {
            cout << "Could not open the file" << endl;
        }
    }
    break;
    case 2:
    {
        int integerValue = 0;
        double doubleValue = 0.0;
        char string[10] = {};

        // �������� ��������� ��������� ������ � ���������� � ��� �����, ������� ����������� �� ������ � 
        // ��������� ������.
        ifstream in("Text.txt");

        // ���� ���� ������� �������.
        if (in.is_open())
        {
            // ���������� ������ �� ����� � ����������.
            in >> integerValue >> doubleValue;

            cout << integerValue << endl;
            cout << doubleValue << endl;

            // ���� ������������ �� ��� ���, ���� �� �������� ����� �����.
            while (!in.eof())
            {
                // ���������� ������ �� ����� �� ������ ����� �� ���� �������� �����.
                in >> string;
                cout << string << ' ';
            }

            // �������� ��������� ������.
            in.close();
        }
        else
        {
            cout << "Could not open the file" << endl;
        }
    }
    break;
    default:
        cout << "Invalid action" << endl;
        break;
    }

    return 0;
}