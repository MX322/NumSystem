#include <iostream>
#include <math.h>
using namespace std;

void ToBinary(int num);
void ToDecimal(int num);

int main()
{
    int choice, num;

    cout << "[1] - convert from decimal to binary \n[2] - convert from binary to decimal\n";
    cin >> choice;
    cout << "Enter number: ";
    cin >> num;


    switch (choice)
    {
    case 1:
    {
        ToBinary(num);
        break;
    }

    case 2:
    {
        ToDecimal(num);
        break;
    }
    default:
    {
        system("cls");
        main();
    }
    }
}

void ToBinary(int num)
{
    int temp = 0;

    for (int i = 1; num > 1; i *= 10)
    {
        if (num % 2 == 1)
        {
            temp += i;
        }

        num /= 2;
        if (num == 1)
        {
            temp += i * 10;
        }
    }
    cout << "Binary number: " << temp << "\n";
}

void ToDecimal(int num)
{
    int temp = 0;
    int count = 0;

    for (int i = 1; i <= num; i *= 10)
    {
        int num2 = (num / i % 10) * pow(2, count);;

        temp += num2;
        count++;
    }
    cout << "Decimal number: " << temp << "\n";
}