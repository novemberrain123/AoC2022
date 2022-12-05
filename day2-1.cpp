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
    //A, X = ROck
    //B, Y = Paper
    //C, Z = Scissor

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    char p1,p2;
    ll score = 0;
    while(cin >> p1){
        cin >> p2;
        switch (p2)
        {
        case 'X': 
            score += 1; 
            if(p1 == 'A') score += 3;
            else if(p1 == 'C') score += 6;
            break;
        case 'Y': 
            score += 2; 
            if(p1 == 'B') score += 3;
            else if(p1 == 'A') score += 6;
            break;
        case 'Z': 
            score += 3; 
            if(p1 == 'C') score += 3;
            else if(p1 == 'B') score += 6;
            break;
        }
    }
    cout << score;
}