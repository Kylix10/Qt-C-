//进入游戏的第一个界面
//“开始游戏”选项
//“读档”选项  ps:先放着，涉及文件操作可能有点复杂


#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>

class Mainscene : public QWidget
{
    Q_OBJECT

public:
    Mainscene(QWidget *parent = nullptr);
    ~Mainscene();

    //初始化场景
    void initScene();
};
#endif // MAINSCENE_H
