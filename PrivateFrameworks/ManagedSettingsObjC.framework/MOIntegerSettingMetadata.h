
@interface MOIntegerSettingMetadata : MOSettingMetadata {
    long long  _combineOperator;
    long long  _lowerBound;
    long long  _upperBound;
}

@property (nonatomic, readonly) long long combineOperator;
@property (nonatomic, readonly) NSNumber *defaultValue;
@property (nonatomic, readonly) long long lowerBound;
@property (nonatomic, readonly) long long upperBound;

- (long long)_combine:(long long)arg1 with:(long long)arg2;
- (long long)combineOperator;
- (id)combinePersistableValue:(id)arg1 with:(id)arg2;
- (id)defaultValue;
- (id)initWithDefaultInt:(long long)arg1 combineOperator:(long long)arg2 lowerBound:(long long)arg3 upperBound:(long long)arg4 isPublic:(bool)arg5;
- (long long)lowerBound;
- (id)persistableValueFromValue:(id)arg1;
- (id)sanitizePersistableValue:(id)arg1;
- (long long)upperBound;
- (id)valueFromPersistableValue:(id)arg1;

@end
