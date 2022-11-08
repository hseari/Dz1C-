#include <iostream>
#include <math.h>
#include <cmath>
#include <Windows.h> //��� �������� ������ ����

//1. ��������� ������� �������� � ����������� b1 � b2 � ������� h
float task1(float b1, float b2, float h)
{
	std::cout << "������� �������� � ����������� 1 � 2 � ������� 3: ";
	return h * (b1 + b2) / 2;
}

//2. ��������� ����� ���������� � ������� ����� ������� �.
int task2(int r)
{
	float pi = 3.14;
	float l = 2 * r * pi;
	float s = pi * r * r;
	std::cout << "����� ���������� ������� 4: " << l << std::endl << "������� ����� ������� 4: " << s;
	return 0;
}

//3.��������� ������� �������������� ������������ � ����������.
float task3(int a, int b)
{
	int s = (a * b) / 2;
	float c = sqrt((a * a) + (b * b));
	std::cout << "������� �������������� ������������ � �������� 5 � 6: " << s << std::endl << "���������� ����� ������������: " << c;
	return 0;
}

//4. ���� ���������� �������������� �����. ����� ����� ��� ����.
int task4()
{
	int x = 0;
	std::cout << "������� ��������������� �����: ";
	std::cin >> x;
	int a = x % 10;       //��������� �����
	int b = x / 10 % 10;  //������ ����� 
	int c = x / 100 % 10; //������ �����
	int d = x/ 1000;      //������ �����
	std::cout << "����� ����: ";
	return a+b+c+d;
}

//5. ��������� ������� �� ���������� ��������� � ��������
//�� ���������� � �������� : r = (x * x + y * y) ^ 0, 5; tg(fi) = y / x;
float task5()
{
	float x, y = 0;
	std::cout << "��������� ���������� 1: ";
	std::cin >> x;
	std::cout << "��������� ���������� 2: ";
	std::cin >> y;
	float r = sqrt(x * x + y * y);
	float fi = atan(y / x);
	std::cout << "�������� ���������� 1: " << r << std::endl << "�������� ���������� 2: " << fi;
	return 0;
}

//6.��������� ������� �� �������� ��������� � ����������.
//�� �������� ��������� r � tg(fi) � ���������� x, y: x = r*cos (fi); y = r*sin (fi);
float task6()
{
	float r, fi = 0;
	std::cout << "�������� ���������� 1: ";
	std::cin >> r;
	std::cout << "�������� ���������� 2: ";
	std::cin >> fi;
	float x = r * cos(fi);
	float y = r * sin(fi);
	std::cout << "��������� ���������� 1: " << x << std::endl << "��������� ���������� 2: " <<  y;
	return 0;
}

//7. ����� ����� ����������� ���������.
float task7()
{
	float a,b,c = 0;
	std::cout << "���������� ��������� ����� ������ ��^2+bx+c" << std::endl << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	std::cout << "c: ";
	std::cin >> c;
	float d = b * b - 4 * a * c;
	if (d > 0) {
		float x1 = (-b + sqrt(d)) / (2 * a);
		float x2 = (-b - sqrt(d)) / (2 * a);
		std::cout << "������ 1: " << x1 << std::endl << "������ 2: " << x2 << std::endl;
	}
	else
		std::cout << "��������� �� ����� ������! " << std::endl;
	return 0;
}

//8. ������� ����������� �� ��������� �, b, �. ����� ������� ������������, ��������� ��������
//�������� ������� ��������� ������������.
float task8()
{
	float a, b, c = 0;
	std::cout << "������� ������� ������������: " << std::endl << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	std::cout << "c: ";
	std::cin >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a) 
	{
		float AM = sqrt((2 * a * a + 2 * c * c - b * b) / 4);//������� �������
		float BM = sqrt((2 * a * a + 2 * b * b - c * c) / 4);

		float a1 = AM / 3;//������� ��� �����
		float b1 = b / 2;
		float c1 = (2 * BM) / 3;

		float a1m = sqrt((2 * a1 * a1 + 2 * c1 * c1 - b1 * b1) / 4);//������� ��� �����
		float b1m = sqrt((2 * b1 * b1 + 2 * c1 * c1 - a1 * a1) / 4);
		float c1m = sqrt((2 * a1 * a1 + 2 * b1 * b1 - c1 * c1) / 4);
				
		std::cout << "�������1: " << a1m << std::endl << "�������2: " << b1m << std::endl << "�������3: " << c1m << std::endl;
	}
	else 
		std::cout << "������ ������������ �� ����������!" << std::endl;

	return 0;
}

