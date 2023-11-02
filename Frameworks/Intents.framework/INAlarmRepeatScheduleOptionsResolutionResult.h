
@interface INAlarmRepeatScheduleOptionsResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithAlarmRepeatScheduleOptionsToConfirm:(unsigned long long)arg1;
+ (id)successWithResolvedAlarmRepeatScheduleOptions:(unsigned long long)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
