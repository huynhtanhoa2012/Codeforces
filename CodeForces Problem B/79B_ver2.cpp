#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n, m, k, t;
    cin >> n >> m >> k >> t;
    char field[n+1][m+1];
    
    // Step 1: add waste cells
    while(k--){
        int x, y;
        cin >> x >> y;
        field[x][y] = '-';
    }
    
    
    
    
}