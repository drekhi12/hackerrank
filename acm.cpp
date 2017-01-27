#include <iostream>
#include<conio.h>
#include <math.h>
using namespace std;
#define Y_1900 1
#define YEAR 1900
char week[7][10]={"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};

int findday(int x)
{
    int y,i;
    y = Y_1900+(x-YEAR);
    for(i=YEAR;i<x;i++)
    {
        if(((i%4==0) && (i%100!=0)) || (i%400==0))
        y++;
    };
    y=y%7;
    return y;
}

int main()
{
    int T,arg,f;
    scanf("%d",&T);
    while(T--)
    {

    cin>>arg;
    f=findday(arg);
    cout<<week[f]<<endl;}
    return 0;

}
