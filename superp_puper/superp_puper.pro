TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp


LIBS += -lboost_system
LIBS += -L/home/apletea/work/download_source/served/lib/ -lserved
