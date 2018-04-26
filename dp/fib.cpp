#include <bits/stdc++.h>
using namespace std;

int fib[100000];

int Fib(int n)
{
    if(fib[n]!=-1){
        //printf("returning value...\n");
        return fib[n];
    }
    //printf("Calling fib..\n");
    return fib[n]=Fib(n-2)+Fib(n-1);
}
int main()
{
    fib[0]=0;fib[1]=1;
    for(int i=2;i<100000;i++)
        fib[i]=-1;
    for(int i=0;i<10;i++)
    printf("%d ",Fib(i));
    return 0;
}
