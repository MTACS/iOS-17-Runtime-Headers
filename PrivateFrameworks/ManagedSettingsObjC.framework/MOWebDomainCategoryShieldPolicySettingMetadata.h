
@interface MOWebDomainCategoryShieldPolicySettingMetadata : MOSettingMetadata {
    unsigned long long  _maximumActivityCount;
    unsigned long long  _maximumCategoryCount;
}

@property (nonatomic, readonly) MOWebDomainCategoryShieldPolicy *defaultValue;
@property (nonatomic, readonly) unsigned long long maximumActivityCount;
@property (nonatomic, readonly) unsigned long long maximumCategoryCount;

- (id)_combine:(id)arg1 with:(id)arg2;
- (id)combinePersistableValue:(id)arg1 with:(id)arg2;
- (id)defaultValue;
- (id)initWithDefaultPolicy:(id)arg1 maximumCategoryCount:(unsigned long long)arg2 maximumActivityCount:(unsigned long long)arg3 isPublic:(bool)arg4;
- (unsigned long long)maximumActivityCount;
- (unsigned long long)maximumCategoryCount;
- (id)persistableValueFromValue:(id)arg1;
- (id)sanitizePersistableValue:(id)arg1;
- (id)valueFromPersistableValue:(id)arg1;

@end
