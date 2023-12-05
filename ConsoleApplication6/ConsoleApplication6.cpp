

#include <iostream> 
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
#include "windows.h";
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int t; 
	cout << "enter n";
	cin >> t;
	switch (t) {
	case 1:
		cout << "Меркурий";
		break;

	case 2:
		cout << "Венера";
		break;

	case 3:
		cout << "Земля";
		break;
	case 4: 
		cout << "Марс";
		break;

	case 5:
		cout << "Юпитер";
		break;
	case 6:
		cout << "Сатурн";
		break;
	case 7: 
		cout << "Уран";
		break;
	case 8:
		cout << "Нептун";
		break;
	default:
		cout << "планета не існує";
		break;


	}
	
	
}

