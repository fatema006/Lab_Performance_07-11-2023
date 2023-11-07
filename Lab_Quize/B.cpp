#include<bits/stdc++.h>
using namespace std; 
#define end '\n' 
#define ll long long int 

template <typename T> 
T findMax(T a, T b, T c) {
    return max({a, b, c}); 
}
 
 

int main() { 

    cout<< "Max integer:  " << findMax(10, 90, 20) << endl; 
    cout<<"Max float: " << findMax(3.40, 5.86, 0.95) << endl; 
    cout<<"Max character: " << findMax('t', 'f', 'q') << endl; 
    
     return 0;
}