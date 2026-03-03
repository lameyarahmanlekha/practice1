
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    unordered_set<long long> distinctNumbers;

    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        distinctNumbers.insert(x);
    }

    cout << distinctNumbers.size() << endl;

    return 0;
}
