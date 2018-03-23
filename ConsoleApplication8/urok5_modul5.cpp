#include<iostream>
#include<locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	cout << "Ведите номер задание :" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{//	Дан целочисленный квадратный массив 10×10.Найти сумму элементов  каждой строки
		int a[10][10];
		int sum = 0;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				a[i][j] = 1 + rand() % 100;
				cout << a[i][j] << " \t";
			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				sum += a[0][j];
			}
			cout << "Сумма в строке " << i + 1 << ": " << sum << "\n";
			sum = 0;
		}


	}break;
	case 2:
	{
		//2.	Дан целочисленный квадратный массив 4×4.Найти строку с наименьшей суммой элементов
		int A[4][4], C[4] = { 0 };
		const int w = 4;

		cout << "\nИсходный массив:\n" << endl;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				A[i][j] = 10 + rand() % 30;
				cout << A[i][j];

				C[i] += A[i][j];
			}

			cout << endl;

		}

		cout << endl;

		cout << "\nСуммы элементов каждой строки." << endl;

		cout << endl;

		int min = 1000000, mini;

		for (int i = 0; i < 4; i++)
		{
			cout << "sum[" << i << "]=" << C[i] << "  ";

			if (C[i] < min)
			{
				min = C[i];
				mini = i;
			}
		}

		cout << endl;

		cout << "Строка с наименьшей суммой элементов: sum[" << mini << "] = " << C[mini] << endl;

		cout << endl;


	}break;
	case 3:
	{
		//3.	Дана целочисленная матрица  6× 8. Найти произведение положительных элементов первого столбца
		int a[6][8];
		double proiz = 1;
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				a[i][j] = 1 + rand() % 10;
				cout << a[i][j] << " \t";
			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				proiz = proiz*a[i][0];
			}
		}

		cout << "произведение положительных элементов первого столбца:" << proiz << endl;
	}break;
	case 4:
	{
		//4.	Составить программу, которая заполняет квадратную матрицу порядка n натуральными числами 1, 2, 3, .. ., n2,
		//записывая их в нее "по спирали" по часовой стрелке.
		int a[10][10];
		int n; cin >> n;
		for (int i = 0; i < 10; i++)
		{
			if (i % 2)
			{
				for (int j = 10 - 1; j >= 0; j--)
				{
					a[i][j] = n--;
				}
			}
			else
			{
				for (int j = 0; j < 10; j++)
				{
					a[i][j] = n--;
				}

			}
		}
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << a[i][j] << " \t";
			}
			cout << endl;
		}
		cout << endl;





	}break;
	case 5:
	{
		//5.	Дан двухмерный целочисленный массив A(M, N).Составить  одномерный массив B из номеров строк этого массива
		int a[6][8];
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				a[i][j] = 1 + rand() % 10;
				cout << a[i][j] << " \t";
			}
			cout << endl;
		}
		cout << endl;


	}break;
	}
}