
@interface MOApplicationSettingMetadata : MOSettingMetadata {
    long long  _combineOperator;
}

@property (nonatomic, readonly) long long combineOperator;
@property (nonatomic, readonly) MOApplication *defaultValue;

- (id)_combine:(id)arg1 with:(id)arg2;
- (long long)combineOperator;
- (id)combinePersistableValue:(id)arg1 with:(id)arg2;
- (id)defaultValue;
- (id)initWithDefaultApplication:(id)arg1 combineOperator:(long long)arg2 isPublic:(bool)arg3;
- (id)persistableValueFromValue:(id)arg1;
- (id)sanitizePersistableValue:(id)arg1;
- (id)valueFromPersistableValue:(id)arg1;

@end
