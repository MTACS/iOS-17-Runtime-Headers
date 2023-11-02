
@interface OADCustomDash : OADDash {
    NSArray * mStops;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (bool)areStopsOverridden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isEqual:(id)arg1;
- (void)setStops:(id)arg1;
- (id)stops;

@end
