
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x;
	float a, b;
	cout << "Menu:" << endl;
	cout << "Dodawanie wciśnij - 1 " << endl;
	cout << "Odejmowanie wciśnij - 2 " << endl;
	cout << "Mnozenie wciśnij - 3 " << endl;
	cout << "Dzielenie wciśnij - 4 " << endl;
	cout << "Wyjdz - 0 " << endl;
	cin >> x;
	cout << "Wprowadz a: ";
	cin >> a;
	cout << "Wprowadz b: ";
	cin >> b;
	switch (x)
	{
	case 1:
		cout << "wynik = " << a + b << endl;
		break;
	case 2:
		cout << "wynik = " << a - b << endl;
		break;
	case 3:
		cout << "wynik = " << a * b << endl;
		break;
	case 4:
		if (b == 0) {
			cout << "Nie dziel przez 0" << endl;
		}
		else {
			cout << "Wynik = " << a / b << endl;
		}
		break;
	}




	return 0;

}