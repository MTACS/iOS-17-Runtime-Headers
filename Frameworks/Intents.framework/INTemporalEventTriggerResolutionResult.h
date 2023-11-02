
@interface INTemporalEventTriggerResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithTemporalEventTriggerToConfirm:(id)arg1;
+ (id)disambiguationWithTemporalEventTriggersToDisambiguate:(id)arg1;
+ (id)successWithResolvedTemporalEventTrigger:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
