#include <iostream>
#include <string>
int wybor;
int x;
int y;
using namespace std;
int main()
{
	cout << "--------------------------------" << endl;
	cin >> x;
	cin >> y;
	system("cls");
	//menu//
	cout << "KALKULATOR\n";
	cout << "|1. DODAWANIE \n";
	cout << "|2. ODEJMOWANIE \n";
	cout << "|3. MNOZENIE \n";
	cout << "|4. DZIELENIE \n";
	cout << "--------------------------------" << endl;
	cin >> wybor;
	if (wybor == 1)
	{
		system("cls");
		cout << x + y << "<------------OTO TWOJ WYNIK!";
		system("pause");
}
else if (wybor == 2)
		{
		system("cls");
		cout << x - y << "<------------OTO TWOJ WYNIK!";
		system("pause");
		}
else if (wybor == 3)
		{
		system("cls");
		cout << x * y << "<------------OTO TWOJ WYNIK!";
		system("pause");
		}
else if (wybor == 4)
		{
		system("cls");
		cout << x / y << "<------------OTO TWOJ WYNIK!";
		system("pause");
		}
}