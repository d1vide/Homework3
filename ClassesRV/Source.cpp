#include "Header.h"

//Окружность

Circle::Circle() {
	radius = 0;
}

Circle::Circle(double r) {
	radius = r;
}

double Circle::diametr() {
	return radius * 2;
}

double Circle::lenCircle() {
	return 2 * PI * radius;
}

double Circle::areaCircle() {
	return PI * radius * radius;
}

void Circle::setRadius(double r) {
	radius = r;
}

double Circle::getRadius() {
	return radius;
}

//////////////////////////////////////////

//Вектор

Vector::Vector() {
	x = 0;
	y = 0;
	z = 0;
}

Vector::Vector(double xx, double yy, double zz) {
	x = xx;
	y = yy;
	z = zz;
}

double Vector::length() {
	return sqrt(x * x + y * y + z * z);
}

Vector& Vector::sum(Vector b) {
	Vector c(this->x + b.x, this->y + b.y, this->z + b.z);
	return c;
}

Vector& Vector::minus(Vector b) {
	Vector c(this->x - b.x, this->y - b.y, this->z - b.z);
	return c;
}

double Vector::multiplication(Vector b) {
	return this->x * b.x + this->y * b.y + this->z * b.z;
}

Vector& Vector::multiplication_on_number(double k) {
	Vector c(this->x * k, this->y * k, this->z * k);
	return c;
}

void Vector::printVector() {
	std::cout << '(' << this->x << ',' << this->y << ',' << this->z << ')' << std::endl;
}

void Vector::setX(double xx) {
	x = xx;
}

double Vector::getX() {
	return x;
}

void Vector::setY(double yy) {
	y = yy;
}

double Vector::getY() {
	return y;
}

void Vector::setZ(double zz) {
	z = zz;
}

double Vector::getZ() {
	return z;
}

////////////////////////////////////////

//Complex 

Complex::Complex() {
	real = 0;
	imag = 0;
}

Complex::Complex(double r, double i) {
	real = r;
	imag = i;
}

double Complex::module() {
	return sqrt(this->imag * this->imag + this->real * this->real);
}

Complex& Complex::sum(Complex x) {
	Complex result(this->real + x.real, this->imag + x.imag);
	return result;
}

Complex& Complex::minus(Complex x) {
	Complex result(this->real - x.real, this->imag - x.imag);
	return result;
}

Complex& Complex::multiplication(Complex x) {
	Complex result(this->real * x.real - this->imag * x.imag, this->real * x.imag + this->imag * x.real);
	return result;
}

Complex& Complex::divide(Complex x) {
	Complex result((real * x.real + imag * x.imag) / (x.real * x.real + x.imag * x.imag), (x.real*imag-real*x.imag)/(x.real*x.real+x.imag*x.imag));
	return result;
}

void Complex::printComplex() {
	if (imag > 0) {
		std::cout << real << '+' << imag << 'i' << std::endl;
	}
	else if (imag < 0) {
		std::cout << real << '-' << abs(imag) << 'i' << std::endl;
	}
	else {
		std::cout << real << std::endl;
	}
}

void Complex::set_imag(double im) {
	imag = im;
}

double Complex::get_imag() {
	return imag;
}

void Complex::set_real(double re) {
	real = re;
}

double Complex::get_real() {
	return real;
}


