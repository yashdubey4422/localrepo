#include<iostream>
using namespace std;
int fac(int n){
    if(n==1){
        return 1;
    }
    int facN=n*fac(n-1);
    return facN;
}
int main(){
    int n;
    cin>>n;
    cout<<fac(n);

}