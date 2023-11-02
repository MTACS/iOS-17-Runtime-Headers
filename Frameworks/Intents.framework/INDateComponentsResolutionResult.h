
@interface INDateComponentsResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithDateComponentsToConfirm:(id)arg1;
+ (id)disambiguationWithDateComponentsToDisambiguate:(id)arg1;
+ (id)successWithResolvedDateComponents:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
