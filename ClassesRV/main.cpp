#include "Header.h"

int main() {
	setlocale(0, "");

	std::cout << "Класс окружность \n";
	double r;
	r = 8.5;
	Circle cir(r);
	std::cout << "Радиус окружности равен " << cir.getRadius() << std::endl;
	double d = cir.diametr();
	std::cout << "Диаметр равен " << d << std::endl;
	double len = cir.lenCircle();
	std::cout << "Длина окружности равна " << len << std::endl;
	double area = cir.areaCircle();
	std::cout << "Площадь равна " << area << std::endl;


	std::cout << "\nКласс вектор \n";
	Vector a(-1, 3, 5);
	Vector b(0.5, 0, -2);
	std::cout << "Вектор а";
	a.printVector();
	std::cout << "Вектор b";
	b.printVector();
	double k = 5; // Коэфицент 
	len = a.length();
	std::cout << "Длина вектора а - " << len << std::endl;
	std::cout << "Сумма векторов а и b: "; 
	a.sum(b).printVector();
	std::cout << "Разность векторов a и b: ";
	a.minus(b).printVector();
	std::cout << "Вектор умноженный на k=" << k << ": ";
	a.multiplication_on_number(k).printVector();
	std::cout << "Скалярное произведение векторов a и b " << a.multiplication(b) << std::endl;


	std::cout << "\nКласс комплексные числа \n";
	Complex x(3.5, -4);
	Complex y(-2, 5);
	std::cout << "Комплексные числа x и y:\n";
	x.printComplex();
	y.printComplex();
	std::cout << "Модуль комплексного числа y: " << y.module()<<std::endl;
	std::cout << "Сумма чисел х и у: ";
	x.sum(y).printComplex();
	std::cout << "Разность чисел х и у: ";
	x.minus(y).printComplex();
	std::cout << "Произведение чисел х и у: ";
	x.multiplication(y).printComplex();
	std::cout << "Частное чисел х и у: ";
	x.divide(y).printComplex();
	return 0;

}