
@interface INIntentExecutionResultResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithIntentExecutionResultToConfirm:(id)arg1;
+ (id)disambiguationWithIntentExecutionResultsToDisambiguate:(id)arg1;
+ (id)successWithResolvedIntentExecutionResult:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
