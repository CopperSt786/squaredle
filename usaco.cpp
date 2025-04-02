#include <bits/stdc++.h>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    vector<vector<int>> data(K, vector<int>(N));
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N; j++) {
            int rank;
            cin >> rank;
            data[i][j] = rank;
        }
    }

    int result = 0;
    for (int cow1 = 0; cow1 < N; cow1++) {
        for (int cow2 = 0; cow2 < N; cow2++) {
            if (cow1 != cow2) {
                int count = 0;
                for (int i = 0; i < K; i++) {
                    int index_cow1 = find(data[i].begin(), data[i].end(), cow1 + 1) - data[i].begin();
                    int index_cow2 = find(data[i].begin(), data[i].end(), cow2 + 1) - data[i].begin();
                    if (index_cow1 < index_cow2) {
                        count++;
                    }
                }
                if (count == K) {
                    result++;
                }
            }
        }
    }

    cout << result << endl;
    return 0;
}