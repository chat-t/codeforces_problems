#include<bits/stdc++.h>
using namespace std;
string solve(){
    int n,t,k,d; cin >> n >> t >> k >> d;
    int g = (n+k-1)/k;
    int o1 = 0,o2 = d;
    for(int i = 0;i<g;i++){
        if(o1 <= o2) o1 += t;
        else o2 += t;
    }
    if(max(o1,o2) < g*t) return "YES\n";
    return "NO\n";
}

int main(){
    ios::sync_with_stdio(NULL);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    // int t;
    // cin >> t;
    // while(t){
    //     solve();
    //     t--;
    // }
    cout << solve();
}
