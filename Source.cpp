#include <iostream>
#include <math.h>
#include <cmath>
#include <Windows.h> //для русского вывода фраз

//1. Вычислить площадь трапеции с основаниями b1 и b2 и высотой h
float task1(float b1, float b2, float h)
{
	std::cout << "Площадь трапеции с основаниями 1 и 2 и высотой 3: ";
	return h * (b1 + b2) / 2;
}

//2. Вычислить длину окружности и площадь круга радиуса г.
int task2(int r)
{
	float pi = 3.14;
	float l = 2 * r * pi;
	float s = pi * r * r;
	std::cout << "Длина окружности радиуса 4: " << l << std::endl << "Площадь круга радиуса 4: " << s;
	return 0;
}

//3.Вычислить площадь прямоугольного треугольника и гипотенузу.
float task3(int a, int b)
{
	int s = (a * b) / 2;
	float c = sqrt((a * a) + (b * b));
	std::cout << "Площадь прямоугольного треугольника с катетами 5 и 6: " << s << std::endl << "Гипотенуза этого треугольника: " << c;
	return 0;
}

//4. Дано десятичное четырехзначное число. Найти сумму его цифр.
int task4()
{
	int x = 0;
	std::cout << "Введите четрырехзначное число: ";
	std::cin >> x;
	int a = x % 10;       //Четвертая цифра
	int b = x / 10 % 10;  //Третья цифра 
	int c = x / 100 % 10; //Вторая цифра
	int d = x/ 1000;      //Первая цифра
	std::cout << "Сумма цифр: ";
	return a+b+c+d;
}

//5. Выполнить переход от декартовых координат к полярным
//от декартовых к полярным : r = (x * x + y * y) ^ 0, 5; tg(fi) = y / x;
float task5()
{
	float x, y = 0;
	std::cout << "Декартова координата 1: ";
	std::cin >> x;
	std::cout << "Декартова координата 2: ";
	std::cin >> y;
	float r = sqrt(x * x + y * y);
	float fi = atan(y / x);
	std::cout << "Полярная координата 1: " << r << std::endl << "Полярная координата 2: " << fi;
	return 0;
}

//6.Выполнить переход от полярных координат к декартовым.
//от полярных координат r и tg(fi) к декартовым x, y: x = r*cos (fi); y = r*sin (fi);
float task6()
{
	float r, fi = 0;
	std::cout << "Полярная координата 1: ";
	std::cin >> r;
	std::cout << "Полярная координата 2: ";
	std::cin >> fi;
	float x = r * cos(fi);
	float y = r * sin(fi);
	std::cout << "Декартова координата 1: " << x << std::endl << "Декартова координата 2: " <<  y;
	return 0;
}

//7. Найти корни квадратного уравнения.
float task7()
{
	float a,b,c = 0;
	std::cout << "Квадратное уравнение имеет формат ах^2+bx+c" << std::endl << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	std::cout << "c: ";
	std::cin >> c;
	float d = b * b - 4 * a * c;
	if (d > 0) {
		float x1 = (-b + sqrt(d)) / (2 * a);
		float x2 = (-b - sqrt(d)) / (2 * a);
		std::cout << "Корень 1: " << x1 << std::endl << "Корень 2: " << x2 << std::endl;
	}
	else
		std::cout << "Уравнение не имеет корней! " << std::endl;
	return 0;
}

//8. Имеется треугольник со сторонами а, b, с. Найти медианы треугольника, сторонами которого
//являются медианы исходного треугольника.
float task8()
{
	float a, b, c = 0;
	std::cout << "Введите стороны треугольника: " << std::endl << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	std::cout << "c: ";
	std::cin >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a) 
	{
		float AM = sqrt((2 * a * a + 2 * c * c - b * b) / 4);//большие медианы
		float BM = sqrt((2 * a * a + 2 * b * b - c * c) / 4);

		float a1 = AM / 3;//стороны мал треуг
		float b1 = b / 2;
		float c1 = (2 * BM) / 3;

		float a1m = sqrt((2 * a1 * a1 + 2 * c1 * c1 - b1 * b1) / 4);//медианы мал треуг
		float b1m = sqrt((2 * b1 * b1 + 2 * c1 * c1 - a1 * a1) / 4);
		float c1m = sqrt((2 * a1 * a1 + 2 * b1 * b1 - c1 * c1) / 4);
				
		std::cout << "Медиана1: " << a1m << std::endl << "Медиана2: " << b1m << std::endl << "Медиана3: " << c1m << std::endl;
	}
	else 
		std::cout << "Такого треугольника не существует!" << std::endl;

	return 0;
}

