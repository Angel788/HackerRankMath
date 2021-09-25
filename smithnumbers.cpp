#include <bits/stdc++.h>
#include <math.h>
int sumPrimeFactor(int x);
int sumFactors(int x);
using namespace std;

int sumFactors(int x){
    int n=100,sum=0;
    //x/10>0 || x%10==0
    while (x>0)
    {
       sum+=(x%10);
       x=x/10;
    }
    //sum+=x;
    return sum;
}
int sumPrimeFactor(int x){
    int sum=0;
    while(x%2==0){x/=2;sum+=2;}
    for(int i=3;i<=sqrt(x);i+=2){
        while(x%i==0){
            if(i>=10){
                sum+=sumFactors(i);
            }
            else sum+=i;
            x/=i;
        }
    }
    if(x>2){
        sum+=sumFactors(x);
    }
    return sum;
}
int main(){
    int num;
    cin>>num;
    if(sumPrimeFactor(num)==sumFactors(num)) cout<<1<<endl;
    else cout<<0<<endl;
}