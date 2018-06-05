#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <Windows.h>


void main()
{
	setlocale(LC_ALL, "rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	

	int n = 1, a, b, c;

	do
	{
		srand(time(NULL));
		SetConsoleTextAttribute(hConsole, 15);

		printf("n = ");
		scanf("%d", &n);

		if (n == 1) {
			printf("1.	������ � ���������� ��� �����. ����������, ��� ������, ����� ��������� ��� ������� ����� ���� �����. ����� ������� � ���� ���������.\n");

			a = pow((1 + rand() % 10) + (1 + rand() % 10), 2);
			b = pow(1 + rand() % 10, 2) + pow(1 + rand() % 10, 2);

			printf("������� ����� =  = %d\n����� ��������� = %d\n", a, b);

			(a > b) ? printf("������ ������� �����\n") : printf("������ ����� ���������\n");
		}
		else if (n == 2) {
			printf("2.	���������� �������� � �������� �� ����, ���� ���� �� 2 �� 5 ���, �������� ���������� 2%,  ���� ���� �� 5 �� 10 ��� - 5%. ������ � ���������� �������� � ����, ������� �������� � ����� � �������.\n");


			printf("���� = %d\n", a = 1 + rand() % 10);
			printf("�� = %d\n", b = 30000 + rand() & 250000);

			if (a >= 2 && a < 5)  printf("�������� = %d\n����� � ������� = %d\n", c = b* 0.02, c = c + b);
			else printf("�������� = %d\n����� � ������� = %d\n", c = b* 0.05, c = c + b);

		}
		else if (n == 3) {
			printf("3.	������ � ���������� ��� �����, ������������� �������� � �������, � ������������� �������� ��� ���������.\n");
			a = -10 + rand() % 20;
			b = -10 + rand() % 20;
			c = -10 + rand() % 20;
			printf("a = %d\nb = %d\nc = %d\n\n", a, b, c);

			if (a >= 0) a = pow(a, 2);
			if (b >= 0) b = pow(b, 2);
			if (c >= 0) c = pow(c, 2);

			printf("a = %d\nb = %d\nc = %d\n", a, b, c);

		} 
		else if (n == 4) {
			printf("4.	���� ����������� �����. ����������, �������� �� ��� ������, ��� ������������ ������ 3.\n");

			printf("a = %d\n", a = -500 + rand() % 1000);

			(a % 2 == 0) ? printf("������\n") : printf("��������");
			if ((a - 3) % 10 == 0)  printf("������������ ������ 3\n");

		}
		else if (n == 5) {
			printf("5.	���������� ����� ����������� ������ ��������� �� ��������, ���� ������� ��������� �� ������� ��� 6% ������� ��� �� ��� ��� 8% �������. � ���������� ������ ����� ������ � ���� ��������\n");

			printf("����� ������ = %d\n", a = 50000 + rand() % 1000000);
			printf("���� �������� = ");
			scanf("%d", &b);

			if (b == 6) printf("����� � ����� = %d\n", c = (a + a*0.06) / 12); else if (b == 12) printf("����� � ����� = %d\n", c = (a + a*0.08) / 12);
		}
		else if (n == 6) {
			printf("1.	���������, �������� �� ��� ���������� (������� 4) � �������� �� 2000 �� ����� ��� �� 2000 ����� ���. ������ � ������ ��� � ������� ���, ������� ��������� � ���� �656 ��� ����� ��� � ����������.\n");

			//printf("��� = %d\n", a = -2000 + rand() % 4000);
			printf("��� = ");
			scanf("%d", &a);

			if ((a % 4) == 0 && (a % 4000) != 0 && ((a % 100) != 0 || (a % 400) == 0)) printf("��� ����������! "); else printf("��� ������������! ");
			(a < 0) ? printf("�.�.�\n") : printf("�.�.\n");
		}
		else if (n == 7) {
			printf("2.	��������� ��������� ������� � ������ ������. ������ � 10% ���������������, ���� ����� ������� ��������� 1000 �����\n");

			printf("����� ������� = %d\n", a = 500 + rand() % 2000);

			if (a > 1000) printf("��������� ������� � ������ ������ = %d\n", a = a - a*0.1);
		}
		else if (n == 8) {
			printf("3.	�������� ��������� ���������� ���������� ���� ������������ (���� 100). ������ ������������ � ������������� ����������� ���� ��������.\n");

			char m;
			int iv;
		

			printf("������� ��� ����, ��� � ��� (m/w) = \n");
			scanf("%d %d %c",&b, &a, &m);

			if (m == 'm')
			{
				iv = (b - 100)*0.9;
				printf("��������� ��� ��� ������ = %d\n", iv);
				if (a < iv)		
					printf("�����������\n");
				else if (a > iv) printf("��������\n"); else printf("��������� ���\n");
			}

			else if (m == 'w')
			{
				iv = (b - 100)*0.85;

				printf("��������� ��� ��� ������ = %d\n", iv);

				if (a < iv)
					printf("����������\n");	
				else if (a > iv) printf("��������\n"); else printf("��������� ���\n");
			}
		}
		else if (n == 9) {
			printf("4.	���������� �������� ������� �� �����������. �� ����� ������� ������ � ��� �������� ������, ������ � ������ ������� ������. ��������� ������ ������� ����� � � ������ ������������� ������ �������� ����������.\n");

			printf("������� ���� �������� ���������� ���� INT?\n\n");
			printf("1. 8 ����\n");
			printf("2. 4 ����\n");
			printf("3. ������� �� ��\n");

			
			printf("N = ");
			scanf("%d", &n);

			if (n == 1) printf("������.  ������� �� ��\n"); else if (n == 2) printf("������.  ������� �� ��\n"); else if (n == 3) printf("�����\n");
		}

		else if (n == 11) {
			printf("1.	������ � ���������� ����� ������. ���������� ����� � ����������� �� ������ ������ � ������� ��������� (����� (3,4,5), ���� (6,7,8), ����� (9,10,11)  ���� (12,1,2))\n1. ����� 2. ���� 3. ����� 4. ����\n");
			
			int mes = 0;

			printf("������� ����� ������ = ");
			scanf("%d",&mes);

			switch (mes)
			{
			case 3:
			case 4:
			case 5:
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("�����\n");
			}
			break;

			case 6:
			case 7:
			case 8:
			{	
				SetConsoleTextAttribute(hConsole, 13);
				printf("����\n");
			}
			break;

			case 9:
			case 10:
			case 11:
			{		
				SetConsoleTextAttribute(hConsole, 14);
				printf("�����\n");
			}
			break;
			
			default: 
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("����\n");
			}
				break;
			}
		}
	
	} while (n > 0);

}