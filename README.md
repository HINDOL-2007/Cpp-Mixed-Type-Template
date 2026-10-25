# 🧬 C++ Mixed-Type Data Mapper

## 📖 About the Project
This project expands on generic programming by utilizing multiple template parameters (`T1`, `T2`). It simulates a key-value data structure, proving that a single class blueprint can simultaneously handle diverse data pairings like integer-string and string-float without requiring overloaded classes.

## ✨ Features
*   **Multi-Parameter Templates:** Implements `template <class T1, class T2>` to abstract multiple internal variables independently.
*   **Key-Value Mapping:** Dynamically binds heterogeneous data types together at runtime (e.g., mapping a numeric rank to a string name, or a string weapon to a float damage value).
*   **DRY Architecture:** Eliminates redundant data structure definitions while maintaining strict C++ type safety.
