
@interface INCalendarEventResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithCalendarEventToConfirm:(id)arg1;
+ (id)disambiguationWithCalendarEventsToDisambiguate:(id)arg1;
+ (id)successWithResolvedCalendarEvent:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
