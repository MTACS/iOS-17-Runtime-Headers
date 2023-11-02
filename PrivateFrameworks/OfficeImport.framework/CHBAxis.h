
@interface CHBAxis : NSObject

+ (Class)chbAxisClassWith:(id)arg1;
+ (Class)chbAxisClassWith:(struct XlChartPlotAxis { int (**x1)(); int x2; struct XlChartTextFrame {} *x3; struct XlChartLineStyle {} *x4; struct XlChartLineStyle {} *x5; struct XlChartLineStyle {} *x6; struct XlChartLineStyle {} *x7; struct XlChartFillStyle {} *x8; struct XlChartPicF {} *x9; struct XlChartTick {} *x10; char *x11; char *x12; char *x13; char *x14; char *x15; unsigned short x16; unsigned short x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; bool x23; bool x24; }*)arg1 plotAxis:(int)arg2;
+ (int)chbAxisIdForPlotAxis:(int)arg1 state:(id)arg2;
+ (int)chdAxisPositionFromAxisType:(int)arg1;
+ (id)readWithXlPlotAxis:(int)arg1 state:(id)arg2;
+ (int)xlPlotAxisTypeFrom:(int)arg1;

@end
