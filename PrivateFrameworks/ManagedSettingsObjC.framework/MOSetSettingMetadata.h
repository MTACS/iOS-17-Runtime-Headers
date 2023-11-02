
@interface MOSetSettingMetadata : MOSettingMetadata {
    long long  _combineOperator;
    unsigned long long  _maximumCount;
}

@property (nonatomic, readonly) long long combineOperator;
@property (nonatomic, readonly) NSSet *defaultValue;
@property (nonatomic, readonly) unsigned long long maximumCount;

- (id)_combine:(id)arg1 with:(id)arg2;
- (long long)combineOperator;
- (id)combinePersistableValue:(id)arg1 with:(id)arg2;
- (id)defaultValue;
- (id)initWithDefaultSet:(id)arg1 combineOperator:(long long)arg2 maximumCount:(unsigned long long)arg3 isPublic:(bool)arg4;
- (unsigned long long)maximumCount;
- (id)persistableValueFromValue:(id)arg1;
- (id)sanitizePersistableValue:(id)arg1;
- (id)valueFromPersistableValue:(id)arg1;

@end
