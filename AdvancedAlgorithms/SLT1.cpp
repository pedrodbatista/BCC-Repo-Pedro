#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n, m, pos, aux;
    cin >> n;
    pair<int, int> node;

    while(n--){

        cin >> m >> pos;

        priority_queue<pair<int, int>> pq;

        for(int i = m ; i > 0 ; i--){
            cin >> aux;
            node.first = aux;
            node.second = i;
            pq.push(node);
        }
        
        // while(!pq.empty()){
        //     cout << pq.top().first << ' ' << pq.top().second << " | ";
        //     pq.pop();
        // }
        // cout << m - pos;

                
        int count = 1;
        while(!pq.empty()){
            if(pq.top().second == m - pos){
                // cout << pq.top().first << ' ' << pq.top().second << ' ' << pos << " | ";
                cout << count;
                while(!pq.empty()){
                    pq.pop();
                }
                break;
            }
            count++;
            pq.pop();
        }
        cout << '\n';
    }

    return 0;
}