
@interface INFileResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithFileToConfirm:(id)arg1;
+ (id)disambiguationWithFilesToDisambiguate:(id)arg1;
+ (id)successWithResolvedFile:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
