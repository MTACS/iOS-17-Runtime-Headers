
@interface OADOuterShadowEffect : OADShadowEffect {
    int  mAlignment;
    bool  mRotateWithShape;
    float  mXScale;
    float  mXSkew;
    float  mYScale;
    float  mYSkew;
}

- (int)alignment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)rotateWithShape;
- (void)setAlignment:(int)arg1;
- (void)setRotateWithShape:(bool)arg1;
- (void)setXScale:(float)arg1;
- (void)setXSkew:(float)arg1;
- (void)setYScale:(float)arg1;
- (void)setYSkew:(float)arg1;
- (float)xScale;
- (float)xSkew;
- (float)yScale;
- (float)ySkew;

@end
