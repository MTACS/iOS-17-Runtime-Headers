
@interface OITSUMutableFormatObject : OITSUFormatObject

@property (nonatomic) struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { id x_6_2_1; id x_6_2_2; unsigned int x_6_2_3; unsigned char x_6_2_4; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; } formatStruct;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { id x_6_2_1; id x_6_2_2; unsigned int x_6_2_3; unsigned char x_6_2_4; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; })arg1;

@end
