
#include <iostream>
#include<string.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int n = s.size();
    int i = n/2;
    string temp = "";
    for (int j=i; j<n; j++) {
        temp += s[j];
        printf("%*s\n", n, temp.c_str());
    }
    for (int j=0; j<i; j++) {
        temp += s[j];
        printf("%*s\n", n, temp.c_str());
    }
}