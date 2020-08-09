#include<iostream>
using namespace std;

int main(){
int t,n,a,q,b;
char c;

int arr[100000];


    cin>>n;
    for(int i=0;i<100000;i++){arr[i]=0;}
    for(int i=0;i<n;i++){cin>>a;arr[a-1]++;}
    cin>>q;

        int tct=0;
        int fct=0;
        int sct=0;
        int ect=0;
        cin>>c;cin>>b;
        if(c=='+'){(arr[b-1]++);}
        if(c=='-'){(arr[b-1]--);}
    for(int i=0;i<100000;i++){
        if(arr[i]>=2)tct++;
        if(arr[i]>=4)fct++;
        if(arr[i]>=6)sct++;
        if(arr[i]>=8)ect++;
    }
    //for(int i=0;i<3;i++){cout<<arr[i]<<' ';}
   // cout<<endl;
    //cout<<tct<<' '<<fct<<' '<<sct<<' '<<ect<<' '<<endl;
    if(ect>=1 || (sct>=1 && tct>=2)|| (fct>=2) || (fct>=1 && tct>=3))cout<<"YES"<<endl;
    else{cout<<"NO"<<endl;}

    for(int i=1;i<q;i++){
        cin>>c;cin>>b;
        if(c=='+'){(arr[b-1]++);}
        if(c=='-'){(arr[b-1]--);}
        if(c=='-' && arr[b-1]==1)tct--;
        if(c=='-' && arr[b-1]==3)fct--;
        if(c=='-' && arr[b-1]==5)sct--;
        if(c=='-' && arr[b-1]==7)ect--;
        if(c=='+' && arr[b-1]==2)tct++;
        if(c=='+' && arr[b-1]==4)fct++;
        if(c=='+' && arr[b-1]==6)sct++;
        if(c=='+' && arr[b-1]==8)ect++;
    //for(int i=0;i<3;i++){cout<<arr[i]<<' ';}
    //cout<<endl;
   // cout<<tct<<' '<<fct<<' '<<sct<<' '<<ect<<' '<<endl;
    if(ect>=1 || (sct>=1 && tct>=2)|| (fct>=2) || (fct>=1 && tct>=3))cout<<"YES"<<endl;
    else{cout<<"NO"<<endl;}


    }
return 0;
}
