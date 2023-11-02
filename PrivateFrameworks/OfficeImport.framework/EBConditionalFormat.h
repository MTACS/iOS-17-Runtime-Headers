
@interface EBConditionalFormat : NSObject

+ (int)convertEDConditionalFmtOperatorEnumToXl:(int)arg1;
+ (int)convertEDConditionalFmtTypeEnumToXl:(int)arg1;
+ (int)convertXlConditionalFmtOperatorEnumToED:(int)arg1;
+ (int)convertXlConditionalFmtTypeEnumToED:(int)arg1;
+ (void)readXlConditionalFormat:(void*)arg1 toEDConditionalFormatting:(id)arg2 state:(id)arg3;
+ (bool)validXlCf:(struct XlCf { int (**x1)(); struct XlHeader { unsigned int x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; int x3; int x4; short x5; short x6; struct XlDXf {} *x7; char *x8; char *x9; }*)arg1;

@end
