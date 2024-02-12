#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define ln cout << "\n"
#define pb push_back
#define ppb pop_back
#define vi vector<long long>
#define vvi vector<vector<long long>>
#define pi pair<long long, long long>
#define vpi vector<pair<long long, long long>>
#define vpsi vector<pair<string, long long>>
#define acc(x, sum) accumulate(x.begin(), x.end(), sum)
#define ac(x, n, sum) accumulate(x, x + n, sum)
#define rep(i, a, n) for (int i = a; i < n; i++)
#define f(i, x) for (auto &i : x)
#define mi map<long long, long long>
#define unmap unordered_map<long long, long long>
#define si set<long long>
#define ml multiset<long long>
#define unset unordered_set<long long>
#define yes cout << "YES"
#define no cout << "NO"
#define all(x) (x).begin(), (x).end()
#define inc(x) sort(x.begin(), x.end())
#define rev(x) sort(x.begin(), x.end(), greater<int>())
#define inc1(x, n) sort(x, x + n)
#define rev1(x, n) sort(x, x + n, greater<int>())
#define google cout << "Case #" << i << ": "
#define sf(x) scanf("%lld", &x)
#define read(x, n)              \
    for (int i = 0; i < n; i++) \
    cin >> x[i]
#define print(x, n)             \
    for (int i = 0; i < n; i++) \
    cout << x[i] << " "
#define ff first
#define ss second
#define bk break
typedef long long ll;

void code()
{
    int n;
    cin >> n;

    if (n !=1 and n < 4)
    {
        cout << "NO SOLUTION";
        return;
    }

    for (int i = 1; i <= n / 2; i++)
    {
        cout << i + n / 2 << " " << i << " ";
    }

    if (n & 1)
    {
        cout << n;
    }
}

int main()
{
    fastio();

    code();

    return 0;
}