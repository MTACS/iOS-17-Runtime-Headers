
@interface INHomeUserTaskResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithHomeUserTaskToConfirm:(id)arg1;
+ (id)disambiguationWithHomeUserTasksToDisambiguate:(id)arg1;
+ (id)successWithResolvedHomeUserTask:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
