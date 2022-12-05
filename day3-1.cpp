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

    // Lowercase item types a through z have priorities 1 through 26.
    // Uppercase item types A through Z have priorities 27 through 52.

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string n;
    map<char,int> prios;
    char start = 'a';
    for (int i = 1; i < 27; i++)
    {
        prios[start] = i;
        start += 1;
    }
    start = 'A';
    for (int i = 27; i < 53; i++)
    {
        prios[start] = i;
        start += 1;
    }
    ll total = 0;
    while(getline(cin, n)){
        string one, two;
        one = n.substr(0, n.length()/2);
        two = n.substr(n.length()/2);
        for(auto c: one) {
            if(two.find(c) != string::npos){
                total += prios[c];
                break;
            }
        }
        
    }
    cout << total;
}
