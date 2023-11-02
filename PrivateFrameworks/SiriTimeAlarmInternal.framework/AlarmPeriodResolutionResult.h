
@interface AlarmPeriodResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithAlarmPeriodToConfirm:(long long)arg1;
+ (id)successWithResolvedAlarmPeriod:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
