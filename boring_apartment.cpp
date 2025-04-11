#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string x;
    vector<string> pattern = {
        "1", "11", "111", "1111",
        "2", "22", "222", "2222",
        "3", "33", "333", "3333",
        "4", "44", "444", "4444",
        "5", "55", "555", "5555",
        "6", "66", "666", "6666",
        "7", "77", "777", "7777",
        "8", "88", "888", "8888",
        "9", "99", "999", "9999"
    }; 
    getline(cin, x);

    bool found = false;
    int index = -1;
    for (int i = 0; i < pattern.size(); i++) {
        if (pattern[i] == x) {
            found = true;
            index = i;
            break;
        }
    }

    int sum=0;
    
    if (found) {
        
        for (int i = 0; i <= index; i++) {
            sum += pattern[i].length();

        }
} 

    cout<<sum<<endl;


    }
}