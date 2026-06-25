#include<iostream>
using namespace std;
int main(){
    int a[5] = {1,2,3,4,5};
    for(int l=0; l<5; l++){
        cout<<a[l]<<" ";
    }
    cout<<endl;
    int swap;
    int s = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<s/2; i++){
        swap=a[i];
        a[i]=a[s-i-1];
        a[s-i-1]=swap;
    }
    for(int l=0; l<5; l++){
        cout<<a[l]<<" ";
    }
    cout<<endl;
    int temp;
    int k;
    cin>>k;
    int i=0;
    while(i<k){
        temp=a[0];
        for(int j=0; j<4; j++){
            a[j]=a[j+1];
        }
        a[4]=temp;
        i++;
    }
    for(int i=0; i<s/2; i++){
        a[i]=a[s-i-1];
    }
    for(int l=0; l<5; l++){
        cout<<a[l]<<" ";
    }
}