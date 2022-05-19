#include<iostream>
using namespace std;

int glo = 6;
void sum()
{
   cout<<glo;
}

int main()
{
    int glo=4;
    glo=34;
    sum();
    cout<<glo;

    return 0;
}


