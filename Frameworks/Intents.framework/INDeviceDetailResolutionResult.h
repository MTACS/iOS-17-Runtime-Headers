
@interface INDeviceDetailResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithDeviceDetailToConfirm:(id)arg1;
+ (id)disambiguationWithDeviceDetailsToDisambiguate:(id)arg1;
+ (id)successWithResolvedDeviceDetail:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
