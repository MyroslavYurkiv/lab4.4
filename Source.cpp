#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, xp, xk, dx, y, R;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "----------------------------------------" << endl;
	cout << "|" << setw(5) << "Табуляцiя функцiї, заданої графiком" << setw(4) << " |" << endl;
	cout << "----------------------------------------" << endl;
	cout << "|" << setw(5) << "Лабораторна №4.4" << setw(23) << " |" << endl;
	cout << "|" << setw(5) << "Юркiв Мирослав" << setw(25) << " |" << endl;
	cout << "----------------------------------------" << endl;
	cout << "|" << setw(10) << "x" << setw(10) << " |"
		<< setw(9) << "y" << setw(10) << " |" << endl;
	cout << "----------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -1 - R)
			y = (((x + 1.5 - R) * (-R)) / (0.5 - 2 * R)) + R;
		else
			if ((-1 - R < x) && (x <= -1))
				y = sqrt(pow(R, 2) - pow((x + 1), 2));
			else
				if ((-1 < x) && (x <= 1))
					y = R;
				else
					if ((1 < x) && (x <= 2))
						y = ((x - 1) * (-1 - R)) + R;
					else
						y = -1;
		cout << "|" << setw(10) << setprecision(2) << x << setw(10)
			<< " |" << setw(9) << setprecision(3) << y << setw(10)
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------------------------" << endl;
	return 0;
}