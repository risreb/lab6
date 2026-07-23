#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num;
    int result = 0;

    cout << "Введите целое число: " << endl;
    cin >> num;

    while (num != 0)
    {
        result = result + num % 10;
        num = num / 10;
    }

    cout << "Сумма чисел: " << result << endl;

    return 0;
}