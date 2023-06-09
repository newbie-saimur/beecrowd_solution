#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
 
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vs vector<string>
#define pb push_back
#define pf push_front
 
#define pii pair<int, int>
#define vip vector<pair<int, int>>
#define m_p make_pair
#define mii map<int, int>
#define umap unordered_map
#define si set<int>
#define uset unordered_set
 
#define ff first
#define ss second
#define in insert
#define ub upper_bound
#define lb lower_bound
 
#define all(v) v.begin(), v.end()
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.rbegin(), v.rend())
 
#define ign cin.ignore()
#define getln(s) getline(cin, s)
#define fli(n) for (int i = 0; i < n; i++)
#define rfli(n) for (int i = n - 1; i >= 0; i--)
#define flj(n) for (int j = 0; j < n; j++)
 
#define eps (double)(1e-7)
#define pi (double)(acos(-1))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / __gcd(a, b)
#define mod (ll)(1e9 + 7)
 
#define case cout << "Case " << k << ": "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
int k;
 
/*= = = = = = = = = = = = = = = = = = = = = = = = = = = =
 
                    Code Start From Here
 
= = = = = = = = = = = = = = = = = = = = = = = = = = = = */
 
void solve()
{
    int n;
    while (cin >> n && n)
    {
        long long int arr[n][n];
        // assigning values in array
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                arr[i][j] = pow(2, i + j);
        }
        // Digit Count of max number
        long long digit = 0, temp = arr[n - 1][n - 1];
        while (temp != 0)
        {
            digit++;
            temp /= 10;
        }
        // printing the array
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(j==n-1)
                cout << right << setw(digit) << arr[i][j];
                else
                cout << right << setw(digit) << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    ll test = 1;
    // cin>>test;
    for (k = 1; k <= test; k++)
    {
        solve();
    }
    return 0;
}
