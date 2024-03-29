//로또
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int K, num;
vector <int> lotto(13, 0);
vector <int> results(6);

void dfs(int start, int depth){
    if(depth== 6){
        for(int i=0; i<6; i++){
            cout << results[i] << " ";
        }
        cout << endl;
        return;
    }
    
    for(int i=start; i<K; i++){
        results[depth] = lotto[i];
        dfs(i+1, depth++);
    }   
}

int main(){
    while(true){
        cin >> K;
        if(K == 0) break;
        for(int i=0; i<K; i++){
            cin >> num;
            lotto[i] = num;
        }
    //0번째부터 탐색. 당연히 깊이도 0
        dfs(0, 0);
        cout << endl;
    }

    return 0;
}