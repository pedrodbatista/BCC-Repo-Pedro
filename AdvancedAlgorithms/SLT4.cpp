#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[20];

    /*
    Min Heap onde o primeiro valor do pair de fora representa o tempo que
    o no sera impresso, logo ficara no topo da lista
    */ 
    priority_queue< pair<int, pair<int, int>>,
                    vector<pair<int, pair<int, int>>>,
                    greater<pair<int, pair<int, int>>>> pq;

                    
    int id, time;
    while(scanf("%s", s), strcmp(s, "#")){
        scanf("%d %d\n", &id, &time);
        pq.push({time, {id, time}});
    }

    int n;
    scanf("%d\n", &n);

    /*
    O pair abaixo serve para substituir o pair que sair no pop, sendo inserido
    na min heap com o tempo igual ao anterior mais somado o tempo de cooldown
    */
    pair<int, pair<int, int>> newNode, mem; 
    while(n--){
        mem = pq.top();
        pq.pop();
        newNode.first = mem.first + mem.second.second;
        newNode.second = mem.second;
        pq.push(newNode);
        cout << mem.second.first << '\n';
    }

    return 0;
}