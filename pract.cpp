#include <windows.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << boolalpha;
    int i1 = 0, i2 = 10, i3 = 10;
    while (i1 < i2 && i3 != 4)
    {
        i1++;
        cout << i1 << "  operator < " << i2 << " и" << " i3 operator != " << i3 << endl;
        i3--;
    }

    int a1 = 3, a2 = 7, a3 = 12;
    while (a2 > a1 || a3 != 6)
    {
        a1++;
        cout << a2 << "  operator > " << a1 << " или" << " a3 operator != " << a3 << endl;
        a3--;
    }

    int b1 = 0, b2 = 4, b3 = 2;
    while (b2 >= b1 || b3 == 2)
    {
        b1++;
        cout << b2 << "  operator >= " << b1 << " или" << " b3 operator = " << b3 << endl;
        b3--;
    }

    int c1 = 6, c2 = 6, c3 = 6;
    while (c1 == c2 || c3 == c2)
    {
        c1++;
        cout << c1 << "  operator = " << c2 << " или" << " c3 operator = " << c2 << endl;
        c3--;
    }

    int d1 = 14, d2 = 19, d3 = 7;
    while (d1 <= d2 && d3 != d2)
    {
        d1--;
        cout << d1 << "  operator <= " << d2 << " и" << " d3 operator != " <<d2 << endl;
        d3++;
    }

    int f1 = 1, f2 = 4, f3 = 9;
    while (f1 > f3 || f2 < f3)
    {
        f1++;
        cout << f1 << "  operator > " << f3 << " или" << " f2 operator < " << f3 << endl;
        f2++;
    }

    int g1 = 8, g2 = 6, g3 = 3;
    while (g1 >= g3 && g2 != 0)
    {
        g3++;
        cout << g1 << "  operator >= " << g3 << " и" << " g2 operator != " << 0 << endl;
        g2--;
    }
}
