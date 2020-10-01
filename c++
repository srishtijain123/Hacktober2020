#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define endl            "\n"
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define sp(x,y)         fixed<<setprecision(y)<<x

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


/*void c_p_c()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}*/

int32_t main()
{   
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  //c_p_c();

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int ccount = 0, mcount = 0;
    for (int i = 1; i <= n; i++)
    {
      int a, b;
      cin >> a >> b;
      int csum = 0, msum = 0;

      while (a > 0)
      {
        int x = (a % 10);
        csum += x;
        a = a / 10;
      }

      while (b > 0)
      {
        int y = (b % 10);
        msum += y;
        b = b / 10;
      }

      //cout << csum << " " << msum << endl;
      if (csum > msum)
        ccount++;
      else if (csum < msum)
        mcount++;
      else
      {
        ccount++;
        mcount++;
      }

    }
    if (ccount > mcount)
      cout << "0" << " " << ccount << endl;
    else if (ccount < mcount)
      cout << "1" << " " << mcount << endl;
    else
      cout << "2" << " " << ccount << endl;
  }
  return 0;
}
