
@interface MOWebContentFilterPolicySettingMetadata : MOSettingMetadata {
    unsigned long long  _maximumAutoAllowCount;
    unsigned long long  _maximumNeverAllowCount;
    unsigned long long  _maximumOnlyAllowCount;
}

@property (nonatomic, readonly) MOWebContentFilterPolicy *defaultValue;
@property (nonatomic, readonly) unsigned long long maximumAutoAllowCount;
@property (nonatomic, readonly) unsigned long long maximumNeverAllowCount;
@property (nonatomic, readonly) unsigned long long maximumOnlyAllowCount;

- (id)_combine:(id)arg1 with:(id)arg2;
- (id)combinePersistableValue:(id)arg1 with:(id)arg2;
- (id)defaultValue;
- (id)initWithDefaultPolicy:(id)arg1 maximumAutoAllowCount:(unsigned long long)arg2 maximumNeverAllowCount:(unsigned long long)arg3 maximumOnlyAllowCount:(unsigned long long)arg4 isPublic:(bool)arg5;
- (unsigned long long)maximumAutoAllowCount;
- (unsigned long long)maximumNeverAllowCount;
- (unsigned long long)maximumOnlyAllowCount;
- (id)persistableValueFromValue:(id)arg1;
- (id)sanitizePersistableValue:(id)arg1;
- (id)valueFromPersistableValue:(id)arg1;

@end
