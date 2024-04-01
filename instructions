#include <iostream>
#include <vector>
#include <string>

// Function to search for the word in the grid
bool searchWord(const std::vector<std::string>& grid, const std::string& word) 
        {
    int rows = grid.size();
    int cols = grid[0].size();

    // Iterate through each cell in the grid
    for (int i = 0; i < rows; ++i)
                {
        for (int j = 0; j < cols; ++j)
                {
            // If the first letter of the word matches the current cell, attempt to find the word
            if (grid[i][j] == word[0]) 
                {
                // Iterate through all 8 possible directions
                for (int dirRow = -1; dirRow <= 1; ++dirRow)
                    {
                    for (int dirCol = -1; dirCol <= 1; ++dirCol) 
                        {
                        if (dirRow == 0 && dirCol == 0) continue;  

                        int r, c, idx=0;
                            r=i;
                            c=j;

                        // Traverse the word and check if it matches the grid in the current direction
                        while (r >= 0 && r < rows && c >= 0 && c < cols && idx < word.size() && grid[r][c] == word[idx]) 
                        {
                            r += dirRow;
                            c += dirCol;
                            ++idx;
                        }

                        // If we found the complete word, return true
                        if (idx == word.size()) 
                        {
                            return true;
                        }
                    }
                }
            }
        }
 
