
@interface AlarmRepeatScheduleResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithAlarmRepeatScheduleToConfirm:(id)arg1;
+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)disambiguationWithAlarmRepeatSchedulesToDisambiguate:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)successWithResolvedAlarmRepeatSchedule:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
