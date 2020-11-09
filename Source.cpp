// Lab_04_7.cpp 
// < Базарник Максим > 
// Лабораторна робота № 4.7 
//  Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень
// Варіант 1
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(9) << "x" << " |"
		<< setw(15) << "log((x + 1)/(x - 1))" << " |"
		<< setw(11) << "S" << " |"
		<< setw(8) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		n = 0; 
		a = 1. / x;
		S = 2 * a;
		do {
			n++;
			R = (2 * n - 1) / ((2 * n + 1) * x * x); 
			a *= R;
			S += 2 * a;
		}while (abs(a) >= eps);
		cout << "|" << setw(9) << setprecision(2) << x << " |"
			<< setw(20) << setprecision(5) << log((x + 1) / (x - 1)) << " |"
			<< setw(11) << setprecision(5) << S << " |"
			<< setw(8) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}