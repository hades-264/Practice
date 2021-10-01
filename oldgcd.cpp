#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t-- ){
        int n;
        cin>>n;
        int arr[n];
        int c[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            c[i]=0;
        }
        int x=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0)
            {
                cout<<"0\n";
                x=1;
                break;
            }
         }

         if(x==0){
             for(int i=0;i<n;i++){
                     while(arr[i]%2==0){
                         arr[i]=arr[i]/2;
                         c[i]++;
                     }
             }

             sort(c,c+n);
             cout<<c[0]<<endl;
         }
        
    }
	// your code goes here
	return 0;
}