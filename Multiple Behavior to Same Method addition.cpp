#include <iostream>
class Computation {
public:
    int compute(int a, int b) {
        return a + b;
    }
    float compute(int a, float b) {
        return a + b;
    }
    double compute(int a, double b) {
        return a + b;
    }
    int compute(char a, char b) {
        return static_cast<int>(a) + static_cast<int>(b);
    }
    int compute(char a, int b) {
        return static_cast<int>(a) + b;
    }
    int compute() {
        return 0; 
    }
};
int main() {
    Computation calculator;
    std::cout << calculator.compute(5, 3) << std::endl;          
    std::cout << calculator.compute(5, 3.5f) << std::endl;       
    std::cout << calculator.compute(5, 3.5) << std::endl;        
    std::cout << calculator.compute('a', 'b') << std::endl;      
    std::cout << calculator.compute('a', 3) << std::endl;        
    std::cout << calculator.compute() << std::endl;              
    return 0;
}
