
@interface INCallRecordTypeOptionsResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithCallRecordTypeOptionsToConfirm:(unsigned long long)arg1;
+ (id)confirmationRequiredWithValueToConfirm:(unsigned long long)arg1;
+ (id)successWithResolvedCallRecordTypeOptions:(unsigned long long)arg1;
+ (id)successWithResolvedValue:(unsigned long long)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
