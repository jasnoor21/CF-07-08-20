#include <iostream>
using namespace std;

int main(){
int t,n,a,b,c;
cin>>t;
while(t--){
cin>>n;
int arr[n];
for(int i=0;i<n;i++){arr[i]=0;}
for(int i=0;i<n;i++){
    cin>>a;
    arr[a-1]++;
}
int m=arr[0];int nmax=1;
for(int i=1;i<n;i++){
    if(arr[i]>m){m=arr[i];nmax=1;}
    else if(arr[i]==m){nmax++;}
}
b=n-(m*nmax);
if(b==0)cout<<(nmax-1)<<endl;
//else if(nmax==1)cout<<(n-2)<<endl;
else{
    cout<<(nmax-1)+(b/(m-1))<<endl;
}
}
return 0;
}
