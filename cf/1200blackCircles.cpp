#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
using LL = long long; 
const LL MOD = 1e9 + 7;
const int MAXN = 100005;
pair<LL, LL> values[MAXN]; 

LL dist(LL xi, LL yi, LL xf, LL yf) {
    return ((xf - xi) * (xf - xi) + (yf - yi) * (yf - yi));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen(".in", "r", stdin);
    // freopen(".out", "w", stdout);
    int q;
    cin >> q;
    string out = "";
    while (q--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> values[i].fi >> values[i].se;
        }

        if(values[i].second)
        pair<LL, LL> start, end;
        cin >> start.fi >> start.se >> end.fi >> end.se;

        long long cur = dist(start.fi, start.se, end.fi, end.se);
        string works = "Yes";
        for (int i = 0; i < n; i++) {
            long long dist1 = dist(end.fi, end.se, values[i].fi, values[i].se);
            if (dist1 <= cur) {
                works = "No";
                break;
            }
        }
        out += works;
        out += "\n";
    }   
    cout << out;
    return 0;
}