
@interface WBShading : NSObject

+ (struct CsColour { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })fixedUpVersionOfColor:(struct CsColour { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })arg1;
+ (void)readFrom:(struct WrdShading { int (**x1)(); int x2; bool x3; struct CsColour { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned short x_4_1_4; } x4; struct CsColour { unsigned short x_5_1_1; unsigned short x_5_1_2; unsigned short x_5_1_3; unsigned short x_5_1_4; } x5; bool x6; int x7; int x8; }*)arg1 to:(id)arg2;
+ (void)setToSolidWhite:(id)arg1;
+ (void)write:(id)arg1 to:(struct WrdShading { int (**x1)(); int x2; bool x3; struct CsColour { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned short x_4_1_4; } x4; struct CsColour { unsigned short x_5_1_1; unsigned short x_5_1_2; unsigned short x_5_1_3; unsigned short x_5_1_4; } x5; bool x6; int x7; int x8; }*)arg2;

@end
