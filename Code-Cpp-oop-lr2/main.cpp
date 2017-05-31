#include <iostream>
#include "Complex.h"

int main() {
	Complex *z1 = new Complex(-50, -3);
	Complex *z2 = new Complex(12, 4);
	std::cout << "Complex Number 1: z1 = " << *z1;
	std::cout << "Complex Number 2: z2 = " << *z2 << std::endl;

	std::cout << "Multiplication of complex numbers: " << std::endl;
	Complex *mult = new Complex(*z1 * *z2);
	std::cout << "z = z1 * z2 = " << *mult << std::endl;

	std::cout << "Sum of complex numbers:" << std::endl;
	Complex *sum = new Complex(*z1 + *z2);
	std::cout << "z = z1 + z2 = " << *mult << std::endl;

	std::cout << "Subtraction of complex numbers: " << std::endl;
	Complex *sub = new Complex(*z1 - *z2);
	std::cout << "z = z1 - z2 = " << *mult << std::endl;

	std::cout << "Division of complex numbers: " << std::endl;
	Complex *div = new Complex(*z1 / *z2);
	std::cout << "z = z1 / z2 = " << *mult << std::endl;

	std::cout << "Module of complex numbers: " << std::endl;
	double mod = Complex::mod(*z1);
	std::cout << "z =|z1 + z2| = " << mod << std::endl;
}