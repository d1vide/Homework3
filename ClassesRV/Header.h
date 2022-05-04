#pragma once

#include <iostream>
#include <cmath>

#define PI 3.14

class Circle {
private:
	double radius;
public:
	
	Circle(); //  онструктор по умолчанию
	Circle(double r); //  онструктор с параметрами

	double diametr();
	double lenCircle();
	double areaCircle();

	void setRadius(double r);
	double getRadius();

	~Circle() = default;
};


class Vector {
private:
	double x;
	double y;
	double z;
public:

	Vector();
	Vector(double xx, double yy, double zz);

	double length();
	Vector& sum(Vector b);
	Vector& minus(Vector b);
	double multiplication(Vector b); //(скал€рное произведение)
	Vector& multiplication_on_number(double k);
	void printVector();

	void setX(double xx);
	double getX();

	void setY(double yy);
	double getY();

	void setZ(double zz);
	double getZ();

	~Vector() = default;
};


class Complex {
private:
	double real;
	double imag;
public:

	Complex();
	Complex(double r, double i);

	double module();
	Complex& sum(Complex x);
	Complex& minus(Complex x);
	Complex& multiplication(Complex x);
	Complex& divide(Complex x);
	void printComplex();

	void set_imag(double im);
	double get_imag();

	void set_real(double re);
	double get_real();
};

