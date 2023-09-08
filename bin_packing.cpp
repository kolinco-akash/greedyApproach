#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimalBins(vector<int>& items, int l) {
    sort(items.begin(), items.end(), greater<int>());
    int left = 0;
    int right = items.size() - 1;
    int bins = 0;

    while (left <= right) {
        if (items[left] + items[right] <= l) {
            left++;
            right--;
        } else {
            left++;
        }
        bins++;
    }

    return bins;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, l;
        cin >> n >> l;
        vector<int> items(n);

        for (int j = 0; j < n; j++) {
            cin >> items[j];
        }

        int bins = minimalBins(items, l);
        cout << bins << endl;

        if (i < t - 1) {
            cout << endl; 
        }
    }

    return 0;
}
