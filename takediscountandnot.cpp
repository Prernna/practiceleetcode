#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int totalpricewithoutcoupon = 0;
        for(int i = 0; i < n; i++) {
            totalpricewithoutcoupon += a[i];
        }
        
        int totalpricewithcoupon = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] < y) {
                totalpricewithcoupon += a[i];
            }
        }
        
        if(totalpricewithcoupon < totalpricewithoutcoupon) {
            cout << "Coupon" << endl;
        }
        else {
            cout << "No coupon" << endl;
        }
    }
    return 0;
}
