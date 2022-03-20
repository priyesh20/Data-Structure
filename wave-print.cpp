#include<bits/stdc++.h>
using namespace std;
 
 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // starts from first row last column element
    // number of loops equsls number of columns
    // 4 , 4 
    vector<int> z = {};
    int k = 0;
    while (n-1 >= 0) {
        if (k == 0) {
            for (int i=0; i < m; i++) {
                z.push_back(arr[i][n-1]);
                k++;
            }
        } else {
            for (int i=m-1; i >= 0; i--) {
                z.push_back(arr[i][n-1]);
                k--;
            }
        }
        n--;
    }
    return z;
}