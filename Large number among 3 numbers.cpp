#include <iostream>
using namespace std;

int main ()
{
    int num1, num2, num3;
    cout<< "Enter 3 Numbers : ";
    cin>> num1>> num2>> num3;

    if (num1>num2 && num1>num3)
    {
        cout<< "Largest Number is " << num1;
    }
    else if (num2>num1 && num2>num3)
    {
        cout<< "Largest Number is " << num2;
    }
    else if (num3>num1 && num3>num2)
    {
        cout<< "Largest Number is " << num3;
    }

    return 0;
}
