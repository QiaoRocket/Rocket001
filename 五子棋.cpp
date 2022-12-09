#include <stdio.h>
#include <windows.h> 

int main()
{
	int qipan[15][15];//棋盘 15*15
	//制表格需要的字符:┌ ┬ ┐├ ┼ ┤└ ┴ ┘│─●○
	int i,j;//表示坐标 
	//数组的值0表示黑棋，1表示白棋，2表示该位置没有棋
	int color=0;
	
	for(i=0;i<15;i++)
		{
			for(j=0;j<15;j++)
			{
				qipan[i][j]=2;
			}
		}

	while(1)
	{
		
		printf("请输入棋子位置（棋盘大小为15*15),如2,2: ");
        scanf("%d,%d", &i,&j);//输入位置
		if(i<1 || i >20 || j<1 || j>20)
        {
            printf("输入的位置超出了棋盘的范围，请重新输入！\n");
            continue;
        }
        if((qipan[i-1][j-1]!=2))
        {
            printf("提示：该位置已经有棋子了!\n");
            continue;
        } 
        color=(color+1)%2;
        qipan[i-1][j-1]=color;
        
        
        
        for(i=1;i<=15;i++)
        {
            //第一行
            if(i==1)
            {
                //第一列
                if(qipan[i-1][0]==0)
                    printf("●");
                if(qipan[i-1][0]==1)
                    printf("○");
                if(qipan[i-1][0]==2)
                    printf("┌ ");
 
                //第2-14列
                for(j=2;j<=14;j++)
                {
                    if(qipan[i-1][j-1]==0)
                        printf("●");
                    if(qipan[i-1][j-1]==1)
                        printf("○");
                    if(qipan[i-1][j-1]==2)
                        printf("┬ ");
                }
 
                //第15列
                if(qipan[i-1][14]==0)
                    printf("●");
                if(qipan[i-1][14]==1)
                    printf("○");
                if(qipan[i-1][14]==2)
                    printf("┐ ");
 
                    printf("\n");
            }
            //第2-14行
            if(i<=19 && i>=2)
            {
                //第一列
                if(qipan[i-1][0]==0)
                    printf("●");
                if(qipan[i-1][0]==1)
                    printf("○");
                if(qipan[i-1][0]==2)
                    printf("├ ");
 
                //第2-14列
                for(j=2;j<=14;j++)
                {
                    if(qipan[i-1][j-1]==0)
                        printf("●");
                    if(qipan[i-1][j-1]==1)
                        printf("○");
                    if(qipan[i-1][j-1]==2)
                        printf("┼ ");
                }
 
                //第15列
                if(qipan[i-1][14]==0)
                    printf("●");
                if(qipan[i-1][14]==1)
                    printf("○");
                if(qipan[i-1][14]==2)
                    printf("┤ ");
 
                    printf("\n");
            }
            //第15行
			if(i==15)
			{
				//第1列
				if(qipan[i-1][0]==0)
                    printf("●");
                if(qipan[i-1][0]==1)
                    printf("○");
                if(qipan[i-1][0]==2)
                    printf("└ ");
                //2-14列
                for(j=2;j<=14;j++)
                {
                    if(qipan[i-1][j-1]==0)
                        printf("●");
                    if(qipan[i-1][j-1]==1)
                        printf("○");
                    if(qipan[i-1][j-1]==2)
                        printf("┴ ");
                }
                //第15列
				if(qipan[i-1][14]==0)
                    printf("●");
                if(qipan[i-1][14]==1)
                    printf("○");
                if(qipan[i-1][14]==2)
                    printf("┘ ");
 
                    printf("\n");
		    } //棋子判定
        }  
       
        
        
        
        
    }
	return 0;
}
