#pragma once

class Complex 
{

private:
	double re;
	double im;

public:
	Complex(double re, double im);
	~Complex() {};
	double getRe() const;
	double getIm() const;
	void setRe(double re);
	void setIm(double im);

	Complex operator*(Complex &);	// ���������� ��������� ���������

	Complex operator+(Complex &);	// ���������� ��������� ��������

	Complex operator-(Complex &);	// ���������� ��������� ���������

	Complex operator/(Complex &);	// ���������� ��������� �������
			
	static double mod(Complex &);	// Module of complex number

	friend std::ostream &operator<<(std::ostream &out, Complex &obj);

};
