#include "customslider.h"

void CustomSlider::mousePressEvent(QMouseEvent *ev)
{
    QSlider::mousePressEvent(ev);
    double pos = ev->pos().x()/(double)width();
    setValue(pos*(maximum()-minimum())+minimum());
    //发送自定义的鼠标事件
    emit costomSliderClicked();
}

