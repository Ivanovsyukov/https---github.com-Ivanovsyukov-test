#include <iostream>
#include <cmath>
int main(){
	double a, b, c;
	double x_1, x_2;
	std::cout << "Input your first number: ";
	std::cin >> a;
	std::cout << "Input your second number: ";
        std::cin >> b;
	std::cout << "Input your third number: ";
        std::cin >> c;
	std::cout << "You have - " << a << "x^2+" << b << "x+" << c << std::endl;
	double Disc;
	Disc=b*b-4*a*c;
	x_1=((-b)+sqrt(b*b-4*a*c))/(2*a);
	x_2=((-b)-sqrt(b*b-4*a*c))/(2*a);
	std::cout << "x_1=" << x_1 << ", x_2=" << x_2 << std::endl;
	return 0;
}
