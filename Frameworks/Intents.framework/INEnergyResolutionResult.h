
@interface INEnergyResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithEnergyToConfirm:(id)arg1;
+ (id)disambiguationWithEnergyToDisambiguate:(id)arg1;
+ (id)successWithResolvedEnergy:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
