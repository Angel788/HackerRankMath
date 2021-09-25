#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int _gcd(int a, int b);
int num_mcd (vector<int> nums,int len);

int _gcd(int a, int b) {
   if (b == 0)
   return a;
   return _gcd(b, a % b);
}

int num_mcd (vector<int> nums,int len){
    int gdc=0;
    auto g_d_c=accumulate(nums.begin(),nums.end(),1,[](const auto &a,const auto &b){
        return _gcd(a,b);
    });
    /*for(int i=0;i<len;i++){
        gdc=_gcd(gdc, nums[i]);
    }*/
    return g_d_c;
}

int main(){
    int casos,gdc=0;
    cin>>casos;
    for(int i=0;i<casos;i++){
        int casoparticular;
        cin>>casoparticular;
         auto nums=vector <int>(casoparticular);
        for(int e=0;e<casoparticular;e++){
            cin>>nums[e];
        }
        if(num_mcd(nums,casoparticular)==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
