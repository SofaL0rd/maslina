

#include <iostream>
#include "stdio.h" 
#include "windows.h"
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
    int a, b, x;
    cout << "Введіть вік від 20 до 69: ";
    cin >> x;
	a = b/10;
	b=a%10;
	

   if(a>20&&a<69){

    switch (a)
    {
    case 2: cout << "Двадцять "; break;
    case 3:cout << "Тридцять "; break;
    case 4: cout << "Сорок "; break;
    case 5: cout << "П'ятдисят "; break;
    case 6: cout << "Шістдесят "; break;
   

    }
	switch (b)
    {
    case 0: cout << "років "; break;
    case 1:cout << "один рік "; break;
    case 2: cout << "два роки "; break;
    case 3: cout << "три роки "; break;
    case 4: cout << "чотири роки "; break;
	case 5: cout << "п'ять років "; break;
    case 6:cout << "шість років "; break;
    case 7: cout << "сім років "; break;
    case 8: cout << "вісім років "; break;
    case 9: cout << "дев'ять років "; break;
 

    }
   }
   else{
	   cout << "Вкажіть чісло від 20 до 69!";
   }
}

