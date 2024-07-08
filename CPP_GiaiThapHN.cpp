// CPP_GiaiThapHN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

void move(int n, char a, char b, char c)

{
    if (n == 1) {
        cout << a<< " -->" <<c <<" \n";
    }
    else {
        move(n - 1, a, c, b);
        cout << a << " -->" << c << " \n";
        move(n - 1, b, a, c);

    }
    }


int main()
{
    int n;
    cout << "Nhap so: ";
    cin >> n;
    cout << "Thu tu dich chuyen la:\n ";
    move(n, 'a', 'b', 'c');
    cout << " \n-------------\n";
}