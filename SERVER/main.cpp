#include <QCoreApplication>
#include "polynom.h"
#include <sstream>

int main(int argc, char *argv[])
{
    Polynom<TComplex> *poly = new Polynom<TComplex>(3);
    std::stringstream test;
    test << "1-1i 5+8i 6-2i 3";
    test >> *poly;
    poly->set_display_format(1);
    std::cout << *poly;
    //QCoreApplication a(argc, argv);
    //Server server(argc, argv);
    //return a.exec();


}
