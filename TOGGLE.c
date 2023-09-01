#include <stdio.h>

void toggle_light(int grid[3][3], int row, int col) {
    // Toggle the light and its adjacent lights
    grid[row][col] = 1 - grid[row][col];
    if (row - 1 >= 0) {
        grid[row - 1][col] = 1 - grid[row - 1][col];
    }
    if (row + 1 <= 2) {
        grid[row + 1][col] = 1 - grid[row + 1][col];
    }
    if (col - 1 >= 0) {
        grid[row][col - 1] = 1 - grid[row][col - 1];
    }
    if (col + 1 <= 2) {
        grid[row][col + 1] = 1 - grid[row][col + 1];
    }
}

void print_grid(int grid[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Read the input
    int grid[3][3];
    for (int i = 0; i < 3; i++) {
        for(int j=0;j<3;j++)
        {
            scanf("%d", &grid[i][j]);
        }
    }

    // Apply the toggles to the grid
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < grid[i][j] % 2; k++) {
                toggle_light(grid, i, j);
            }
        }
    }

    // Print the final state of the grid
    print_grid(grid);

    return 0;
}






