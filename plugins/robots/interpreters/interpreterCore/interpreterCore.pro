TEMPLATE = lib
CONFIG += plugin
CONFIG += c++11

DESTDIR = ../../../../bin/plugins/

OBJECTS_DIR = .obj
MOC_DIR = .moc
RCC_DIR = .moc
UI_DIR = .ui

include(interpreterCore.pri)
