
@interface MOUserSafetyScanningPolicySettingMetadata : MOSettingMetadata {
    long long  _interventionCombineOperator;
    unsigned long long  _maximumApplicationCount;
    NSDictionary * _rankedInterventionTypes;
}

@property (nonatomic, readonly) MOUserSafetyScanningPolicy *defaultValue;
@property (nonatomic, readonly) long long interventionCombineOperator;
@property (nonatomic, readonly) unsigned long long maximumApplicationCount;
@property (nonatomic, readonly) NSDictionary *rankedInterventionTypes;

- (void).cxx_destruct;
- (id)_combine:(id)arg1 with:(id)arg2;
- (id)_combineInterventionType:(id)arg1 with:(id)arg2;
- (id)combinePersistableValue:(id)arg1 with:(id)arg2;
- (id)defaultValue;
- (id)initWithDefaultPolicy:(id)arg1 interventionCombineOperator:(long long)arg2 rankedInterventionTypes:(id)arg3 maximumApplicationCount:(unsigned long long)arg4 isPublic:(bool)arg5;
- (long long)interventionCombineOperator;
- (unsigned long long)maximumApplicationCount;
- (id)persistableValueFromValue:(id)arg1;
- (id)rankedInterventionTypes;
- (id)sanitizePersistableValue:(id)arg1;
- (id)valueFromPersistableValue:(id)arg1;

@end
