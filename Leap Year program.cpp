#include <iostream>
using namespace std;

int main ()
{
    int year;
    cout << "Enter a Year : ";
    cin >> year;

    if (year%4==0 && year%100!=0)
    {
        cout << "Its A Leap Year!";
    }
    else if (year%400==0)
    {
        cout << "Its A Leap Year!";
    }
    else
    {
        cout << "Its Not A Leap Year!";
    }
    return 0;
}

