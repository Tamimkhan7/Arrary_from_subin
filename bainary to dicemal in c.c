#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >>n;
    int i=0,sum=0; 
    while(n != 0){
        int rem = n%10;
        n/=10;
        sum += rem*pow(2,i);
        i++;
    }
    cout<<sum<<endl;
}
