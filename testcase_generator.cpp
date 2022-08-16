#include <bits/stdc++.h>
using namespace std;
int main() {
    int MAX=1000;
    srand(time(NULL));
    int t=rand() % MAX;
    cout<<t<<"\n";
    for(int i=0;i<t;i++){
        string A="";
        int len=rand()%100;
        for(int i=0;i<len;i++){
            int x=rand()%2;
            A+=to_string(x);
        }
        string B="";
        int f=0;
        for(int i=len-1;i>=0;i--){
            if(f==0&&A[i]=='1'){
                f=1;
                B+="0";
            }
            else if(f==1){
                B+="1";
            }
            else B+="0";
        }
        cout<<A<<"\n"<<B;
    }
   
}
