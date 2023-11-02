
@interface INVolumeResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithVolumeToConfirm:(id)arg1;
+ (id)disambiguationWithVolumeToDisambiguate:(id)arg1;
+ (id)successWithResolvedVolume:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
