
@interface INTaskResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithTaskToConfirm:(id)arg1;
+ (id)disambiguationWithTasksToDisambiguate:(id)arg1;
+ (id)successWithResolvedTask:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
