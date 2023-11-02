
@protocol CLKComplicationClient

@required

- (void)getAlwaysOnTemplateForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLKComplicationTemplate *, void*
- (void)getComplicationDescriptorsWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getCurrentTimelineEntryForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLKComplicationTimelineEntry *, void*
- (void)getLocalizableSampleTemplateForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLKComplicationTemplate *, void*
- (void)getNextRequestedUpdateDateWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, void*
- (void)getPlaceholderTemplateForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLKComplicationTemplate *, void*
- (void)getPrivacyBehaviorForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)getSupportedTimeTravelDirectionsForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)getTimelineAnimationBehaviorForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)getTimelineEndDateForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, void*
- (void)getTimelineEntriesForComplication:(void *)arg1 afterDate:(void *)arg2 limit:(void *)arg3 withHandler:(void *)arg4; // needs 4 arg types, found 9: CLKComplication *, NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getWidgetMigrationConfigurationFrom:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplicationDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLKComplicationWidgetMigrationConfiguration *, void*
- (void)handleSharedComplicationDescriptors:(NSArray *)arg1;
- (void)notifyDebugTimeoutWithCharging:(bool)arg1;
- (void)requestedUpdateBudgetExhausted;
- (void)requestedUpdateDidBegin;
- (void)setActiveComplications:(NSSet *)arg1;

@end
