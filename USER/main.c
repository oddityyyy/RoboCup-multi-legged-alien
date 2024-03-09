#include "delay.h"
#include "uart.h"
#include "LobotServoController.h"
#include "bool.h"
#include "sys.h"

u8 Way_Angle=1;      //获取角度的算法，1：四元数  2：卡尔曼  3：互补滤波 （有的6050使用DMP时，需要开机后不停摇晃小车10S左右，等待数据稳定）
float Angle_Balance;

 int main(void)
 {
	int i,j;
 	SystemInit();//系统时钟等初始化
	delay_init(72);	     //延时初始化
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uartInit(9600);//串口初始化为9600
	IIC_Init();                     //模拟IIC初始化
	delay_ms(1000);
  MPU6050_initialize();           //=====MPU6050初始化
  DMP_Init();                     //初始化DMP 
	
	
 }

