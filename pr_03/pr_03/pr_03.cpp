﻿// pr_03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    int A[5];
    int B[4];
    setlocale(LC_ALL, "Russian");
    cout << "Введите 5 элементов массиава A\n";
    int proizA = 1;
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
        proizA *= A[i];
    }
    int proizB = 1;
    cout << "Введите 4 элемента массиава B\n";
    for (int i = 0; i < 4; i++) {
        cin >> B[i];
        proizB *= B[i];
    }
    if (proizA > proizB) {
        cout << "Произведение массива A больше чем B\n";
        for (int i = 0; i < 5; i++) {
            cout << A[i] <<endl;
        }
    }
    else {
        cout << "Произведение массива B больше чем A\n";
        for (int i = 0; i < 4; i++) {
            cout << B[i] << endl;
        }
    }


    cout << "Hello World!\n";
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
