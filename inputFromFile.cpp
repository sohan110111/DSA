#include <stdio.h>
#include <iostream>

using namespace std;
int adj[100][100];
int main() {
    freopen("input.txt", "r", stdin); // for input from file
    int node, edge, row, col;
    scanf("%d%d", &node, &edge);
    while (edge--) {
        scanf("%d%d", &row, &col);
        adj[row][col] = 1;
        adj[col][row] = 1;
    }
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
// example input 1
/*
5 6
0 1
2 0
2 1
1 4
1 3
3 4
*/
// example output 1
/*
0 1 1 0 0
1 0 1 1 1
1 1 0 0 0
0 1 0 0 1
0 1 0 1 0
*/
// example input 2
/*
4 5
0 1
0 2
0 3
2 3
1 2
*/
// example output 2
/*
0 1 1 1
1 0 1 0
1 1 0 1
1 0 1 0
*/