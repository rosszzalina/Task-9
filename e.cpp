#include <iostream>
using namespace std;
int main() {
 int rows, seats,n,m,sum=0,num;
 cin>>n;
 cin>>m;
 rows=n;
 seats=m;
 int arr[rows][seats], arr2[rows][seats];
    for(int i=0;i<n;i++)
        for(int j=0;j<m; j++)
            cin>>arr[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<m; j++)
            cin>>arr2[i][j];
    for(int i=0;i<n;i++)
        for(int j=0; j<m; j++)
            if(arr2[i][j]==1){
                sum=sum +arr[i][j];
             }
cout<<sum;
    return 0;
}
