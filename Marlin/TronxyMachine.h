#pragma once
#define PROJ_X5SA600       49 //dulz,f446,chip2,U 600-600-600

#define UI_MARLIN_DEFAULT  0
#define UI_SIM480X320      2

#define TRONXY_PROJ        PROJ_X5SA600
#define TRONXY_UI          UI_SIM480X320 //0:Marlin or 2:SIM480x320

#define TRONXY_MACHINE_NAME       "X5SA600"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              0 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                1 //Z轴移动:热床
#define USE_EXTRUDER              2 //TITAN:1,BMG:2,TAOLI:3,general:4

