
@interface INWellnessMetadataPairResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithWellnessMetadataPairToConfirm:(id)arg1;
+ (id)disambiguationWithWellnessMetadataPairsToDisambiguate:(id)arg1;
+ (id)successWithResolvedWellnessMetadataPair:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
