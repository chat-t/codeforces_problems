/*
link to the problem:https://codeforces.com/problemset/problem/1999/B
just incase i put the wrong name.
using this as a way to save my solutions.
*/






#include <bits/stdc++.h>
using namespace std;
void problem(){
    int sa[2],sl[2], gamesWon = 0;
    cin >> sa[0] >> sa[1] >> sl[0] >> sl[1];
    int a1 = sa[0], a2 = sa[1], b1 = sl[0] , b2 = sl[1];
    vector<pair<int,int>> a = {{a1,a2} , {a2,a1}};
    vector<pair<int,int>> b = {{b1,b2} , {b2,b1}};
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            int totalWon = (a[i].first > b[j].first)+(a[i].second > b[j].second);
            int totalLoss = (a[i].first < b[j].first)+(a[i].second < b[j].second);
            if(totalWon > totalLoss) gamesWon++;
        }
    }
    cout << gamesWon << endl;
}

int main(){
    int t;
    cin >> t;
    while(t){
        problem();
        t--;
    }
    return 0;
}