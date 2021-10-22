

#include <iostream>
#include "stdio.h" 
#include "windows.h"
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

       /*   int a, x;
       double y;
       bool f = true;
       cin >> a >> x;

       if ((a > x) && (x > 7))
       {
           y = a * a;
       }
       else if (a >= 0) {
           y = sqrt(a);
        }
       else {
           f = false;
       }
       if (f) { cout << y; }
       else{
       cout << "Eror";
       }
       */
    //first part of code
    /*
    double b, a, x, c, f;
    cout << "Imput number: \n";
    cin >> x >> a >> b >> c;

    if ((c + b < 0) && (b != 0) && (c != 0)) {
        f = (5 * (x * x)) + (10 * b / (c * c * c));
        cout << f;
    }
    else if (((c + b) > 0 || (b == 0)) && (x - (c * c) != 0)) {
        f = ((b * b * b) - a) / (x - (c * c));
        cout << f;
    }
    else if (c != 0) {
        f = x / (5 * c);
        cout << f;
    } 
    else cout << "Error";
    */
    int x;
    cout << "Введіть вік від 20 до 69: ";
    cin >> x;

    string a2("Двадцять ");
    string a3("Тридцять ");
    string a4("Сорок ");
    string a5("П'ятдесят ");
    string a6("Шістдесят");

    string b1("один ");
    string b2("два ");
    string b3("три ");
    string b4("чотири");
    string b5("п'ять ");
    string b6("шість ");
    string b7("сім ");
    string b8("вісім ");
    string b9("дев'ять ");

    string c1("рік");
    string c2("роки");
    string c3("років");

    switch (x)
    {
    case 20: cout << a2 << c3; break;
    case 21:cout << a2 << b1 << c1; break;
    case 22: cout << a2 << b2 << c2; break;
    case 23: cout << a2 << b3 << c2; break;
    case 24: cout << a2 << b4 << c2; break;
    case 25: cout << a2 << b2 << c3; break;
    case 26: cout << a2 << b6 << c3; break;
    case 27: cout << a2 << b7 << c3; break;
    case 28: cout << a2 << b8 << c3; break;
    case 29: cout << a2 << b9 << c3; break;
    case 30: cout << a3 << c3; break;
    case 31: cout << a3 << b1 << c1; break;
    case 32: cout << a3 << b2 << c2; break;
    case 34: cout << a3 << b4 << c2; break;
    case 35: cout << a3 << b5 << c3; break;
    case 36: cout << a3 << b6 << c3;  break;
    case 37: cout << a3 << b7 << c3; break;
    case 38: cout << a3 << b8 << c3; break;
    case 39: cout << a3 << b9 << c3; break;
    case 40: cout << a4 << c3; break;
    case 41: cout << a4 << b1 << c1; break;
    case 42: cout << a4 << b2 << c2; break;
    case 43: cout << a4 << b3 << c2; break;
    case 44: cout << a4 << b3 << c2; break;
    case 45: cout << a4 << b5 << c3; break;
    case 46: cout << a4 << b6 << c3; break;
    case 47: cout << a4 << b7 << c3; break;
    case 48: cout << a4 << b8 << c3; break;
    case 49: cout << a4 << b9 << c3; break;
    case 50: cout << a5 << c3; break;
    case 51: cout << a5 << b1 << c1; break;
    case 52: cout << a5 << b2 << c2; break;
    case 53: cout << a5 << b3 << c2; break;
    case 54: cout << a5 << b4 << c2; break;
    case 55: cout << a5 << b5 << c3; break;
    case 56: cout << a5 << b6 << c3; break;
    case 57: cout << a5 << b7 << c3; break;
    case 58: cout << a5 << b8 << c3; break;
    case 59: cout << a5 << b9 << c3; break;
    case 60: cout << a6 << c3; break;
    case 61: cout << a6 << b1 << c1; break;
    case 62: cout << a6 << b2 << c2; break;
    case 63: cout << a6 << b3 << c2; break;
    case 64: cout << a6 << b4 << c2; break;
    case 65: cout << a6 << b5 << c3; break;
    case 66: cout << a6 << b6 << c3; break;
    case 67: cout << a6 << b7 << c3; break;
    case 68: cout << a6 << b8 << c3; break;
    case 69: cout << a6 << b9 << c3; break;
    default: cout << "Вкажіть чісло від 20 до 69!";

    }

}

