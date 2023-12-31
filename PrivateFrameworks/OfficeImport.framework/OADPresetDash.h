
@interface OADPresetDash : OADDash {
    unsigned int  mIsTypeOverridden;
    BOOL  mType;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)equivalentCustomDash;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isTypeOverridden;
- (void)setType:(BOOL)arg1;
- (BOOL)type;

@end
