#include "delay.h"
#include "uart.h"
#include "LobotServoController.h"
#include "bool.h"
#include "sys.h"

u8 Way_Angle=1;      //��ȡ�Ƕȵ��㷨��1����Ԫ��  2��������  3�������˲� ���е�6050ʹ��DMPʱ����Ҫ������ͣҡ��С��10S���ң��ȴ������ȶ���
float Angle_Balance;

 int main(void)
 {
	int i,j;
 	SystemInit();//ϵͳʱ�ӵȳ�ʼ��
	delay_init(72);	     //��ʱ��ʼ��
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uartInit(9600);//���ڳ�ʼ��Ϊ9600
	IIC_Init();                     //ģ��IIC��ʼ��
	delay_ms(1000);
  MPU6050_initialize();           //=====MPU6050��ʼ��
  DMP_Init();                     //��ʼ��DMP 
	
	
 }

