
@interface OADPresetPattern : OADPattern {
    bool  mIsTypeOverridden;
    int  mType;
}

+ (id)defaultProperties;
+ (id)nameForPresetPatternType:(int)arg1;
+ (id)namedBitmapDataForPresetPatternType:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isTypeOverridden;
- (void)setType:(int)arg1;
- (int)type;

@end
