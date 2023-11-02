
@interface OADSolidFill : OADFill {
    OADColor * mColor;
    bool  mIsColorOverridden;
}

+ (id)blackFill;
+ (id)defaultProperties;
+ (id)whiteFill;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isColorOverridden;
- (bool)isEqual:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setColor:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (bool)usesPlaceholderColor;

@end
