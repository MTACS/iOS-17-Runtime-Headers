
@interface INNumericSettingValueResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithNumericSettingValueToConfirm:(id)arg1;
+ (id)disambiguationWithNumericSettingValuesToDisambiguate:(id)arg1;
+ (id)successWithResolvedNumericSettingValue:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
