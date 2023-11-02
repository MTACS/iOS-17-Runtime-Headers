
@interface OADPatternFill : OADFill {
    OADColor * mBgColor;
    OADColor * mFgColor;
    OADPattern * mPattern;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)bgColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fgColor;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isBgColorOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isFgColorOverridden;
- (bool)isPatternOverridden;
- (id)namedImageDataWithBlipCollection:(id)arg1;
- (id)pattern;
- (void)removeUnnecessaryOverrides;
- (void)setBgColor:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setFgColor:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPattern:(id)arg1;
- (void)setStyleColor:(id)arg1;

@end
