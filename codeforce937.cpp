#include<iostream>
using namespace std;

int main(){
int t;  int a;int b;int c;
cin>>t;

while(t--){

    cin>>a>>b>>c;

    if(a<b && b<c){
        cout<<"STAIR"<<endl;
    }else if(a<b &&b>c){
    cout<<"PEAK"<<endl;
    }else{
     cout<<"NONE"<<endl;
    }
}
}
