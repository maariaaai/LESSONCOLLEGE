﻿// Files.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    float ad;
    int a[10][10];
    int n, m;
    system("chcp 1251");
    cout << "Введите размерность" << endl;
    cin >> n >> m;
    ifstream f;
    f.open("f.txt", ios::in);
    if (f) {
        while (!f.eof()) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                   
                    f >> ad;
                    cout << ad << " ";
                }
                f.close();
            }
           
        }
    }
    cout << "error";
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
