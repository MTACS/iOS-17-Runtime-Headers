
@interface MOStringSettingMetadata : MOSettingMetadata {
    long long  _combineOperator;
    NSDictionary * _rankedAllowedValues;
}

@property (nonatomic, readonly) long long combineOperator;
@property (nonatomic, readonly) NSString *defaultValue;
@property (nonatomic, readonly) NSDictionary *rankedAllowedValues;

- (void).cxx_destruct;
- (id)_combine:(id)arg1 with:(id)arg2;
- (long long)combineOperator;
- (id)combinePersistableValue:(id)arg1 with:(id)arg2;
- (id)defaultValue;
- (id)initWithDefaultString:(id)arg1 combineOperator:(long long)arg2 rankedAllowedValues:(id)arg3 isPublic:(bool)arg4;
- (id)persistableValueFromValue:(id)arg1;
- (id)rankedAllowedValues;
- (id)sanitizePersistableValue:(id)arg1;
- (id)valueFromPersistableValue:(id)arg1;

@end
