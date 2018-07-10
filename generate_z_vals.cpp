#include "generate_z_vals.h"

// int main() {
//     std::vector<double> list = list_of_z(0.01, 30);
    
//     for(auto x:list)
//         std::cout << x << '\n';

//     return 0;
// }

std::vector<double> list_of_z(double variance, double true_val, int num_of_z) {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::default_random_engine generator;
    std::normal_distribution<> d(0.0, variance);    // mean and variance

    std::vector<double> list;

    for(int n = 0; n < num_of_z; n++) {
        double num = d(gen) + true_val;
        list.push_back(num);
    }

    return list;
}