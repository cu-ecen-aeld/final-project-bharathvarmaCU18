#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QLabel>
#include <QFontDatabase> 

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    

    int id = QFontDatabase::addApplicationFont("/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont font(family);
    app.setFont(font);
    
    QWidget window;
    QVBoxLayout *layout = new QVBoxLayout(&window);
    
    QPushButton *btn1 = new QPushButton("Test Button 1");
    QPushButton *btn2 = new QPushButton("Test Button 2");
    QLabel *label = new QLabel("Qt Widgets Test");
    
    layout->addWidget(label);
    layout->addWidget(btn1);
    layout->addWidget(btn2);
    
    window.setLayout(layout);
    window.resize(400, 300);
    window.show();
    
    return app.exec();
}
