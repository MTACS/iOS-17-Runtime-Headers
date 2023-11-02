
@interface INHealthUnitResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithHealthUnitToConfirm:(id)arg1;
+ (id)disambiguationWithHealthUnitsToDisambiguate:(id)arg1;
+ (id)successWithResolvedHealthUnit:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
