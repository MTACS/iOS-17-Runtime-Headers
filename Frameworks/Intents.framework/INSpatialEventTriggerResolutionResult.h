
@interface INSpatialEventTriggerResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithSpatialEventTriggerToConfirm:(id)arg1;
+ (id)disambiguationWithSpatialEventTriggersToDisambiguate:(id)arg1;
+ (id)successWithResolvedSpatialEventTrigger:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
