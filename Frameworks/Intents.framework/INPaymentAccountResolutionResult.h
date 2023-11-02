
@interface INPaymentAccountResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithPaymentAccountToConfirm:(id)arg1;
+ (id)disambiguationWithPaymentAccountsToDisambiguate:(id)arg1;
+ (id)successWithResolvedPaymentAccount:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
