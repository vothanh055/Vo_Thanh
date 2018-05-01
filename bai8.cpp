#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
       string brand;
       double weight;
       int number;
};


int main() {
       CandyBar snack[3] = {
              { "A", 1.2, 100 },
              { "B", 2.3, 200 },
              { "C", 3.4, 300 }
       };

       cout << snack[0].brand << "\t" << snack[0].weight << "\t" << snack[0].number << endl
              << snack[1].brand << "\t" << snack[1].weight << "\t" << snack[1].number << endl
              << snack[2].brand << "\t" << snack[2].weight << "\t" << snack[2].number << endl;

       return 0;
}

