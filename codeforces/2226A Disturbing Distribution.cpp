#include<iostream>
using namespace std;

int main(){
    int A[100];
    int n, t;
    cin >> t;
    while (t--){
        int total = 0;
        cin >> n;
        for (int i = 0; i< n ; i++) {
            cin >> A[i];
            if (A[i] > 1) {
                total+= A[i];
            }
        }
        if (A[n-1] == 1) {
            total ++;
        }
        cout << total << endl   ;
    }

}