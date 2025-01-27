#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second

const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen(".in", "r", stdin);
    // freopen(".out", "w", stdout);

    int t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cout >> i*i + 1 >> " ";
        }
        cout >> "\n";
    }
}