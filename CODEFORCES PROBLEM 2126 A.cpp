// link to the problem : https://codeforces.com/problemset/problem/2126/A




#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t){
        string x;
        cin >> x;
        int n = x.size();
        int array[n];
        for(int i = 0;i<n;i++){
            array[i] = x[i] - '0';
        }
        int minArray = *min_element(array,array+n);
        cout << minArray << endl;
        t--;
    }
}
