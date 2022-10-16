/**

Problem
  in chefland, a tennis game involves 444 referees. each referee has to point
out whether he considers the ball to be inside limits or outside limits. the
ball is considered to be in if and only if all the referees agree that it was
inside limits. given the decision of the 4 referees, help chef determine whether
the ball is considered inside limits or not.

Input format
  The first line of input will contain a single integer T, denoting the
  number of test cases. Each test case consists of a single line of input
  containing 4 integers R1,R2,R3,R4 denoting the decision of the respective
  referees.
  Here R can be either 0 or 1 where 0 would denote that the referee considered
  the ball to be inside limits whereas 1 denotes that they consider it to be
  outside limits.

Output Format
  For each test case, output IN if the ball is considered to be inside limits
  by all referees and OUT otherwise.
  The checker is case-insensitive so answers like in, In, and IN would be
  considered the same.

Constraints
    1 ≤ T ≤ 20
    0 ≤ R1, R2, R3, R4 ≤ 1
*/

#include <iostream>
using namespace std;

const int NUMBER_OF_JUDGES = 4;

int main(void) {
    int limit, i, j, sum = 0;
    cin >> limit;

    int a[limit][NUMBER_OF_JUDGES];

    for (i = 0; i < limit; i++)
        for (j = 0; j < NUMBER_OF_JUDGES; j++)
            cin >> a[i][j];

    for (i = 0; i < limit; i++) {
        for (j = 0; j < NUMBER_OF_JUDGES; j++)
            sum += a[i][j];
        if (sum == 0)
            cout << "IN" << endl;
        else
            cout << "OUT" << endl;
        sum = 0;
    }

    return 0;
}
