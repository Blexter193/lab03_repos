// Lab_03_3.cpp
// < Бабич Олексій >
// Лабораторна робота No 3.3
// Розгалуження, задане графіком функції.
// Варіант 1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;  // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу
    
    cout << "R = "; cin >> R; 
    cout << "x = "; cin >> x;
    
    // розгалуження в повній формі
    if (x<=-6-R)
        y = 0;
    else 
        if (-6-R<x && x<=-6)
            y = -sqrt(pow(R, 2) - pow((x+6), 2));
        else
            if (-6<x && x<=-R)
                y = R*(x+6) / (-R+6) - R;
            else
                if (-R<x && x<=0)
                    y = sqrt(pow(R, 2) - pow(x, 2));
                else
                    if (0<x && x<=3)
                        y = -R*x/3 + R;
                    else
                        y = R*(x-3)/6;
    cout << endl;
    cout << "y = " << y << endl;
    
    cin.get();
    return 0;
}
