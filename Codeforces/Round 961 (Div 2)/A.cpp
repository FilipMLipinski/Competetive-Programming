#include <string>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

int solve(int n, int k) {
    int count = 0;
    int d = n;
    if(k==0) return 0;
    if(k<=n) return 1;
    k-=(n);
    count++;
    d = n-1;
    while(k>0){
        k-=d;
        count++;
        if(k<=0) return count;
        k-=d;
        count++;
        d-=1;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        cout << solve(n, k)<< endl;        
    }
    return 0;
}