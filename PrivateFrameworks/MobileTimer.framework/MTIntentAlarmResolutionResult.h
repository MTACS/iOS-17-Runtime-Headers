
@interface MTIntentAlarmResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithAlarmToConfirm:(id)arg1;
+ (id)disambiguationWithAlarmsToDisambiguate:(id)arg1;
+ (id)successWithResolvedAlarm:(id)arg1;
+ (bool)supportsSecureCoding;

@end
