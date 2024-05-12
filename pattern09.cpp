
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
  // *
  // * * 
  // * * * *
  // * * * * * 
  // * * * *
  // * * *
  // * *
  // *
  for (int i = 1;i <= 2 * 4 - 1;i++) {
    int star = i;
      if (i > 4) star = 2 * 4 - i;
        for (int j = 1;j <= star;j++) {
          cout << "*";
        }

    cout << endl;
  }
}