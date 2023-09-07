#include <bits/stdc++.h>
using namespace std;

int main(){

    map<string, set<string>> mCompany;
    map<string, set<string>> mStudent;

    string s, company;

    while(getline(cin,s) && s!="0"){
        if(s.back() == '\r')s.pop_back();
        if(s=="1"){
            break;
        }
        else if(s[0]>='A' && s[0]<='Z'){
            company = s;        
        }
        else{
            mCompany[company].insert(s);
            mStudent[s].insert(company);

            if(mStudent[s].size() > 1){
                for(auto it = mStudent[s].begin();
                    it != mStudent[s].end();
                    it++){
                        // cour << it;
                        mCompany[*it].erase(s);
                }
            }
        }
    }
    vector<pair<int, string>> listass;
    int i = 0;
    for(auto it = mCompany.begin(); it != mCompany.end(); it++){
        
        listass[i].second = it->first;
        listass[i].first = it->second.size();
        
        int num = it->second.size();
        string st= it->first;
        


        i++;
        cout << num << ' ' << st << '\n';
    }
    sort(list.begin(), list.end());
    for(long unsigned int i = 0 ; i < list.size() ; i++){
        cout << list[i].first << ' ' << list[i].second << '\n';
    }

    return 0;
}