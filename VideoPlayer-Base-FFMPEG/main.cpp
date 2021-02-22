#include "mywidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //有且只有一个应用程序类的对象
    QApplication a(argc, argv);

    //MyWidget继承于QWidget，QWidget是一个窗口基类
    //所以MyWidget也是窗口类
    //w就是一个窗口
    MyWidget w;

    //窗口创建默认是隐藏的，需要人为显示
    w.show();

    //a.exec()：让程序一直执行等待用户操作
    return a.exec();
}
