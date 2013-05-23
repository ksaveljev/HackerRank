#include <iostream>
#include <algorithm>
using namespace std;

#define pow2(i) (1<<i)
#define bit(i) (1<<i)
#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define sz(i) i.size()
#define REP(i, b, n) for (int i = b; i < n; i++)
#define REPI(i, b, n) for (int i = b; i <= n; i++)
#define rep(i, n) REP(i, 0, n)
#define repi(i, n) REPI(i, 0, n)

int nums[100000];

int main(void) {
    int n, k;
    int result = 0;

    cin >> n >> k;

    rep (i, n) {
        cin >> nums[i];
    }

    sort (nums, nums + n, greater<int>());

    rep (i, n) {
        REP (j, i + 1, n) {
            if (nums[i] - nums[j] == k) result++;

            if (nums[i] - nums[j] > k)
                break;
        }
    }

    cout << result << endl;

    return 0;
}
