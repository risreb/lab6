#include <iostream>
#include <string>
#include <Windows.h>


using namespace std;

int main()

{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int our_num = 0;
    int user_int;

    do
    {
        cout << "Введите целое число или число '0', чтобы закончить: " << endl;
        cin >> user_int;
        our_num += user_int;
    } 
    while (user_int != 0);
        {
        cout << "Сумма: " << our_num << endl;
        }
  
    

    return 0;
}
