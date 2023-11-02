
@interface INTemporalEventTriggerTypeOptionsResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithTemporalEventTriggerTypeOptionsToConfirm:(unsigned long long)arg1;
+ (id)successWithResolvedTemporalEventTriggerTypeOptions:(unsigned long long)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