//9. Идет k-я секунда суток. Определить, сколько целых часов и целых минут прошло с начала суток.
//24 часа (1440 минут, или 86 400 секунд)
int task9()
{
	int x = 0;
	std::cout << "Введите количество секунд: ";
	std::cin >> x;
	while (x >= 86400)
	{
		x -= 86400;
	}
	x /= 60; //минуты
	int y = x % 60;
	x /= 60; //часы

	std::cout << x << " ч. " << y << " мин. " <<std::endl;

	return 0;
}

//10. Определить, является ли треугольник со сторонами a, b, c равнобедренным.
int task10()
{
	int a,b,c= 0;
	std::cout << "Введите стороны треугольника: " << std::endl << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	std::cout << "c: ";
	std::cin >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		if (a == b || b == c || a == c || a == b == c)
			std::cout << "Этот треугольник равнобедренный." << std::endl;
		else
			std::cout << "Этот треугольник неравнобедренный." << std::endl;
	}
	else
		std::cout << "Такого треугольника не существует!" << std::endl;
	return 0;
}

// 11. Вычислить стоимость покупки с учётом скидки.Скидка в 10 % предоставляется, если сумма
//покупки превышает 1000 рублей.
float task11()
{
	float a = 0;
	std::cout << "Введите сумму вашей покупки: ";
	std::cin >> a;
	if (a > 1000)
		std::cout << "Сумма вашей покупки c учетом скидки: " << a*0.9 << std::endl;
	else
		std::cout << "Сумма вашей покупки с учетом скидки: " << a << std::endl;
	return 0;
}

//12. Дать рекомендации пользователю с известным ростом и весом похудеть или поправиться, если
//идеальный вес определяется формулой(рост - 100 = идеальный вес).
float task12()
{
	float h = 0;
	float w = 0;
	std::cout << "Введите рост: " << std::endl;
	std::cin >> h;
	std::cout << "Введите вес: " << std::endl;
	std::cin >> w;
	if ( (h-100) < w)
		std::cout << "Вам необходимо сбросить вес!" << std::endl;
	else
		std::cout << "Вам необходимо набрать вес!" << std::endl;
	return 0;
}

//13. Программа генерирует два случайных числа в диапазоне от 1 до 9. Тестируемый вводит результат
//произведения этих чисел.Программа сообщает тестируемому ошибся он или нет.
int task13()
{
	srand((unsigned)time(NULL));
	int random1 = rand() % 9;
	int random2 = rand() % 9;
	std::cout << "Число 1 = " << random1 << std::endl;
	std::cout << "Число 2 = " << random2 << std::endl;
	int a = 0;
	std::cout << "Введите произведение этих чисел: ";
	std::cin >> a;
	if ( a== (random1*random2))
		std::cout << "Правильно!:)" << std::endl;
	else
		std::cout << "Неправильно!:(" << std::endl;
	return 0;
}

//14. Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям
//предоставляется скидка 20 %.Ввести продолжительность разговора и день недели(число от 1 до 7).
int task14()
{
	//Пусть стоимость = 1р/мин. 
	int a, b = 0;
	std::cout << "Время (в минутах): ";
	std::cin >> a;
	std::cout << "День недели (1 до 7): ";
	std::cin >> b;
	if (b == 6 || b == 7)
		std::cout << "Стоимость звонка " << a * 0.8 << " р." << std::endl;
	else
		std::cout << "Стоимость звонка " << a <<  " р." << std::endl;
	return 0;
}

