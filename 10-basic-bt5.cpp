// 10-basic-logicmath2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int sum(int x)
{
    int sum(0), y;
    while (x != 0)
    {
        y = x % 10;
        sum += y;
        x /= 10;
    }
    return 0;

}

int main()
{
    int x;
    cout << "Enter X : ";
    cin >> x;
    int sum(0);
    cout << "Tongcacchuso = " <<  sum(0) << endl;

    return 0;
}


// lay chu so cuoi cua so nguyen su dung toan tu chia lay du (modulus)
// cong chu so cuoi vao bien Sum
// xoa chu so cuoi bang cach su dung toan tu chia lay phan nguyen(division)