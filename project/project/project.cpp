﻿#include <iostream>
using namespace std;
int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    cout << "A / B = " << a / b << '\n';
    cout << max(a, b) << "\n";
    cout << min(a, b) << '\n';
}
