// Jocelyn Brown  J00966095  11/9/22
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, x1, x2, discriminant, real, complex;
	cout << "Enter coefficents a, b, and c: ";
	cin >> a >> b >> c;
	discriminant = b * b - 4 * a * c;

	if (discriminant > 0)
	{
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "Two real roots" << endl;
		cout << "x1=" << x1<< endl;
		cout << "x2= " << x2 << endl;

	}

	else if (discriminant==0)
	{
		cout << "the single root is:" << endl;
		x1 = -b / (2 * a);
		cout << "x1= x2=" << x1 << endl;

	}
	else
	{
		real = -b / (2 * a);
		complex = sqrt(-discriminant) / (2 * a);
			cout << "complex roots" << endl;
			cin >> complex;
	}
	return 0;
}
