
@interface INURLResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithURLToConfirm:(id)arg1;
+ (id)disambiguationWithURLsToDisambiguate:(id)arg1;
+ (id)successWithResolvedURL:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
