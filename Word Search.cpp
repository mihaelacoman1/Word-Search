#include <iostream>
#include <vector>
#include <string>

// Funcția pentru căutarea cuvântului în matrice
bool searchWord(const std::vector<std::string>& grid, const std::string& word) {
    int rows = grid.size();
    int cols = grid[0].size();

    // Iterăm prin fiecare celulă din matrice
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            // Dacă prima literă a cuvântului se potrivește cu celula curentă, încercăm să găsim cuvântul
            if (grid[i][j] == word[0]) {
                // Iterăm pe toate cele 8 direcții posibile
                for (int dirRow = -1; dirRow <= 1; ++dirRow) {
                    for (int dirCol = -1; dirCol <= 1; ++dirCol) {
                        if (dirRow == 0 && dirCol == 0) continue;  // Sărim peste direcția curentă

                        int r = i, c = j, idx = 0;

                        // Parcurgem cuvântul și verificăm dacă se potrivește cu matricea în direcția curentă
                        while (r >= 0 && r < rows && c >= 0 && c < cols && idx < word.size() && grid[r][c] == word[idx]) {
                            r += dirRow;
                            c += dirCol;
                            ++idx;
                        }

                        // Dacă am găsit cuvântul complet, returnăm true
                        if (idx == word.size()) {
                            return true;
                        }
                    }
                }
            }
        }
    }

    // Dacă nu am găsit cuvântul în matrice, returnăm false
    return false;
}

int main() {
    // Matricea
    std::vector<std::string> grid = {
        "ABCE",
        "SFCS",
        "ADEE"
    };

    // Cuvântul de căutat
    std::string word = "ABCCED";

    // Verificăm dacă cuvântul este prezent în matrice
    bool found = searchWord(grid, word);

    // Afișăm rezultatul căutării
    if (found) {
        std::cout << "The word \"" << word << "\" is found in the grid." << std::endl;
    } else {
        std::cout << "The word \"" << word << "\" is not found in the grid." << std::endl;
    }

    return 0;
}
