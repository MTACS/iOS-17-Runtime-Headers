
@interface INPaymentMethodResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithPaymentMethodToConfirm:(id)arg1;
+ (id)disambiguationWithPaymentMethodsToDisambiguate:(id)arg1;
+ (id)successWithResolvedPaymentMethod:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
