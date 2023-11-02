
@interface OABShapeBaseManager : OABFillPropertiesManager <OABBasePropertiesManager> {
    void * mShapeBase;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithShapeBase:(void*)arg1 shapeType:(int)arg2 masterShape:(struct EshShape { }*)arg3;
- (bool)isShadowed;
- (bool)isStroked;
- (int)shadowAlpha;
- (struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; })shadowColor;
- (int)shadowOffsetX;
- (int)shadowOffsetY;
- (int)shadowSoftness;
- (int)shadowType;
- (struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; })strokeBgColor;
- (int)strokeCapStyle;
- (int)strokeCompoundType;
- (const void*)strokeCustomDash;
- (int)strokeEndArrowLength;
- (int)strokeEndArrowType;
- (int)strokeEndArrowWidth;
- (int)strokeFgAlpha;
- (struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; })strokeFgColor;
- (struct EshBlip { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; struct UID { unsigned char x_4_1_1[16]; } x4; }*)strokeFillBlipDataReference;
- (unsigned int)strokeFillBlipID;
- (id)strokeFillBlipName;
- (int)strokeFillType;
- (int)strokeJoinStyle;
- (int)strokeMiterLimit;
- (int)strokePresetDash;
- (int)strokeStartArrowLength;
- (int)strokeStartArrowType;
- (int)strokeStartArrowWidth;
- (int)strokeWidth;

@end
