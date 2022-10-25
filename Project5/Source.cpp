#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, a, b, x;
	double y, p, t, dx;
	const double pi = atan(1.0) * 4.0;

	cout << "Enter n, a, b: ";
	cin >> n >> a >> b;

	x = a;
	p = 1;
	dx = (b - a) / (n - 1);

	while (x <= b)
	{
		y = (sin(2.0 * pi * x / 180.0)) / (1.0 + x);

		cout << "\nx = " << x << "\tf(x) = " << y << endl;

		if (modf(y, &t) < 0.5)
			p *= y;

		x += dx;
	}
	
	cout << "\n\nProduct = " << p << endl << endl;

	system("Pause");
	return 0;
}
