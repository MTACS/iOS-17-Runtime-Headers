
@interface WDBorder : NSObject <NSCopying> {
    OITSUColor * mColor;
    bool  mFrame;
    bool  mShadow;
    unsigned char  mSpace;
    int  mStyle;
    unsigned char  mWidth;
}

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)frame;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBorder:(id)arg1;
- (void)setBorder:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setFrame:(bool)arg1;
- (void)setNullBorder;
- (void)setShadow:(bool)arg1;
- (void)setSingleBlackBorder;
- (void)setSpace:(unsigned char)arg1;
- (void)setStyle:(int)arg1;
- (void)setWidth:(unsigned char)arg1;
- (bool)shadow;
- (unsigned char)space;
- (int)style;
- (unsigned char)width;

@end
