#pragma once
#include "atltypes.h"
class CLine :public CPoint
{
public:
	CPoint point1;//�߶����
	CPoint point2;//�߶��յ�

	CLine();
	~CLine();
	CLine(CPoint point1, CPoint point2);

	void SetEndPoint(CPoint point);//�����յ�
	void setLine(CPoint point1, CPoint point2);//�����߶�
	float getLength();//�����߶γ���
};

