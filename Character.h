//加载人物，人物行走图片切换
//人物走动坐标范围设置
#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
public:
    Character();

    //设置人物位置
    void setPosition(int x,int y);


public:
    //人物坐标
    int m_x;
    int m_y;
};

#endif // CHARACTER_H
