#include <QCoreApplication>
#include <imagen.h>
#include <administradorArchivos.h>
#include <archivoPNM.h>
#include <graficador.h>
#include <interfaz.h>
#include <sistema.h>
#include <LUT.h>
#include "deteccion.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Sistema sis;

    int retorno;
    while(true)
    {
        system("CLS");
        sis.ejecutar();
        retorno= a.exec();

    }



    return retorno;
}
