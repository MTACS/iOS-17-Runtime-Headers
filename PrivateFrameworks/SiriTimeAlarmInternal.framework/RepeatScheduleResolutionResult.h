
@interface RepeatScheduleResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithRepeatScheduleToConfirm:(long long)arg1;
+ (id)successWithResolvedRepeatSchedule:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
