/*********************************************
������ƣ����·�  2008-11-20
http://lmf.biaotian.com
E-mail: lmf@biaotian.com
QQ: 16324942 [ģ��Ӣ��]
*********************************************/

#include "PipeTop.h"
#include "ImgData.h"
#include "Game.h"

CPipeTop::CPipeTop(CGame * Game,int x, int y):CObject(Game,2,x,y,32,16,0)
{
}

const int * CPipeTop::GetImage(bool * HInv,bool * VInv)
{
	*VInv=false;
	*HInv=false;
	return PipeTopImage;
}
