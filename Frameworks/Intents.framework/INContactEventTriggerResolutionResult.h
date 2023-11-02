
@interface INContactEventTriggerResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithContactEventTriggerToConfirm:(id)arg1;
+ (id)disambiguationWithContactEventTriggersToDisambiguate:(id)arg1;
+ (id)successWithResolvedContactEventTrigger:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
