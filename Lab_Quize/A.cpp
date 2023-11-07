#include<bits/stdc++.h>
using namespace std; 
 
 

template<typename  T1, typename T2> 

class Array { 
 private: 
    T1 a[100];
    T2 b[100];  
    int n1, n2; 

 public: 
    Array() {
        n1 = 5 , n2 = 5; 
    }  
     
    void  insert(int index, T1 val) {
        if(index < n1) {
            for(int i=n1; i>index; i--) {
                a[i] = a[i-1];
            } 

            a[index] = val; 
            n1++;
        } 

        else {
            cout<<"Out of index!!" << endl; 
        }
    }

 
    void insert(int index, T2 val) {
        if(index < n2) {
            for(int i=n1; i>index; i--) {
                b[i] = b[i-1]; 
 
            }

            b[index] =  val; 
            n2++;
        } 

        else  {
            cout<<"Out of index!!" << endl;
        }
    }

    void show_details() {
        cout<< "Fist arrary: "; 
        for(int i=0; i<n1; i++) {
            cout<< a[i] << ' '; 
        }
        cout<< endl;
        cout<<"Second array: "; 
        for(int i=0; i<n2; i++) {
            cout<< b[i] << ' ';
        }
        cout<< endl;
    }
  
};
 
 
  
int main() {  

    Array<int, char> arr; 
    arr.insert(0, 56); 
    arr.insert(0, 'A'); 
    arr.insert(1, 'F'); 
    
    arr.show_details();
     return 0;
}