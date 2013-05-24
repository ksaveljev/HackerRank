#include <iostream>
#include <string>
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
    int n;
    string input;
    pair<int,int> bot, princess;

    cin >> n;

    rep (row, n) {
        cin >> input;

        rep (i, sz(input)) {
            if (input[i] == 'm') {
                bot.first = row;
                bot.second = i;
            } else if (input[i] == 'p') {
                princess.first = row;
                princess.second = i;
            }
        }
    }

    int row_direction = princess.first > bot.first ? 1 : -1;
    int col_direction = princess.second > bot.second ? 1 : -1;

    while (bot.first != princess.first) {
        bot.first += row_direction;

        if (row_direction == 1) {
            cout << "DOWN" << endl;
        } else {
            cout << "UP" << endl;
        }
    }

    while (bot.second != princess.second) {
        bot.second += col_direction;

        if (col_direction == 1) {
            cout << "RIGHT" << endl;
        } else {
            cout << "LEFT" << endl;
        }
    }

    return 0;
}
