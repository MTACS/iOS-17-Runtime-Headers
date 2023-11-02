
@interface INNoteContentResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithNoteContentToConfirm:(id)arg1;
+ (id)disambiguationWithNoteContentsToDisambiguate:(id)arg1;
+ (id)successWithResolvedNoteContent:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
