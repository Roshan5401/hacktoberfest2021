#include<bits/stdc++.h>
using namespace std;
void toh(int n,string A,string B,string C)
{
    if(n==0)
    {
        return;
    }
    //source-middletower-destination
    toh(n-1,A,C,B);
    cout<<"Move disk from "<<A<<" to "<< C <<endl;
    toh(n-1,B,A,C);
}
int main()
{
    int n;
    cin>>n;
    toh(n,"A","B","C");
}