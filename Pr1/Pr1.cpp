
#include <iostream> 
#include <string> 
#include <windows.h> 
using namespace std;
int main()
{
	system("color B1");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string last_name;
	cout << "������ ������: ";
	getline(cin, last_name);
	string first_name;
	cout << "������ ��'�: ";
	getline(cin, first_name);
	int age;
	cout << "������ ��: ";
	cin >> age;
	// clear chache 
	cin.ignore();
	string live_place;
	cout << "������ ���� ����������: ";
	getline(cin, live_place);
	string name_of_the_University;
	cout << "������ ����� �����������: ";
	getline(cin, live_place);
	int course;
	cout << "������ ����: ";
	cin >> course;
	// clear chache 
	cin.ignore();
	cout << "\n���� ���:" << endl;
	cout << "������� " << last_name << endl;
	cout << "��'� " << first_name << endl;
	cout << "³� " << age << endl;
	cout << "̳��� ���������� " << live_place << endl;
	cout << "����� ����������� " << name_of_the_University << endl;
	cout << "���� " << course << endl;

	return 0;
}