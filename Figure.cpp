#include "Figure.h"
    std::string Figure::get_name()
    {
        return name;
    }
    int Figure::get_sides_count()
    {
        return sides_count;
    }
    int Figure::get_a()
    {
        return a;
    }
    int Figure::get_b()
    {
        return b;
    }
    int Figure::get_c()
    {
        return c;
    }
    int Figure::get_d()
    {
        return d;
    }
    int Figure::get_A()
    {
        return A;
    }
    int Figure::get_B()
    {
        return B;
    }
    int Figure::get_C()
    {
        return C;
    }
    int Figure::get_D()
    {
        return D;
    }
    bool Figure::check()
    {
        if (sides_count == 0)
        {
            return true;
        }
        else { return false; }
    }
    void Figure::print_info()
    {
        std::cout << get_name() << ": " << std::endl;
        if (check() == true)
        {
            std::cout << "����������" << std::endl;
        }
        else {
            std::cout << "������������" << std::endl;
        }
        std::cout << "���������� ������: " << get_sides_count() << std::endl;
    }