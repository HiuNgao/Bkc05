// 10-basic-logicmath2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, k = 0;

    cout << "Enter X : ";
    cin >> x;
    
    for (int i = 1 ; i <= x ; i++) 
    {
        k = x + i;
    }
    cout << "Tong la:" << k << endl;
    return 0;
}


// lay chu so cuoi cua so nguyen su dung toan tu chia lay du (modulus)
// cong chu so cuoi vao bien Sum
// xoa chu so cuoi bang cach su dung toan tu chia lay phan nguyen(division)