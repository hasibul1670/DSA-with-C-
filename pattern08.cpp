#include <bits/stdc++.h>
using namespace std;
int main() {

#ifndef Online
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // Outer loop count number of lines
  // inner loop focus on colums,connect rows
  // print inner loop
  // ovserve symmetry
  //        *
  //      * * *
  //    * * * * *
  //  * * * * * * *
  // for space = j<n-i-1
  // for star = j<2*i+1

  for (int i = 0;i < 4;i++) {
    //space
    for (int j = 0;j <i;j++) {
      cout << " ";
    }
    //star
    for (int j = 0;j < 2*4-(2*i+1);j++) {
      cout << "*";
    }
    //space
    for (int j = 0;j < i;j++) {
      cout << " ";
    }

    cout << endl;
  }
}