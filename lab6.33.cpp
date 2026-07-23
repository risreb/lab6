#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int number;
    cout << "Введите целое число: " << endl;
    cin >> number;

        for (int i = 1; i <= 10; i++)

        {

            cout << number << " х " << i << " = " << number * i << endl;

        }

        return 0;

    }