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
    int a;
    cin >> a;
    int s = 0;
    for(int i = 0; i < 10; i++){
        s += (i + 1);
    }
    cout << s;
}