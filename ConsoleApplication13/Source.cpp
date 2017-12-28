#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	god:
	int N;
	cout << "Введите номер задания" << "\n";
	cin >> N;
	switch (N)
	{
	/*case 1:
	{

		int n;
		char C;
		cout << "Введите исходное направление робота: ";
		cin >> C;
		cout << "\nНовая команда: ";
		cin >> n;
		switch (C) {
		case 'С': switch (n) {
		case  0: cout << "Север";   break;  //продолжить движение
		case  1: cout << "Запад";   break;  //поворот налево
		case -1: cout << "Восток";  break;  //поворот направо
		default: cout << "Неверная команда.";
		}
		case 'Ю': switch (n) {
		case  0: cout << "Юг";      break;      //продолжить движение
		case  1: cout << "Восток";  break;  //поворот налево
		case -1: cout << "Запад";   break;  //поворот направо
		default: cout << "Неверная команда.";
		}
		case 'З': switch (n) {
		case  0: cout << "Запад";   break;  //продолжить движение
		case  1: cout << "Юг";      break;      //поворот налево
		case -1: cout << "Север";   break;  //поворот направо
		default: cout << "Неверная команда.";
		}
		case 'В': switch (n) {
		case  0: cout << "Восток";  break;  //продолжить движение
		case  1: cout << "Север";   break;  //поворот налево
		case -1: cout << "Юг";      break;      //поворот направо
		default: cout << "Неверная команда.";
		}
				  break;


		}

	}
	break;*/
	case 2:
	{
		float a, b, c;
		cout<<"Ввести параметры треугольника"<<"\n";

		cin >> a;
		cin >> b;
		cin >> c;
		if (a >= b + c || b >= a + c || c >= b + a)
					cout<<"Не треугольник"<<"\n";
		
		
		else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a)
				cout<<"Прямоугольник";
			else
				if (a*a > b*b + c*c || b*b > a*a + c*c || c*c > b*b + a*a)
					cout<<"Треугольник"<<"\n";
				else
					cout<<"Остроуглый"<<"\n";
	}
	break;
	case 3:
	{
		int a, b;
		cout << "Введите значение" << "\n";
		cin >> a;
		cin >> b;
	
			if (a*b<0)
			{
				a = 0;
				b = 0;
				cout <<"Числы имеют разные знаки:"<<" "<< a <<" "<< b << "\n";
			}
			else {
				a *= -1;
				b *= -1;
				cout << "Числы имеют противоположные знаки:" << " " << a << " " << b << endl;
			}
	}
	break;
	case 4:
	{
		int K, N;
		printf("K:");
		scanf("%i", &K);

		printf("N:");
		scanf("%i", &N);


		printf("%i\n", ((K + N - 2) % 7) + 1);
	

	}
	break;
	case 5:
	{
		
		int K_G_Kurortnoe;
		cout << "Гостиница"<<"'Куротное' пяти звезд"<<" "<<"Нужное колтчество комнат:" << "\n";
		cin >> K_G_Kurortnoe;

		if (K_G_Kurortnoe == 1)
		{
			int sutki = 1000;
			int pitanie = 1500;
			cout << "Стоимость одноместной комноты в сутки:" << "" << sutki << " тг "<<"  " << "c питанием:" << pitanie << "\n";

		}
		else if (K_G_Kurortnoe == 2)
		{
			int sutki = 1500;
			int pitanie = 2500;
			cout << "Стоимость двухместной комноты в сутки:" << "" << sutki << " тг " << "  " << "c питанием:" << pitanie <<"тг"<< "\n";

		}
		else
		{
			cout << "Больше комнаты нету"  << "\n";
		}

		int K_G_Verhovina;
		cout << "Гостиница" << "'Верховина' четыре звезд" << " " << "Нужное колтчество комнат:" << "\n";
		cin >> K_G_Verhovina;

		if (K_G_Verhovina == 1)
		{
			int sutki = 600;
			int pitanie = 900;
			cout << "Стоимость одноместной комноты в сутки:" << "" << sutki << " тг " << "  " << "c питанием:" << pitanie <<"тг"<< "\n";

		}
		else if (K_G_Verhovina == 2)
		{
			int sutki = 900;
			int pitanie = 1500;
			cout << "Стоимость двухместной комноты в сутки:" << "" << sutki << " тг " << "  " << "c питанием:" << pitanie << "тг" << "\n";

		}
		else
		{
			cout << "Больше комнаты нету" << "\n";
		}
		int K_G_Guculka;
		cout << "Гостиница" << "'Гуцулка' три звезд" << " " << "Нужное колтчество комнат:" << "\n";
		cin >> K_G_Verhovina;

		if (K_G_Guculka == 1)
		{
			int sutki = 300;
			int pitanie = 500;
			cout << "Стоимость одноместной комноты в сутки:" << "" << sutki << " тг " << "  " << "c питанием:" << pitanie << "тг" << "\n";

		}
		else if (K_G_Guculka == 2)
		{
			int sutki = 450;
			int pitanie = 800;
			cout << "Стоимость двухместной комноты в сутки:" << "" << sutki << " тг " << "  " << "c питанием:" << pitanie << "тг" << "\n";

		}
		else
		{
			cout << "Больше комнаты нету" << "\n";
		}

	}
	break;
	case 6:
	{
		unsigned int a, b = 0;
		cout << "Ввести пятизначное число:";
		scanf("%d", &a, b);
		while (a != 0)

		{
			b = b * 10 + a % 10;
			a = a / 10;
		}
		cout << "Число в перевернутом виде:" << b << "\n";

	}
	break;
	case 7:
	{

	}
	break;
	default:
		break;




	}
	goto god;
}