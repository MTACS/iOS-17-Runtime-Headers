
@interface INAlarmResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithAlarmToConfirm:(id)arg1;
+ (id)disambiguationWithAlarmsToDisambiguate:(id)arg1;
+ (id)successWithResolvedAlarm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
