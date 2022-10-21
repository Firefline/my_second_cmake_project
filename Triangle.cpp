#include "Figure.h"
#include "Triangle.h"

    bool Triangle::check()
    {
        if (sides_count == 3 && (A + B + C == 180))
        {
            return true;
        }
        else { return false; }
    }
    void Triangle::print_info()
    {
        Figure::print_info();
        std::cout << "�������: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
        std::cout << "����: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
        std::cout << std::endl;
    }