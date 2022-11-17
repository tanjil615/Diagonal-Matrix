/*
   Diagonal matrix
   1 2 3
   1 2 3
   4 5 6
*/

#include<bits/stdc++.h>
using namespace std;            /// diagonal matrix
#define ll  long long
int main(){
    int row,col,i,j; /// row er jnno row column er jnno col
    cin>>row>>col;
    int a[row][col];
    for(int i =0; i<row; i++){ /// i for row j for col
        for(int j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }
    int sum =0;                /// jogfol krbo diagonal element er tai sum = 0
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            if(i==j)                    /// jdi row and col er man shoman hoi taile sum krbo
                sum+=a[i][j];
        }
    }
    cout<<sum<<endl;         /// shese sum krbo
return 0;
}

