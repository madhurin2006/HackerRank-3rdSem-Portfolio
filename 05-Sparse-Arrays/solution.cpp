#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> freq;

    for (string s : stringList) {
        freq[s]++;
    }

    vector<int> result;

    for (string q : queries) {
        result.push_back(freq[q]);
    }

    return result;
}
