# Word Search Puzzle 🧩

A simple **C++ console project** that searches for a given word inside a character grid.  
The program checks all **8 possible directions** (horizontal, vertical, diagonal) to determine if the word exists.

---

## 📌 Features
- Word search inside a grid of characters
- Supports all 8 directions:
  - Left → Right
  - Right → Left
  - Top → Bottom
  - Bottom → Top
  - Diagonal directions 
- Two source files included:
  - **Word Search.cpp** → main implementation
  - **instructions.cpp** → commented/explained version

---

## 🛠️ Technologies Used
- **C++17+**
- **Ubuntu (g++) compiler**
- **VS Code** (or any IDE)

---

## ▶️ How to Compile & Run

Open a terminal in Ubuntu and run the following commands:

```bash
# 1. Clone the repository
git clone https://github.com/mihaelacoman1/Word-Search.git
cd Word-Search

# 2. Compile the main program
g++ "Word Search.cpp" -o wordsearch

# 3. Run the program
./wordsearch
