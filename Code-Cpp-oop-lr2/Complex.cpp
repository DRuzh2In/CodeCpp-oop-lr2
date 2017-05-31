#include <cmath>
#include <iostream>
#include "Complex.h"


Complex::Complex(double re, double im) : re(re), im(im) {}

double Complex::getRe() const {
	return re;
}

double Complex::getIm() const {
	return im;
}

void Complex::setRe(double re) {
	Complex::re = re;
}

void Complex::setIm(double im) {
	Complex::im = im;
}

Complex Complex::operator*(Complex &z)
{
	double newRe, newIm;
	newRe = re * z.re - im * z.im;
	newIm = re * z.im + z.re * im;

	return Complex(newRe, newIm);
}

Complex Complex::operator+(Complex &z)
{
	double newRe, newIm;
	newRe = re + z.re;
	newIm = im + z.im;

	return Complex(newRe, newIm);
}

Complex Complex::operator-(Complex &z)
{
	double newRe, newIm;
	newRe = re - z.re;
	newIm = im - z.im;

	return Complex(newRe, newIm);
}

Complex Complex::operator/(Complex &z)
{
	double denominator, newRe, newIm;
	denominator = z.re * z.re + z.im * z.im;
	newRe = (re * z.re + im * z.im) / denominator;
	newIm = (z.re * im - re * z.im) / denominator;

	return Complex(newRe, newIm);
}

// Module of complex number
double Complex::mod(Complex &z) {
	double res = sqrt(z.re * z.re + z.im * z.im);
	return res;
}


std::ostream & operator << (std::ostream &out, Complex &obj)
{
	if (obj.im < 0) out << obj.re << "+i(" << obj.im << ")\n";
	else out << obj.re << " +i" << obj.im << "\n";
	return out;
}
