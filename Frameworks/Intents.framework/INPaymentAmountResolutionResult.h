
@interface INPaymentAmountResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithPaymentAmountToConfirm:(id)arg1;
+ (id)disambiguationWithPaymentAmountsToDisambiguate:(id)arg1;
+ (id)successWithResolvedPaymentAmount:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
