#include <iostream>
// Add or Include the headers (.h) and also Add or Include the implementation files directly (.cpp)

using namespace std;

int main() {
    std::cout << "=== Utility Program ===\n";

    // Calculator
    std::cout << "\nCalculator: 74 * 6 = " << multiply(74, 6) << "\n";

    // Temperature
    std::cout << "Temperature: 0°C = " << celsiusToFahrenheit(0) << "°F\n";

    // Conversion
    std::cout << "Distance: 10 km = " << kmToMeters(10) << " meters\n";

    return 0;
}
