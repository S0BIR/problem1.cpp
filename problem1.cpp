#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a>>b;
    if (a==1)
        cout <<"Bus";
    else if (a==0 && b==1)
        cout <<"Walk";
    else if (a==0 && b==0)
        cout <<"Bike";
    return 0;   }