//15. Ввести с клавиатуры номер месяца. Выдать сообщение о названии месяца и времени года.
int task15()
{
	int mounth = 0;
	std::cout << "Номер месяца: ";
	std::cin >> mounth;
	if (mounth == 1)
		std::cout << "Январь, ";
	else if (mounth == 2)
		std::cout << "Февраль, ";
	else if (mounth == 3)
		std::cout << "Март, ";
	else if (mounth == 4)
		std::cout << "Апрель, ";
	else if (mounth == 5)
		std::cout << "Май, ";
	else if (mounth == 6)
		std::cout << "Июнь, ";
	else if (mounth == 7)
		std::cout << "Июль, ";
	else if (mounth == 8)
		std::cout << "Август, ";
	else if (mounth == 9)
		std::cout << "Сентябрь, ";
	else if (mounth == 10)
		std::cout << "Октябрь, ";
	else if (mounth == 11)
		std::cout << "Ноябрь, ";
	else if (mounth == 12)
		std::cout << "Декабрь, ";
	else
		std::cout << "Вы ввели неверные данные." << std::endl;

	if (mounth == 1 || mounth == 2 || mounth == 12)
		std::cout << "Зима" << std::endl;
	else if (mounth > 2 && mounth < 6)
		std::cout << "Весна" << std::endl;
	else if (mounth > 5 && mounth < 9)
		std::cout << "Лето" << std::endl;
	else if (mounth > 8 && mounth < 12)
		std::cout << "Осень" << std::endl;
	else
		std::cout << "Вы ввели неверные данные." << std::endl;
	return 0;
}

//16. Определить, является ли шестизначное число "счастливым".
int task16()
{
	int a = 0, sumx = 0, sumy = 0;
	std::cout << "Введите шестизначное число: ";
	std::cin >> a;
	int x = a/1000; //первые три числа
	int y = a%1000; //последние три числа
	int x1 = 0;
	for (int i = 3; i > 0; x = x / 10)
	{
		x1 = x % 10;
		sumx += x1;
		i -= 1;
		
	}
	int y1 = 0;
	for (int i = 3; i > 0; y = y / 10)
	{
		y1 = y % 10;
		sumy += y1;
		i -= 1;
	}
	if (sumx == sumy)
		std::cout << "Да, число счастливое!" << std::endl;
	else
		std::cout << "Нет, число не счастливое." << std::endl;
	return 0;
}

//17. Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово
//"копейка" в правильной форме.
int task17()
{
	int a = 0;
	std::cout << "Введите число от 1 до 99: ";
	std::cin >> a;
	if (a == 1 || a == 21 || a == 31 || a == 41 || a == 51 || a == 61 || a == 71 || a == 81 || a == 91)
		std::cout << a << " копейкa" << std::endl;
	else if (a >= 2 && a < 5 || a >= 22 && a < 25 || a >= 32 && a < 35 || a >= 42 && a < 45 || a >= 52 && a < 55 || a >= 62 && a < 65 || a >= 72 && a < 75 || a >= 82 && a < 85 || a >= 92 && a < 95)
		std::cout << a << " копейки" << std::endl;
	else if (a<1 || a>99)
		std::cout << "Ошибка!" << std::endl;
	else 
		std::cout << a << " копеек" << std::endl;
	return 0;
}

//18. Дано натуральное четырехзначное число. Выяснить, является ли оно палиндромом.
int task18()
{
	int a = 0, invy = 0;
	std::cout << "Введите натуральное четырехзначное число: ";
	std::cin >> a;
	int x = a / 100; //первые два числа
	int y = a % 100; //последние два числа
	while (y != 0) //инвертируем порядок двух последних числа
	{
		invy *= 10;
		invy += y % 10;
		y /= 10;
	}
	std::cout << invy << std::endl;
	if (x == invy)
		std::cout << "Да, число - палиндром." << std::endl;
	else
		std::cout << "Нет, число - не палиндром." << std::endl;
	return 0;
}

