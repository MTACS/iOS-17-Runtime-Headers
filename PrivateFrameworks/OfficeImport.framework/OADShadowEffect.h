
@interface OADShadowEffect : OADEffect {
    float  mAngle;
    float  mBlurRadius;
    OADColor * mColor;
    float  mDistance;
}

- (void).cxx_destruct;
- (float)angle;
- (float)blurRadius;
- (id)color;
- (id)description;
- (float)distance;
- (unsigned long long)hash;
- (id)initWithShadowEffect:(id)arg1 type:(int)arg2;
- (id)initWithType:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAngle:(float)arg1;
- (void)setBlurRadius:(float)arg1;
- (void)setColor:(id)arg1;
- (void)setDistance:(float)arg1;
- (void)setStyleColor:(id)arg1;

@end
