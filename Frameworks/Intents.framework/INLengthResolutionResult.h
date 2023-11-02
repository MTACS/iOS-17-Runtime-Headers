
@interface INLengthResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithLengthToConfirm:(id)arg1;
+ (id)disambiguationWithLengthsToDisambiguate:(id)arg1;
+ (id)successWithResolvedLength:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
