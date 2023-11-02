
@interface AlarmSearchStatusResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithAlarmSearchStatusToConfirm:(long long)arg1;
+ (id)successWithResolvedAlarmSearchStatus:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
