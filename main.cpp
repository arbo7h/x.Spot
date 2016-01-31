#include <iostream>
#include "pospot.h"
using namespace std;

int main()
{
    int num;
    int *x = new int;
    PosX *posx = new PosX;
    
    cout<<"Hello, i am spoter by :.7h"<<endl;
    cout<<"num:";
    cin>>num;
    
    for (int i=0; i<num; i++)
    {
        cout<<"x["<<i<<"]:";
        cin>>x[i];
    }
    
    for (int j=0; j<num; j++)
    {
        posx[j].spotX(x[j]);
    }
    
    delete x;
    return 0;
}