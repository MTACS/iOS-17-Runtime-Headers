
@interface INTimerResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithTimerToConfirm:(id)arg1;
+ (id)disambiguationWithTimersToDisambiguate:(id)arg1;
+ (id)successWithResolvedTimer:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
