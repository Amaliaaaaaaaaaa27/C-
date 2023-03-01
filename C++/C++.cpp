
#include <iostream>
#include <cmath>


using namespace std;

double y;

double f(double x)
{
	return x * x - y;
}
int main()
{
	double a, b, i = 0, A, B;

	double eps = 1e-8; //1^(-10) // pow(1,-10)

	cout << "Alegeti numarul a carui radical dorim sa il aflam: ";

	cin >> y;

	cout << endl;

	cout << "Alegeti capetele intervalului " << endl;

	cout << "a= ";

	cin >> A;

	cout << endl;

	cout << "b= ";

	cin >> B;


	a = A;
	b = B;


	//METODA BISECTIEI


	while (b - a > eps)
	{
		if (f((a + b) / 2) < 0)

			a = (a + b) / 2;

		else 
			b = (a + b) / 2;
		i++;
	}

	//AFISARE
	//cout.fixed;


	cout.precision(20);

	cout << "REZULTAT OBTINUT PRIN METODA BISECTIEI" << endl;

	cout << "Solutia ecuatiei f(x)=0 este " << a;

	cout << endl;

	cout << "sqrt(" << y << ")= " << sqrt(y) << endl;

	cout << "Numarul de iteratii: " << i;

	cout << endl;

	cout << endl;


	i = 0;
	a = A;
	b = B;
	double f_b = f(b);


	//METODA COARDEI

	while (y - a * a > eps)
	{
		a = (a * f_b - b * f(a)) / (f_b - f(a));

		cout << a << endl;
		i++;
	}
	//AFISARE

	cout << "REZULTAT OBTINUT PRIN METODA COARDEI" << endl;

	cout << "Solutia ecuatiei f(x)=0 este " << a;

	cout << endl;

	cout << "sqrt(" << y << ")= " << sqrt(y) << endl;

	cout << "Numarul de iteratii: " << i;

	// metoda tangentei 















	return 0;

}