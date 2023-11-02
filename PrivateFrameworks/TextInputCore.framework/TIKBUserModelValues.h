
@interface TIKBUserModelValues : TIUserModelValues {
    NSMutableDictionary * _stringValues;
}

@property (nonatomic, readonly) TIKBAnalyticsMetricsContext *kbContext;

- (void).cxx_destruct;
- (id)bucketCountsByWordLength:(id)arg1;
- (id)calcAutocorrectionEnabled;
- (id)calcFloatingKeyboardUsageFromUserModel:(id)arg1;
- (id)calcTypingSpeedFromUserModel:(id)arg1;
- (id)computeValueFromCount:(id)arg1 bucketThresholds:(id)arg2 bucketValues:(id)arg3;
- (id)computeValueFromExpression:(id)arg1 precondition:(id)arg2 defaultValue:(id)arg3 bindings:(id)arg4 bucketThresholds:(id)arg5 bucketValues:(id)arg6;
- (id)computeValueWithDescriptor:(id)arg1 userModel:(id)arg2 forNumberOfDays:(int)arg3;
- (id)computeValuesByWordLengthWithDescriptor:(id)arg1 userModel:(id)arg2 forNumberOfDays:(int)arg3;
- (id)initWithInputMode:(id)arg1 context:(id)arg2 userModelDataStore:(id)arg3 durableCounters:(id)arg4 settingsDictionary:(id)arg5;
- (id)kbContext;
- (id)metricValue:(id)arg1 userModel:(id)arg2 forNumberOfDays:(int)arg3;
- (id)metricValuesByWordLength:(id)arg1 userModel:(id)arg2 forNumberOfDays:(int)arg3;
- (void)persistForDate:(id)arg1;
- (id)settingValueFromName:(id)arg1;

@end
