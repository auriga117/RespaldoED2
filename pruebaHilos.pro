#-------------------------------------------------
#
# Project created by QtCreator 2018-04-28T12:04:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pruebaHilos
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mainwindowlogic.cpp \
    prueba.cpp \
    ColaDeAtencion.cpp \
    NodoDAtencion.cpp

HEADERS  += mainwindow.h \
    mainwindowlogic.h \
    prueba.h \
    RespaldoED2/estudiante.h \
    stringParser.h \
    arbolbprofesores.h \
    arbolbbcarreras.h \
    arbolavlcursos.h \
    nodeavl.h \
    nododebst.h \
    ArbolAA.h \
    Estudiantestree.h \
    grupo.h \
    ProfesoresTree.h \
    ArbolGrupos.h \
    mostradorJonathan.h \
    ColaDeAtencion.h \
    NodoDAtencion.h

FORMS    += mainwindow.ui
