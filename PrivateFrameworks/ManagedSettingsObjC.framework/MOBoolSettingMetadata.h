
@interface MOBoolSettingMetadata : MOSettingMetadata {
    long long  _combineOperator;
}

@property (nonatomic, readonly) long long combineOperator;
@property (nonatomic, readonly) NSNumber *defaultValue;

- (bool)_combine:(bool)arg1 with:(bool)arg2;
- (long long)combineOperator;
- (id)combinePersistableValue:(id)arg1 with:(id)arg2;
- (id)defaultValue;
- (id)initWithDefaultBool:(bool)arg1 combineOperator:(long long)arg2 isPublic:(bool)arg3;
- (id)persistableValueFromValue:(id)arg1;
- (id)sanitizePersistableValue:(id)arg1;
- (id)valueFromPersistableValue:(id)arg1;

@end