//9. ���� k-� ������� �����. ����������, ������� ����� ����� � ����� ����� ������ � ������ �����.
//24 ���� (1440 �����, ��� 86 400 ������)
int task9()
{
	int x = 0;
	std::cout << "������� ���������� ������: ";
	std::cin >> x;
	while (x >= 86400)
	{
		x -= 86400;
	}
	x /= 60; //������
	int y = x % 60;
	x /= 60; //����

	std::cout << x << " �. " << y << " ���. " <<std::endl;

	return 0;
}

//10. ����������, �������� �� ����������� �� ��������� a, b, c ��������������.
int task10()
{
	int a,b,c= 0;
	std::cout << "������� ������� ������������: " << std::endl << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	std::cout << "c: ";
	std::cin >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		if (a == b || b == c || a == c || a == b == c)
			std::cout << "���� ����������� ��������������." << std::endl;
		else
			std::cout << "���� ����������� ����������������." << std::endl;
	}
	else
		std::cout << "������ ������������ �� ����������!" << std::endl;
	return 0;
}

// 11. ��������� ��������� ������� � ������ ������.������ � 10 % ���������������, ���� �����
//������� ��������� 1000 ������.
float task11()
{
	float a = 0;
	std::cout << "������� ����� ����� �������: ";
	std::cin >> a;
	if (a > 1000)
		std::cout << "����� ����� ������� c ������ ������: " << a*0.9 << std::endl;
	else
		std::cout << "����� ����� ������� � ������ ������: " << a << std::endl;
	return 0;
}

//12. ���� ������������ ������������ � ��������� ������ � ����� �������� ��� �����������, ����
//��������� ��� ������������ ��������(���� - 100 = ��������� ���).
float task12()
{
	float h = 0;
	float w = 0;
	std::cout << "������� ����: " << std::endl;
	std::cin >> h;
	std::cout << "������� ���: " << std::endl;
	std::cin >> w;
	if ( (h-100) < w)
		std::cout << "��� ���������� �������� ���!" << std::endl;
	else
		std::cout << "��� ���������� ������� ���!" << std::endl;
	return 0;
}

//13. ��������� ���������� ��� ��������� ����� � ��������� �� 1 �� 9. ����������� ������ ���������
//������������ ���� �����.��������� �������� ������������ ������ �� ��� ���.
int task13()
{
	srand((unsigned)time(NULL));
	int random1 = rand() % 9;
	int random2 = rand() % 9;
	std::cout << "����� 1 = " << random1 << std::endl;
	std::cout << "����� 2 = " << random2 << std::endl;
	int a = 0;
	std::cout << "������� ������������ ���� �����: ";
	std::cin >> a;
	if ( a== (random1*random2))
		std::cout << "���������!:)" << std::endl;
	else
		std::cout << "�����������!:(" << std::endl;
	return 0;
}

//14. �������� ��������� ���������� ��������� �����������, ���� �� �������� � ������������
//��������������� ������ 20 %.������ ����������������� ��������� � ���� ������(����� �� 1 �� 7).
int task14()
{
	//����� ��������� = 1�/���. 
	int a, b = 0;
	std::cout << "����� (� �������): ";
	std::cin >> a;
	std::cout << "���� ������ (1 �� 7): ";
	std::cin >> b;
	if (b == 6 || b == 7)
		std::cout << "��������� ������ " << a * 0.8 << " �." << std::endl;
	else
		std::cout << "��������� ������ " << a <<  " �." << std::endl;
	return 0;
}

//15. ������ � ���������� ����� ������. ������ ��������� � �������� ������ � ������� ����.
int task15()
{
	int mounth = 0;
	std::cout << "����� ������: ";
	std::cin >> mounth;
	if (mounth == 1)
		std::cout << "������, ";
	else if (mounth == 2)
		std::cout << "�������, ";
	else if (mounth == 3)
		std::cout << "����, ";
	else if (mounth == 4)
		std::cout << "������, ";
	else if (mounth == 5)
		std::cout << "���, ";
	else if (mounth == 6)
		std::cout << "����, ";
	else if (mounth == 7)
		std::cout << "����, ";
	else if (mounth == 8)
		std::cout << "������, ";
	else if (mounth == 9)
		std::cout << "��������, ";
	else if (mounth == 10)
		std::cout << "�������, ";
	else if (mounth == 11)
		std::cout << "������, ";
	else if (mounth == 12)
		std::cout << "�������, ";
	else
		std::cout << "�� ����� �������� ������." << std::endl;

	if (mounth == 1 || mounth == 2 || mounth == 12)
		std::cout << "����" << std::endl;
	else if (mounth > 2 && mounth < 6)
		std::cout << "�����" << std::endl;
	else if (mounth > 5 && mounth < 9)
		std::cout << "����" << std::endl;
	else if (mounth > 8 && mounth < 12)
		std::cout << "�����" << std::endl;
	else
		std::cout << "�� ����� �������� ������." << std::endl;
	return 0;
}

