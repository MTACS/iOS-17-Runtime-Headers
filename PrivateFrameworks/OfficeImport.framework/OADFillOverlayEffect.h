
@interface OADFillOverlayEffect : OADEffect {
    int  mBlendMode;
    OADFill * mFill;
}

- (void).cxx_destruct;
- (int)blendMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fill;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setBlendMode:(int)arg1;
- (void)setFill:(id)arg1;

@end
