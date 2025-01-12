//Blobby Volley Scores (C++ Code):

#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        string scr;
        cin >> scr;
        
        int a = 0, b = 0;
        
        if (scr[0] == 'A') {
            a++;
        }
        
        for (int i = 0; i < n - 1; i++) {
            if (scr[i] == 'A' && scr[i + 1] == 'A') {
                a++;
            } else if (scr[i] == 'B' && scr[i + 1] == 'B') {
                b++;
            }
        }   
        cout << a << " " << b << endl;
    }    
    return 0;
}
