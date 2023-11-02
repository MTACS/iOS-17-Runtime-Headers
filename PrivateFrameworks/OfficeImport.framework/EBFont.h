
@interface EBFont : NSObject

+ (int)convertEDScriptEnumToXl:(int)arg1;
+ (int)convertEDUnderlineEnumToXl:(int)arg1;
+ (int)convertXlScriptEnumToED:(int)arg1;
+ (int)convertXlUnderlineEnumToED:(int)arg1;
+ (id)edFontFromXlDXfFont:(struct XlDXfFont { int (**x1)(); struct XlString {} *x2; int x3; int x4; short x5; int x6; int x7; unsigned char x8; unsigned char x9; int x10; int x11; unsigned int x12; unsigned int x13; unsigned int x14; int x15; int x16; int x17; int x18; short x19; }*)arg1 edResources:(id)arg2;
+ (id)edFontFromXlFont:(struct XlFont { int (**x1)(); struct XlHeader { unsigned int x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; struct XlString {} *x3; short x4; short x5; short x6; int x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; int x14; unsigned char x15; unsigned char x16; }*)arg1 edResources:(id)arg2;

@end
