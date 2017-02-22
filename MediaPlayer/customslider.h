#ifndef CUSTOMSLIDER_H
#define CUSTOMSLIDER_H
#include <QSlider>
#include <QMouseEvent>
#include <QCoreApplication>

class CustomSlider : public QSlider
{
Q_OBJECT
public:
    CustomSlider(QWidget *parent = 0):QSlider(parent){}

protected:
    //重写
    void mousePressEvent(QMouseEvent *ev);

signals:
    //自定义鼠标点击事件
    void costomSliderClicked();
};

#endif // CUSTOMSLIDER_H
