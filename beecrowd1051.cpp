/**
 * @file beecrowd1051.cpp
 * see the problem - https://prnt.sc/7jQFaz07VJa3
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-28
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, tax;

    cin >> a;

    if (a >= 0 && a <= 2000)
    {
        cout << "Isento" << endl;
    }
    else if (a > 2000.01 && a <= 3000.00)
    {
        a = a - 2000;
        tax = a *.08;
        cout << "R$ " << fixed << setprecision(2) << tax << endl;
    }
    else if (a > 3000 && a <= 4500)
    {
        a = a - 3000;
        tax = a *.18 + 1000*.08;
        cout << "R$ " << fixed << setprecision(2) << tax << endl;
    }
    else
    {
        a = a - 4500;
        tax = a *.28 + 1500*0.18+1000*0.08;
        cout << "R$ " << fixed << setprecision(2) << tax << endl;
    }

    return 0;
}