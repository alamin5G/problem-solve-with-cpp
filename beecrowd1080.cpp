/**
 * @file beecrowd1080.cpp
 * see the problem - https://prnt.sc/vCA2imMt4Toc
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-30
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, p=0, m=0;

    for(auto i = 0; i<100; i++)
    {
        cin >> n;
        if(n>m){
            m = n;
            p = i;
        }
    }


    cout <<m << endl;
    cout << p+1 << endl;


    return 0;
}