//19. Дано трёхзначное число. Определить: 19.1 является ли произведение его цифр больше числа b
int task19()
{
	int x = 0, b = 10; //Пусть b = 10.
	std::cout << "Введите трехзначное число: ";
	std::cin >> x;
	int a = x % 10;
	int d = x / 10 % 10;
	int c = x / 100;
	std::cout << "Произведение: " << a * d * c << std::endl;
	if (a * d * c > b)
		std::cout << "Оно больше 10." << std::endl;
	else
		std::cout << "Оно меньше 10." << std::endl;
	
	// 19.2 кратна ли 7 сумма его цифр.
	if ((a+d+c) % 7 == 0)
		std::cout << "Сумма цифр числа кратна 7." << std::endl;
	else
		std::cout << "Сумма цифр числа не кратна 7." << std::endl;

	return 0;
}

//20. Даны вещественные положительные числа a, b, c, d. Выяснить, можно ли прямоугольник со
//сторонами a, b поместить в прямоугольник со сторонами c, d так, чтобы стороны одного
//прямоугольника были параллельны сторонам другого.
int task20()
{
	int a = 0, b = 0, c = 0, d = 0;
	std::cout << "Введите стороны первого прямоугольника: " << std::endl << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	std::cout << "Введите стороны второго прямоугольника: " << std::endl << "с: ";
	std::cin >> c;
	std::cout << "d: ";
	std::cin >> d;
	if (a<=0 || b<=0|| c<=0 || d<=0 )
		std::cout << "Ошибка!" << std::endl;
	else
		if ((a<c) && (b < d) || ((a < d) && (b < c)))
			std::cout << "Да, можно поместить." << std::endl;
		else
			std::cout << "Нет, нельзя поместить." << std::endl;

	return 0;
}


//21.(По желанию) Написать программу, в которой выводятся размеры основных типов данных. Сделать
//выводы.
int task21()
{
	std::cout << "bool: " << sizeof(bool) << " byte" << std::endl;
	std::cout << "char: " << sizeof(char) << " byte" << std::endl;
	std::cout << "wchar_t: " << sizeof(wchar_t) << " bytes" << std::endl;
	std::cout << "char16_t: " << sizeof(char16_t) << " bytes" << std::endl;
	std::cout << "char32_t: " << sizeof(char32_t) << " bytes" << std::endl;
	std::cout << "short: " << sizeof(short) << " bytes" << std::endl;
	std::cout << "int: " << sizeof(int) << " bytes" << std::endl;
	std::cout << "long: " << sizeof(long) << " bytes" << std::endl;
	std::cout << "long long: " << sizeof(long long) << " bytes" << std::endl;
	std::cout << "float: " << sizeof(float) << " bytes" << std::endl;
	std::cout << "double: " << sizeof(double) << " bytes" << std::endl;
	std::cout << "long double: " << sizeof(long double) << " bytes" << std::endl;
	return 0;
}


	int main()
{
		setlocale(LC_ALL, "Russian"); //для русского вывода фраз SetConsoleOutputCP(CP_UTF8) не работало
		int number;
		
		std::cout << "Введите номер задания: ";
		std::cin >> number;
		if (number == 1)
			std::cout << task1(1, 2, 3);
		else if (number == 2)
			std::cout << task2(4);
		else if (number == 3)
			std::cout << task3(5, 6);
		else if (number == 4)
			std::cout << task4();
		else if (number == 5)
			std::cout << task5();
		else if (number == 6)
			std::cout << task6();
		else if (number == 7)
			std::cout << task7();
		else if (number == 8)
			std::cout << task8();
		else if (number == 9)
			std::cout << task9();
		else if (number == 10)
			std::cout << task10();
		else if (number == 11)
			std::cout << task11();
		else if (number == 12)
			std::cout << task12();
		else if (number == 13)
			std::cout << task13();
		else if (number == 14)
			std::cout << task14();
		else if (number == 15)
			std::cout << task15();
		else if (number == 16)
			std::cout << task16();
		else if (number == 17)
			std::cout << task17();
		else if (number == 18)
			std::cout << task18();
		else if (number == 19)
			std::cout << task19();
		else if (number == 20)
			std::cout << task20();
		else if (number == 21)
			std::cout << task21();
		else
			std::cout << "Такого задания не существует!";
		
}
