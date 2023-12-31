
@interface OADLinearShade : OADShade {
    float  mAngle;
    bool  mIsAngleOverridden;
    bool  mIsScaledOverridden;
    bool  mScaled;
}

+ (id)defaultProperties;

- (float)angle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAngleOverridden;
- (bool)isAnythingOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isScaledOverridden;
- (void)removeUnnecessaryOverrides;
- (bool)scaled;
- (void)setAngle:(float)arg1;
- (void)setScaled:(bool)arg1;

@end
