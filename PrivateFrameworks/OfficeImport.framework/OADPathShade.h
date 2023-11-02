
@interface OADPathShade : OADShade {
    OADRelativeRect * mFillToRect;
    bool  mIsTypeOverridden;
    int  mType;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fillToRect;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isFillToRectOverridden;
- (bool)isTypeOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setFillToRect:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
