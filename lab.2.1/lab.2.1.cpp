// lab.2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	double x; //вхыдний параметр
	double z1; //результат обчислення 1 виразу
	// doublez2 ; //результат обчислення 2 виразу

	cout << "x="; cin >> x;

	z1 = 2 * x;
	//z2=x+x

	cout << endl;
	cout << "z1=" << z1 << endl;
	//cout << "z2=" << z2 << endl;

	cin.get();
	return 0;
}