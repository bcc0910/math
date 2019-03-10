/*
1. point P(x0,y0,z0) - plane L(Ax+By+Cz+D=0)
normal=(A,B,C)  normalized

d=(PQ,normal) =A(x0-x)+B(y0-y)+C(z0-z)+D =Ax0+By0+Cz0+D


proj_point= v - d*n


2. triangle arae

       | x1 y1 1 |
S=0.5* | x2 y2 1 | =0.5*[(x2-x1)(y3-y1) - (y2-y1)(x3-x1)]
       | x3 y3 1 |

3.cross

| i j k| 
|a1 b1 c1| 
|a2 b2 c2|
=(b1c2-b2c1,c1a2-a1c2,a1b2-a2b1) 

向量a、b的内积是长度为 |a||b|cosθ的标量，是向量a在向量b方向上的分量
而向量a、b的外积是长度为 |a||b|sinθ、并垂直于向量a、b的矢量 ,可计算三维三角形面积


4.corr 相关度

协方差   (x1-mean(x1),x2-mean(x2))/dim
minuseCenter,散度矩阵 S=X1*X2T

特征值,特征向量 A*v=lamda*v
特征值分解矩阵 A=QWQ-1  [Q:A的全部特征向量,W:A的全部特征向量]

SvD分解 A=UWV' [A:m*n, U:m*m,W:m*n,V:n*n]
    1)求AA'的特征值和特征向量,用单位化的特征向量构成 U
    2)求A'A的特征值和特征向量,用单位化的特征向量构成 V
    3)求AA'的特征值求平方根，然后构成W

*/
