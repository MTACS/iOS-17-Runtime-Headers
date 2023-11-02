
@interface INSettingMetadataResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithSettingMetadataToConfirm:(id)arg1;
+ (id)disambiguationWithSettingMetadatasToDisambiguate:(id)arg1;
+ (id)successWithResolvedSettingMetadata:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
