
@interface INModifyNicknameResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithModifyNicknameToConfirm:(id)arg1;
+ (id)disambiguationWithModifyNicknamesToDisambiguate:(id)arg1;
+ (id)successWithResolvedModifyNickname:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
