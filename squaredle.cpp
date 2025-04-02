#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    vector<vector<char>> answer(3, vector<char>(3));
    vector<vector<char>> guess(3, vector<char>(3));
    
    // Read the answer grid
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> answer[i][j];
        }
    }
    
    // Read the guess grid
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> guess[i][j];
        }
    }
    
    int directMatches = 0;
    unordered_map<char, int> answerCount, guessCount;
    
    // Count direct matches and letter frequencies
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (answer[i][j] == guess[i][j]) {
                directMatches++;
            } else {
                answerCount[answer[i][j]]++;
                guessCount[guess[i][j]]++;
            }
        }
    }
    
    // Count rearrangeable matches
    int rearrangeableMatches = 0;
    for (const auto& pair : guessCount) {
        rearrangeableMatches += min(pair.second, answerCount[pair.first]);
    }
    
    cout << directMatches << endl;
    cout << rearrangeableMatches << endl;
    
    return 0;
}
