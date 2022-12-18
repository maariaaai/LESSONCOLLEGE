﻿/*
4. Пользователь вводит размерность и элементы динамического массива из
целых чисел. Определить минимальный положительный элемент массива и
вывести его на экран, если в массиве нет положительных элементов, то
вывести соответствующее сообщение. 


Создать новый динамический массив,
первый элемент которого является полу суммой первого и последнего
элементов исходного массива, второй – полу суммой второго и
предпоследнего и так далее, если количество элементов четное, то последний
элемент является полу суммой двух центральных элементов, иначе просто
равен центральному элементу. Вывести полученный массив на экран.
Отсортировать оба массива сортировкой выбором по убыванию. Все
алгоритмы оформить в виде подпрограмм с параметрами.
*/
#include <iostream>
using namespace std;
//Пользователь вводит размерность и элементы динамического массива из целых чисел
void EnterArr(int n, int mas[])
{
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
	}
}
/*Определить минимальный положительный элемент массива и
вывести его на экран, если в массиве нет положительных элементов, то
вывести соответствующее сообщение*/
void search(int n, int mas[])
{
	int min = 10000, kol = 0;
	for (int i = 0; i < n; i++)
	{
		if ((mas[i] < min) && (mas[i] > 0))
		{
			min = mas[i];
			kol++;
		}
	}
	if (kol == 0)
	{
		cout << "Нет минимального положительного элемента" << endl;
	}
	else
	{
		cout << "Минимальный положительный элемент: " << min << endl;
	}
}
/*Создать новый динамический массив,
первый элемент которого является полу суммой первого и последнего
элементов исходного массива, второй – полу суммой второго и
предпоследнего и так далее, если количество элементов четное, то последний
элемент является полу суммой двух центральных элементов, иначе просто
равен центральному элементу. Вывести полученный массив на экран.*/
void NewMas(int n, int mas1[], int mas2[], int& kol)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j >= 0; )
		{
			j = j - kol;
			mas2[i] = (mas1[i] + mas1[j]) / 2;
			kol++;
			break;
		}
		if (kol == n / 2)
			break;
	}
	if (n % 2 != 0)
	{
		kol++;
		int i = n / 2;
		mas2[kol] = mas1[i];
	}
}
int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Введите размерность массива: ";
	cin >> n;
	int* mas1 = new int[n];
	EnterArr(n, mas1);
	cout << "Введенный массив: ";
	for (int i = 0; i < n; i++)
	{
		cout << mas1[i] << " ";
	}
	search(n, mas1);
	int* mas2 = new int[n];
	int kol = 0;
	NewMas(n, mas1, mas2, kol);
	cout << "Новый массив:" << endl;
	for (int i = 0; i <= kol; i++)
	{
		cout << mas2[i] << " ";
	}
}