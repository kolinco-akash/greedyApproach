#include<iostream>
#include<vector>
using namespace std;
void print2DVector(const vector<vector<int>>& twoDVector) {
    int numRows = twoDVector.size();
    if (numRows == 0) {
        cout << "2D vector is empty." << endl;
        return;
    }

    int numCols = twoDVector[0].size(); // Assuming all rows have the same number of columns

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << twoDVector[i][j] << ' ';
        }
        cout << '\n';
    }
}

int coinsneed(vector<vector<int>>& table,int amount,int numofcoins){
    for (int i = 0; i < amount; ++i) {
        for (int j = 0; j < numofcoins; ++j) {
            cout << table[i][j] << ' ';
        }     
    }
    return 0;
}
int main(){
    int amount;
    int numofcoins;
    cin>>amount;
    cin>>numofcoins;
    vector< vector<int>> table(numofcoins,vector<int>(amount,0));
    print2DVector(table);
    coinsneed(table,amount,numofcoins);


}
