#include<iostream>
using namespace std ;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=-0;i<n;i++){
            cin>>arr[i];
        }
        if(k>=2){cout<<"YES"<<endl;}
        else{bool flag=0;
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    flag=1;
                    cout<<"NO"<<endl;
                    break;
                }
                
            }
            if(flag==0){cout<<"YES"<<endl;}


        }
    }



return 0 ;
}