#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhomb.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    Figure figure;
    Triangle triangle(10, 20, 30, 50, 60, 70);
    Right_triangle right_triangle(10, 20, 30, 50, 60);
    Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
    Equilateral_triangle equilateral_triangle(30);
    Quadrangle quadrangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rectangle rectangle(10, 20);
    Rhomb rhomb(30, 30, 40);

    figure.print_info();
    std::cout << std::endl;
    triangle.print_info();
    right_triangle.print_info();
    isosceles_triangle.print_info();
    equilateral_triangle.print_info();
    quadrangle.print_info();
    square.print_info();
    parallelogram.print_info();
    rectangle.print_info();
    rhomb.print_info();
}