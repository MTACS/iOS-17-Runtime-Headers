
@interface _CUIThemeTextStyleRendition : CUIThemeRendition {
    const struct _csitextstyle { unsigned int x1; unsigned int x2; unsigned int x3; float x4; float x5; float x6; unsigned int x7; unsigned int x8; BOOL x9[0]; } * _csiTextStyle;
}

- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1 version:(unsigned int)arg2;
- (const struct _csitextstyle { unsigned int x1; unsigned int x2; unsigned int x3; float x4; float x5; float x6; unsigned int x7; unsigned int x8; BOOL x9[0]; }*)csiTextStyle;

@end
