// Написать steak на динамической структуре со следующими функциями: 
// 1. добавить и удалить вершину
// 2. распечатать содержимое
// 3. посчитать количество вершин 
// 4. найти вершину с конкретным значением

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class STEAK {
public:
    vector<int> Steak;
    int S_size{};
bool SE() const {
    if (Steak.empty()) return false;                                 // проверка пустоты
    return true;
}

void Push(int number) {
    Steak.push_back(number);                                        // добавление
    S_size = Steak.size();
}

void Pop() {
    if (this->SE()) S_size--;                                       // убирание
}

void Write() {                                                      // выписать весь стек
    for (auto i : Steak) cout << i << " ";
}

int Search(int node) {
    for (auto i : Steak) if (i == node) return i + 1;               // нахождение элемента
    return -1;
}

int Size() const {                                                  // размер стека
    return S_size;
}
};

int main()
{
    return 0;
}
