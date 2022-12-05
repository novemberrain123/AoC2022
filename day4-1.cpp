#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define szs(array) (sizeof(array)/sizeof(array[0]))

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string n1;
    int score = 0;
    while(getline(cin, n1)){
        regex rgx("([0-9]+)");
        smatch match;
        vector<int> v;
        while(regex_search(n1, match, rgx)){
            v.push_back(stoi(match.str(1)));
            n1 = match.suffix();
        }

        if(v[2] == v[0] || v[1] == v[3]) score++;
        else if(v[2] > v[0]){
           if(v[1] > v[3]) score++;
        }else{
            if(v[3] > v[1]) score++;
        }
    }
    cout << score;
}