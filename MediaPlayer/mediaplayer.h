#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include <QMainWindow>
#include "customslider.h"

namespace Ui {
class MediaPlayer;
}

class MediaPlayer : public QMainWindow
{
    Q_OBJECT

public:
    explicit MediaPlayer(QWidget *parent = 0);
    ~MediaPlayer();

private slots:
    void on_pushButton_Volume_clicked();

    void on_pushButton_Open_clicked();

    void on_pushButton_Player_clicked();


    //自定义槽函数
    void horizontalSlider_clicked();

    void horizontalSlider_moved();

    void horizontalSlider_released();

    void slider_Volume_Changed();

    void onTimerOut();

private:
    Ui::MediaPlayer *ui;
    CustomSlider *slider_Volume;
};

#endif // MEDIAPLAYER_H
