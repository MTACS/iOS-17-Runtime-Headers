
@interface WBFont : NSObject

+ (id)readFrom:(const struct WrdFontFamilyName { int (**x1)(); struct CsString { int (**x_2_1_1)(); unsigned short *x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; struct CsString { int (**x_3_1_1)(); unsigned short *x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; int x4; char *x5; char *x6; unsigned short x7; bool x8; unsigned char x9; unsigned char x10; unsigned char x11; }*)arg1 withFontTable:(id)arg2;
+ (void)write:(id)arg1 to:(struct WrdFontFamilyName { int (**x1)(); struct CsString { int (**x_2_1_1)(); unsigned short *x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; struct CsString { int (**x_3_1_1)(); unsigned short *x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; int x4; char *x5; char *x6; unsigned short x7; bool x8; unsigned char x9; unsigned char x10; unsigned char x11; }*)arg2;

@end
