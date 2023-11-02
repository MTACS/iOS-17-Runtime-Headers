
@interface CHBMarker : NSObject

+ (int)chdMarkerStyleFromXlMarkerType:(int)arg1;
+ (id)readFrom:(const struct XlChartSeriesFormat { int (**x1)(); struct XlChartLineStyle {} *x2; struct XlChartFillStyle {} *x3; struct XlChartMarkerStyle {} *x4; struct XlChartPicF {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; unsigned short x12; unsigned short x13; int x14; bool x15; bool x16; bool x17; bool x18; bool x19; bool x20; bool x21; bool x22; bool x23; bool x24; }*)arg1 state:(id)arg2;
+ (int)xlMarkerStyleFromCHDMarkerType:(int)arg1;

@end
