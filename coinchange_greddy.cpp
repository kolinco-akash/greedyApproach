#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int coin_change(vector<int> coins, int amount) {
  sort(coins.begin(), coins.end(), greater<int>());
  int n = 0;

  int remaining = amount;

  for (int coin : coins) {
    if (coin <= remaining) {
      n++;
      remaining -= coin;
    }
  }
  return n;
}

int main() {
  vector<int> coins;
  int numCoins;
  cout << "Enter the number of coin denominations: ";
  cin >> numCoins;

  cout << "Enter the coin denominations in descending order:" << endl;
  for (int i = 0; i < numCoins; i++) {
    int denomination;
    cin >> denomination;
    coins.push_back(denomination);
  }
  int amount;
  cout << "Enter the amount: ";
  cin >> amount;
  int n = coin_change(coins, amount);

  cout << "The minimum number of coins needed is: " << n << endl;

  return 0;
}

