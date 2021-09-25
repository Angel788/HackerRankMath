#include <bits/stdc++.h>
#include <math.h>
using namespace std;
const long mod =1e9+7;
long int power(long a,long b);
long int power(long a,long b)
{
    if(b==0||b==-1)
    {
        return 1;
    }
    long ans=1;
    while(b)
    {
        if(b&1)
            ans=(ans*a)%mod;

        a=(a*a)%mod;
        b=b>>1;
    }
    return (ans%mod);
}

int main(){
    int test, odd_accumulate=0,evem_accumate=0;
    long long int result,subset_even=0,subset_odd=0;
    cin>>test;
    while(test!=0){
        int num;
        cin>>num;
        if(num%2==0) evem_accumate++;
        else odd_accumulate++;
        test--;
    }
    if(evem_accumate>0) subset_even=(power(2,evem_accumate))-1;
    if(odd_accumulate>0) subset_odd=(power(2,odd_accumulate-1))-1;
    result=(subset_even+subset_odd)+(subset_odd*subset_even);
    cout<<result%1000000007<<endl;
    return 0;
}