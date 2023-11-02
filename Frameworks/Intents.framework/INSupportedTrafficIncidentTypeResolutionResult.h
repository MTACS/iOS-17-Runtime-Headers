
@interface INSupportedTrafficIncidentTypeResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithSupportedTrafficIncidentTypeToConfirm:(id)arg1;
+ (id)disambiguationWithSupportedTrafficIncidentTypesToDisambiguate:(id)arg1;
+ (id)successWithResolvedSupportedTrafficIncidentType:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
