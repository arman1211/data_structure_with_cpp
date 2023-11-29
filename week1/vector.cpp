#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<int> v2(10,7);
    vector<int> v3(10,9);
    vector<int> v(v2);
    v2.insert(v.begin+2,v.begin+4,3);
   
    for(int s:v2) cout<<s<<" ";  
    return 0;
}