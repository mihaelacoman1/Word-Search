#include <iostream>
#include <vector>
#include <string>
using namespace std;

//cautam cuvântul
bool searchWord(const std::vector<std::string>& grid, const std::string& word) {
    int rows = grid.size();
    int cols = grid[0].size();
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            // dacă prima literă a cuvântului se potrivește cu celula curentă, încercăm să găsim cuvântul
            if (grid[i][j] == word[0]) {
                for (int dirRow = -1; dirRow <= 1; ++dirRow) {
                    for (int dirCol = -1; dirCol <= 1; ++dirCol) {
                        if (dirRow == 0 && dirCol == 0) continue;  // sărim peste direcția curentă

                        int r = i, c = j, idx = 0;

                        //  verificăm cuvântul dacă se potrivește cu matricea în direcția curentă
                        while (r >= 0 && r < rows && c >= 0 && c < cols && idx < word.size() && grid[r][c] == word[idx]) {
                            r += dirRow;
                            c += dirCol;
                            ++idx;
                        }

                        // dacă am găsit cuvântul complet, returnăm true
                        if (idx == word.size()) {
                            return true;
                        }
                    }
                }
            }
        }
    }

    // dacă nu am găsit cuvântul în matrice, returnăm false
    return false;
}

int main() {
    // Matricea
    std::vector<std::string> grid = {
        "ABCE",
        "SFCS",
        "ADEE"
    };

    // cuvântul de căutat
    std::string word = "ABCCED";

    // verificăm dacă cuvântul este în matrice
    bool found = searchWord(grid, word);

    // afișăm rezultatul căutării
    if (found) {
        std::cout << "The word \"" << word << "\" is found in the grid." << std::endl;
    } else {
        std::cout << "The word \"" << word << "\" is not found in the grid." << std::endl;
    }

    return 0;
}
