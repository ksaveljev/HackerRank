#include <iostream>
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

int main(void) {
    int s;
    int nums[1000];

    cin >> s;

    rep (i, s) {
        cin >> nums[i];
    }

    int index = s - 1;
    int value = nums[index];

    while (index > 0 && nums[index-1] > value) {
        nums[index] = nums[index-1];

        rep (i, s) {
            if (i > 0) cout << " ";
            cout << nums[i];
        }
        cout << endl;

        index--;
    }

    nums[index] = value;

    rep (i, s) {
        if (i > 0) cout << " ";
        cout << nums[i];
    }
    cout << endl;

    return 0;
}
