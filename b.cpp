#include <iostream>
using namespace std;
int main() {
 int rows, cols,n, count =0;
 cin>>n;
 rows=n;
 cols=n;
 int arr[rows] [cols];
 for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
    cin>>arr[i] [j];
    }
 }
  int sum = 0;
    for(int i =0; i<rows; i++){
        for(int j=0; j<cols; j++){
        if(arr[i] [j]<0 && arr[i] [j] %2==0){
        sum= sum +arr[i] [j];
        count++;
            
        }
        }
}
 cout<<count<<" "<<sum;
    return 0;
}
