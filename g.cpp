#include <iostream>
using namespace std;
int main() {
int rows,cols,n,m;
cin>>n>>m;
rows=n;
cols=m;
int arr[rows] [cols];
for(int i=0; i<n; i++) {
for(int j=0; j<m; j++) {
cin>>arr[i][j];
}
}
for(int i=0; i<m; i++) {
for(int j=0; j<n; j++) {
cout<<arr[j][i]<<" ";
}
cout<<endl;
}
}
