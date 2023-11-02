
@interface INAnnouncementResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithAnnouncementToConfirm:(id)arg1;
+ (id)disambiguationWithAnnouncementsToDisambiguate:(id)arg1;
+ (id)successWithResolvedAnnouncement:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
