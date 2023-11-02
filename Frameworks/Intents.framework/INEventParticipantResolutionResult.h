
@interface INEventParticipantResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithEventParticipantToConfirm:(id)arg1;
+ (id)disambiguationWithEventParticipantsToDisambiguate:(id)arg1;
+ (id)successWithResolvedEventParticipant:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
