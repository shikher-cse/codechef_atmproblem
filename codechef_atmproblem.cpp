#include<iostream>
using namespace std;
int main()
{
     int x;   
    float y; 
   
    cin>>x >>y;

    if ((0<=x<=2000) && (0<=y<=2000) && ((y-0.5)>=x) && (x%5==0))
    {
        y=y-0.5-x;
    }
    cout<<y;

    return 0;
}
