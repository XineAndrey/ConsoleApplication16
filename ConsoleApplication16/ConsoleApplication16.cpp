#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "Header1.h"

using namespace std;



int main()
{
    srand(time(0));
    setlocale(LC_ALL, "ru");
    const int b(3);
    int a = 5;
    cout << a << endl;
    cout << "Hello World" << endl;
    function(a, b);
    function(a, b);
    cout << a << endl;
    cout << "Hello" << endl;
}


