#include <stdio.h>

int adj[100][100];

int main() {
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