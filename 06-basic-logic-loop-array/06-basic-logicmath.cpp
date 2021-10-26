// 06-basic-logic-loop-array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b; // ax +b = 0
    float Ketqua = 0;
    cout << "Enter number of a, b : ";
    cin >> a >> b;
    if (a == 0 && b == 0)
    {
        cout << "Phuong trinh co vo so nghiem!" << endl;

    } 
    else if (a == 0 && b != 0)
    {
        cout << "Phuong trinh vo nghiem" << endl;

    }
    else
    {
        Ketqua = -b * 1.0 / a;
        cout << "Nghiem phuong trinh" << a << "x" << " + " << b << " = 0 , la x = " << Ketqua << endl;
    }
}

