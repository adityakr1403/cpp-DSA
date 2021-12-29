#include <iostream>

using namespace std;

int knapsack(int wt[], int val[], int W, int n)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (wt[n - 1] <= W)
    {
        return max(val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1), knapsack(wt, val, W, n - 1));
    }
    else // if (wt[n - 1] > W)
    {
        return knapsack(wt, val, W, n - 1);
    }
}

int main()
{
    int wt[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int val[] = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    int W = 4;
    cout << "\n"
         << knapsack(wt, val, W, 10) << "\n"
         << endl;
}