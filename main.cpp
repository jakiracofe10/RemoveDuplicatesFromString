#include <iostream>

using namespace std;

const int ASCII_VALUES = 256;

string removeDuplicates(string s) {
    int duplicate[ASCII_VALUES] = {0};
    string result;
    for (int i=0; i<s.length(); i++) {
        duplicate[s[i]]++;
        if (!(duplicate[s[i]] > 1)) {
            result.push_back(s[i]);                                               (s[i]);
        }
    }
    return result;

}

int main() {
    string s = "bananas";
    s = removeDuplicates(s);
    cout << s;
    return 0;
}