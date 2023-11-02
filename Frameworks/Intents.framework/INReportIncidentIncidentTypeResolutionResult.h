
@interface INReportIncidentIncidentTypeResolutionResult : INSupportedTrafficIncidentTypeResolutionResult

+ (id)unsupportedForReason:(long long)arg1;

- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;
- (id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2;
- (id)initWithSupportedTrafficIncidentTypeResolutionResult:(id)arg1;

@end
