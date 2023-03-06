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

    int a = 5;
    cout << a << endl;
    cout << "Hello World" << endl;
    function(a);

}


