#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Rows: ";
    cin >> n;

   for(int i=1;i<=n;i++){
    for(int j=0;j<4+n-i;j++){
        if(i==1 || i == n){
            cout << '*';
        }
        else {
            cout << " ";
        }
    }

    for(int k=0 ; k<2*i -1 ; k++){
        if(k%2 == 0){
            cout << i;
        }
        else{
            cout << "*";
        }
    }

    for(int j=0;j<4+n-i;j++){
        if(i==1 || i == n){
            cout << '*';
        }
        else {
            cout << " ";
        }
    }
    cout << endl;
   }
}

/* 
Output: 

Enter the Rows: 5
********1********
       2*2       
      3*3*3      
     4*4*4*4     
****5*5*5*5*5****
 */