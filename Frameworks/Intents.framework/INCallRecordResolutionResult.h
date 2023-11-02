
@interface INCallRecordResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithCallRecordToConfirm:(id)arg1;
+ (id)disambiguationWithCallRecordsToDisambiguate:(id)arg1;
+ (id)successWithResolvedCallRecord:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
