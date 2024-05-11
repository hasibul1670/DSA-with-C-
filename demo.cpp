#include <iostream>  
using namespace std;
int main() {
#ifndef Online
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
#endif

    int x;
    cin >> x;
    cout << "hi" << x << endl;

    return 0; // Ensure to return a value from main function
}
