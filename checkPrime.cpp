#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 0 || n == 1){
        cout << "it is not a Prime";
    }
    else{
        int i = 2;
        while(i < n){
            if(n % i == 0){
                break;
            }
            i += 1;
        }
        if(i == n) cout << "it is not a Prime";
        else cout << "it is a Prime";
    }
    return 0;
}