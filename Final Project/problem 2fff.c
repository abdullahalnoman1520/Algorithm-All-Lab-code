
#include<stdio.h>
#define MAX(x, y) x > y ? x : y
#define MIN(x, y) x < y ? x : y

int minimize_l(int start, int end, int L[][end]) {
    if ((start + 1) == end)    return L[start][end]; // adjacent trees
    if (start == end)    return 0; // nowhere to climb
    if (start > end)    return -1; // no downhill climb
    if (L[start][end] < 0)    return -1;

    for (int i = start + 1; i < end; i++)
        if (L[start][i] > 0)
            L[start][end] = MIN(L[start][end], MAX(minimize_l(start, i, L), minimize_l(i, end, L)));
    return L[start][end];
}

int main() {
    // Read input: number of trees and their coordinates and heights
    int num_trees;
    scanf("%d", &num_trees);
    int X[num_trees], H[num_trees];
    for (int i = 0; i < num_trees; i++)    scanf("%d %d", &X[i], &H[i]);
    // Calculate rope lengths for a direct climb from a to b
    int L[num_trees][num_trees];
    for (int a = 0; a < num_trees; a++)
        for (int b = 0; b < num_trees; b++)
            if (a == b) // matrix diagonal
                L[a][b] = 0;
            else {
                int dx = abs(X[b] - X[a]);
                int dh = abs(H[b] - H[a]);
                L[a][b] = dx > dh ? pow(dx, 2) + pow(dh, 2) : -1;
            }
    // Minimize rope length for a move between first and last trees
    printf("%d\n", minimize_l(0, num_trees - 1, L));
    return 0;
}
