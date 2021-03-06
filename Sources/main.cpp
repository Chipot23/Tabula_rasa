/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Tabula Rasa : Editeur d'algorithme selon les spécifications de l'IUT
 *                  de Bayonne
 *
 *        Version:  1.0
 *        Created:  15/08/2011 02:17:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Erebe (), erebe@erebe.eu
 *        Company:  Erebe corporation
 *
 * =====================================================================================
 */
#include <QApplication>
#include <QTextCodec>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include "mainwindow.hpp"

int main( int argc, char* argv[] )
{/*{{{*/
     QApplication a( argc, argv );

     MainWindow w;
     w.showMaximized();
     return a.exec();

}/*}}}*/
