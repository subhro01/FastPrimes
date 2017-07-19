#include<bits/stdc++.h>

using namespace std;

const int N=1000000;

bool isp[N+5];

void sieve(){
    memset(isp,1,sizeof(isp));
    isp[0] = isp[1] = 0;

    for(int i = 4; i<=N; i+=2) isp[i] = 0;
    for(int i = 3; i*i<=N; i+=2)
        if(isp[i])
            for(int j = i + i; j<=N; j+=i) isp[j]=0;

}

int main(){

    ios::syn_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(int i = 2;i<=1000; i++){
        if(isp[i])
            cout<<i<<" ";
    }


}
