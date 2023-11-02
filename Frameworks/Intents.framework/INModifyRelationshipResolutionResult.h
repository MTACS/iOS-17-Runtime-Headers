
@interface INModifyRelationshipResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithModifyRelationshipToConfirm:(id)arg1;
+ (id)disambiguationWithModifyRelationshipsToDisambiguate:(id)arg1;
+ (id)successWithResolvedModifyRelationship:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