//16. ����������, �������� �� ������������ ����� "����������".
int task16()
{
	int a = 0, sumx = 0, sumy = 0;
	std::cout << "������� ������������ �����: ";
	std::cin >> a;
	int x = a/1000; //������ ��� �����
	int y = a%1000; //��������� ��� �����
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
		std::cout << "��, ����� ����������!" << std::endl;
	else
		std::cout << "���, ����� �� ����������." << std::endl;
	return 0;
}

//17. �������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 99 ��������� � ���� �����
//"�������" � ���������� �����.
int task17()
{
	int a = 0;
	std::cout << "������� ����� �� 1 �� 99: ";
	std::cin >> a;
	if (a == 1 || a == 21 || a == 31 || a == 41 || a == 51 || a == 61 || a == 71 || a == 81 || a == 91)
		std::cout << a << " ������a" << std::endl;
	else if (a >= 2 && a < 5 || a >= 22 && a < 25 || a >= 32 && a < 35 || a >= 42 && a < 45 || a >= 52 && a < 55 || a >= 62 && a < 65 || a >= 72 && a < 75 || a >= 82 && a < 85 || a >= 92 && a < 95)
		std::cout << a << " �������" << std::endl;
	else if (a<1 || a>99)
		std::cout << "������!" << std::endl;
	else 
		std::cout << a << " ������" << std::endl;
	return 0;
}

//18. ���� ����������� �������������� �����. ��������, �������� �� ��� �����������.
int task18()
{
	int a = 0, invy = 0;
	std::cout << "������� ����������� �������������� �����: ";
	std::cin >> a;
	int x = a / 100; //������ ��� �����
	int y = a % 100; //��������� ��� �����
	while (y != 0) //����������� ������� ���� ��������� �����
	{
		invy *= 10;
		invy += y % 10;
		y /= 10;
	}
	std::cout << invy << std::endl;
	if (x == invy)
		std::cout << "��, ����� - ���������." << std::endl;
	else
		std::cout << "���, ����� - �� ���������." << std::endl;
	return 0;
}

//19. ���� ���������� �����. ����������: 19.1 �������� �� ������������ ��� ���� ������ ����� b
int task19()
{
	int x = 0, b = 10; //����� b = 10.
	std::cout << "������� ����������� �����: ";
	std::cin >> x;
	int a = x % 10;
	int d = x / 10 % 10;
	int c = x / 100;
	std::cout << "������������: " << a * d * c << std::endl;
	if (a * d * c > b)
		std::cout << "��� ������ 10." << std::endl;
	else
		std::cout << "��� ������ 10." << std::endl;
	
	// 19.2 ������ �� 7 ����� ��� ����.
	if ((a+d+c) % 7 == 0)
		std::cout << "����� ���� ����� ������ 7." << std::endl;
	else
		std::cout << "����� ���� ����� �� ������ 7." << std::endl;

	return 0;
}

//20. ���� ������������ ������������� ����� a, b, c, d. ��������, ����� �� ������������� ��
//��������� a, b ��������� � ������������� �� ��������� c, d ���, ����� ������� ������
//�������������� ���� ����������� �������� �������.
int task20()
{
	int a = 0, b = 0, c = 0, d = 0;
	std::cout << "������� ������� ������� ��������������: " << std::endl << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	std::cout << "������� ������� ������� ��������������: " << std::endl << "�: ";
	std::cin >> c;
	std::cout << "d: ";
	std::cin >> d;
	if (a<=0 || b<=0|| c<=0 || d<=0 )
		std::cout << "������!" << std::endl;
	else
		if ((a<c) && (b < d) || ((a < d) && (b < c)))
			std::cout << "��, ����� ���������." << std::endl;
		else
			std::cout << "���, ������ ���������." << std::endl;

	return 0;
}


//21.(�� �������) �������� ���������, � ������� ��������� ������� �������� ����� ������. �������
//������.
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
		setlocale(LC_ALL, "Russian"); //��� �������� ������ ���� SetConsoleOutputCP(CP_UTF8) �� ��������
		int number;
		
		std::cout << "������� ����� �������: ";
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
			std::cout << "������ ������� �� ����������!";
		
}
