#include <iostream>
#include <stdio.h>
using namespace std;

bool runnian(int year)
{
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int days = 0;
    days = days + ((runnian(2012)) ? 366 : 365);
    days = days + ((runnian(2013)) ? 366 : 365);
    days = days + ((runnian(2014)) ? 366 : 365);

    if(days % 5 > 0 && days % 5 <= 3)
    {
        cout << "打鱼" << endl;
    }
    else
    {
        cout << "晒网" << endl;
    }

    getchar();
    return 0;
}