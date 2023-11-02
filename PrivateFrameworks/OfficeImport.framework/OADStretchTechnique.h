
@interface OADStretchTechnique : OADImageFillTechnique {
    OADRelativeRect * mFillRect;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fillRect;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isFillRectOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setFillRect:(id)arg1;

@end
