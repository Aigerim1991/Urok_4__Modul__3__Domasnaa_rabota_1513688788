#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	god:
	int N;
	cout << "������� ����� �������" << "\n";
	cin >> N;
	switch (N)
	{
	/*case 1:
	{

		int n;
		char C;
		cout << "������� �������� ����������� ������: ";
		cin >> C;
		cout << "\n����� �������: ";
		cin >> n;
		switch (C) {
		case '�': switch (n) {
		case  0: cout << "�����";   break;  //���������� ��������
		case  1: cout << "�����";   break;  //������� ������
		case -1: cout << "������";  break;  //������� �������
		default: cout << "�������� �������.";
		}
		case '�': switch (n) {
		case  0: cout << "��";      break;      //���������� ��������
		case  1: cout << "������";  break;  //������� ������
		case -1: cout << "�����";   break;  //������� �������
		default: cout << "�������� �������.";
		}
		case '�': switch (n) {
		case  0: cout << "�����";   break;  //���������� ��������
		case  1: cout << "��";      break;      //������� ������
		case -1: cout << "�����";   break;  //������� �������
		default: cout << "�������� �������.";
		}
		case '�': switch (n) {
		case  0: cout << "������";  break;  //���������� ��������
		case  1: cout << "�����";   break;  //������� ������
		case -1: cout << "��";      break;      //������� �������
		default: cout << "�������� �������.";
		}
				  break;


		}

	}
	break;*/
	case 2:
	{
		float a, b, c;
		cout<<"������ ��������� ������������"<<"\n";

		cin >> a;
		cin >> b;
		cin >> c;
		if (a >= b + c || b >= a + c || c >= b + a)
					cout<<"�� �����������"<<"\n";
		
		
		else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a)
				cout<<"�������������";
			else
				if (a*a > b*b + c*c || b*b > a*a + c*c || c*c > b*b + a*a)
					cout<<"�����������"<<"\n";
				else
					cout<<"����������"<<"\n";
	}
	break;
	case 3:
	{
		int a, b;
		cout << "������� ��������" << "\n";
		cin >> a;
		cin >> b;
	
			if (a*b<0)
			{
				a = 0;
				b = 0;
				cout <<"����� ����� ������ �����:"<<" "<< a <<" "<< b << "\n";
			}
			else {
				a *= -1;
				b *= -1;
				cout << "����� ����� ��������������� �����:" << " " << a << " " << b << endl;
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
		cout << "���������"<<"'��������' ���� �����"<<" "<<"������ ���������� ������:" << "\n";
		cin >> K_G_Kurortnoe;

		if (K_G_Kurortnoe == 1)
		{
			int sutki = 1000;
			int pitanie = 1500;
			cout << "��������� ����������� ������� � �����:" << "" << sutki << " �� "<<"  " << "c ��������:" << pitanie << "\n";

		}
		else if (K_G_Kurortnoe == 2)
		{
			int sutki = 1500;
			int pitanie = 2500;
			cout << "��������� ����������� ������� � �����:" << "" << sutki << " �� " << "  " << "c ��������:" << pitanie <<"��"<< "\n";

		}
		else
		{
			cout << "������ ������� ����"  << "\n";
		}

		int K_G_Verhovina;
		cout << "���������" << "'���������' ������ �����" << " " << "������ ���������� ������:" << "\n";
		cin >> K_G_Verhovina;

		if (K_G_Verhovina == 1)
		{
			int sutki = 600;
			int pitanie = 900;
			cout << "��������� ����������� ������� � �����:" << "" << sutki << " �� " << "  " << "c ��������:" << pitanie <<"��"<< "\n";

		}
		else if (K_G_Verhovina == 2)
		{
			int sutki = 900;
			int pitanie = 1500;
			cout << "��������� ����������� ������� � �����:" << "" << sutki << " �� " << "  " << "c ��������:" << pitanie << "��" << "\n";

		}
		else
		{
			cout << "������ ������� ����" << "\n";
		}
		int K_G_Guculka;
		cout << "���������" << "'�������' ��� �����" << " " << "������ ���������� ������:" << "\n";
		cin >> K_G_Verhovina;

		if (K_G_Guculka == 1)
		{
			int sutki = 300;
			int pitanie = 500;
			cout << "��������� ����������� ������� � �����:" << "" << sutki << " �� " << "  " << "c ��������:" << pitanie << "��" << "\n";

		}
		else if (K_G_Guculka == 2)
		{
			int sutki = 450;
			int pitanie = 800;
			cout << "��������� ����������� ������� � �����:" << "" << sutki << " �� " << "  " << "c ��������:" << pitanie << "��" << "\n";

		}
		else
		{
			cout << "������ ������� ����" << "\n";
		}

	}
	break;
	case 6:
	{
		unsigned int a, b = 0;
		cout << "������ ����������� �����:";
		scanf("%d", &a, b);
		while (a != 0)

		{
			b = b * 10 + a % 10;
			a = a / 10;
		}
		cout << "����� � ������������ ����:" << b << "\n";

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