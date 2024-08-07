#include<iostream>
using namespace std;

int main(){
    
    int a[5];
    cout << "enter the array \n" ;
    int s = 0;
    for(int i = 0; i < 5; i++){
        cin >> a[i];
        
        s += a[i];
    }
    
    cout << s;

    
}
