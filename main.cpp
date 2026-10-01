#include <iostream>
#include "MathLib/MathLib.h"
#include "StringLib/StringLib.h"
#include "ShapeLib/ShapeLib.h"

int main() {
    Calculator calc;
    std::cout << "3 + 4 = " << calc.add(3, 4) << std::endl;

    TextHelper text;
    std::cout << "Grossbuchstaben: " << text.toUpper("hallo welt") << std::endl;

    Circle circle(2.0);
    std::cout << "Kreisflaeche: " << circle.area() << std::endl;

    return 0;
}
