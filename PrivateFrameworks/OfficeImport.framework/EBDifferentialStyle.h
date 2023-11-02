
@interface EBDifferentialStyle : NSObject

+ (id)edDifferentialStyleFromXlDXf:(struct XlDXf { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; struct XlDXfUserFmt {} *x7; struct XlDXfFont {} *x8; struct XlDXfAlign {} *x9; struct XlDXfBorders {} *x10; struct XlDXfPattern {} *x11; struct XlDXfProtect {} *x12; }*)arg1 edResources:(id)arg2;
+ (unsigned char)xlDXfBordersFlagsFromEDDifferentialStyle:(id)arg1;
+ (unsigned char)xlDXfPatternFlagsFromEDDifferentialStyle:(id)arg1;

@end
