SUMMARY = "Simple Qt5 Hello World Application for testing purpose"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

DEPENDS = "qtbase"

SRC_URI = "file://main.cpp \
           file://qt-hello-world.pro"

S = "${WORKDIR}"

inherit qmake5

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${B}/qt-hello-world ${D}${bindir}
}
