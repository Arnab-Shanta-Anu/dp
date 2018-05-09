#include<bits/stdc++.h>
using namespace std;
#define LL long long
LL lpt[505][505];
LL cnt=0;

LL stairCount(int taken,int rem)
{
    LL sum=0;
    if(rem==0) return 1;
    if(lpt[taken][rem]!=-1){

        return lpt[taken][rem];
    }
    for(int i=taken+1;i<=rem;i++){
        if(i<rem-i||rem-i==0){
           sum+=stairCount(i,rem-i);
        }
    }

    return lpt[taken][rem]=sum;
}
int main()
{

    int n;
    while(scanf("%d",&n)!=EOF){
        memset(lpt,-1,sizeof(lpt));
        printf("%lld\n",stairCount(0,n)-1);
    }
    return 0;
}
