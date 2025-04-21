#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel label("<center>Hello World from Qt5 on Jetson Nano!</center>");
    label.resize(400, 150);
    label.show();
    return app.exec();
}
