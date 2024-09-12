
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
	cout << "Введіть прівище: ";
	getline(cin, last_name);
	string first_name;
	cout << "Введіть ім'я: ";
	getline(cin, first_name);
	int age;
	cout << "Введіть вік: ";
	cin >> age;
	// clear chache 
	cin.ignore();
	string live_place;
	cout << "Введіть місце проживання: ";
	getline(cin, live_place);
	string name_of_the_University;
	cout << "Введіть назву університету: ";
	getline(cin, live_place);
	int course;
	cout << "Введіть курс: ";
	cin >> course;
	// clear chache 
	cin.ignore();
	cout << "\nВаші дані:" << endl;
	cout << "Прізвище " << last_name << endl;
	cout << "Ім'я " << first_name << endl;
	cout << "Вік " << age << endl;
	cout << "Місце проживання " << live_place << endl;
	cout << "Назва університету " << name_of_the_University << endl;
	cout << "Курс " << course << endl;

	return 0;
}