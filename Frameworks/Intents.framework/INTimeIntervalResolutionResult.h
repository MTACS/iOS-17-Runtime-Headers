
@interface INTimeIntervalResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithTimeIntervalToConfirm:(double)arg1;
+ (id)successWithResolvedTimeInterval:(double)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
