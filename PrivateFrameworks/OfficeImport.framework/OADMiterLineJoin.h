
@interface OADMiterLineJoin : OADLineJoin {
    unsigned int  mIsLimitOverridden;
    float  mLimit;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isLimitOverridden;
- (float)limit;
- (void)removeUnnecessaryOverrides;
- (void)setLimit:(float)arg1;

@end
