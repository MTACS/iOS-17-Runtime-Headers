
@interface INMassResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithMassToConfirm:(id)arg1;
+ (id)disambiguationWithMassToDisambiguate:(id)arg1;
+ (id)successWithResolvedMass:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
