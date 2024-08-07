#include<iostream>
using namespace std;

int main(){
    
    cout << "enter a string \n" ; 
    
    string s;
    
    cin >> s;
    
    int n = s.size();
    
    string reverseString;
    
    for(int i = n - 1; i >= 0; i--){
        reverseString += s[i];
    }
    
    cout << reverseString;

    
}
