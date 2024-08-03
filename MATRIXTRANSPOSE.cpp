#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j;
    cout<<"enter the number of rows in matrix"<<endl;
    cin>>r;
    cout<<"enter the number of columns in matrix"<<endl;
    cin>>c;
    vector<vector<int>>m(r,vector<int>(c));
    vector<vector<int>>ans(c,vector<int>(r));
    cout<<"enter the elements of matrix:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>m[i][j];
            ans[j][i]=m[i][j];
        }
    }
    //for printing the transposed matrix
    for(i=0;i<c;i++)
    {

        for(j=0;j<r;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}

