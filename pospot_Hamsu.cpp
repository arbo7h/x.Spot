//
//  pospot_Hamsu.cpp
//  x-Spot
//
//  Created by selfish7h on 2016. 1. 1..
//  Copyright © 2016년 selfish7h. All rights reserved.
//

#include "pospot.h"
#include <iostream>

const int POINTS = 62;

using namespace std;

void PosX::spotX(int n)
{
    Spot spot(n);
    return;
}

Spot::Spot(int x)
{
    if(x == 0 || x < 62)
    {
        for (int o1=0; o1<POINTS; o1++) cout<<'.';
        cout<<endl;
        return;
    }
    
    for (int i=1; i < x; i++)
    {
        cout<<'.';
    }

    cout<<"7";

    for (int j=x-POINTS; j<0; j++)
    {
        cout<<'.';
    }
    cout<<endl;
    return;
}
