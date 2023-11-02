
@interface OADProperties : NSObject {
    unsigned int  mIsMerged;
    unsigned int  mIsMergedWithParent;
    OADProperties * mParent;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (void)changeParentPreservingEffectiveValues:(id)arg1;
- (id)description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (void)flatten;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isMerged;
- (bool)isMergedPropertyForSelector:(SEL)arg1;
- (bool)isMergedWithParent;
- (id)overrideForSelector:(SEL)arg1;
- (id)overrideForSelector:(SEL)arg1 mustExist:(bool)arg2;
- (void)p_setParent:(id)arg1;
- (id)parent;
- (id)possiblyInexistentOverrideForSelector:(SEL)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setMerged:(bool)arg1;
- (void)setMergedWithParent:(bool)arg1;
- (void)setParent:(id)arg1;

@end
