#include <QCoreApplication>
#include "httptest.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    HttpTest h;

    return a.exec();
}

