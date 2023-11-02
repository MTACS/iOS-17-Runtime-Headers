
@interface ATXHomeScreenLogUploader : NSObject {
    ATXHomeScreenLogSystemChangeDictionary * _systemChangeDictionary;
    ATXHomeScreenLogSystemEventDictionaries * _systemEventDictionary;
    ATXTVWidgetLogHarvester * _tvWidgetLogHarvester;
    ATXHomeScreenLogWidgetAddSheetDictionaries * _widgetAddSheetDictionaries;
    ATXHomeScreenWidgetDiscoverabilityLogHarvester * _widgetDiscoverabilityDictionaries;
    ATXHomeScreenLogWidgetEventDictionaries * _widgetEventDictionaries;
    ATXHomeScreenLogWidgetRotationDictionaries * _widgetRotationDictionaries;
    ATXHomeScreenLogWidgetSetupDictionaries * _widgetSetupDictionaries;
}

+ (bool)_shouldProcessATXUIEvent:(id)arg1 startTime:(double)arg2;

- (void).cxx_destruct;
- (id)_timeBasedMergePublisher:(id)arg1 withOtherPublishers:(id)arg2;
- (id)init;
- (void)uploadHomeScreenSummaryLogsToCoreAnalyticsWithActivity:(id)arg1 customStartDate:(id)arg2 dryRunCompletionHandler:(id /* block */)arg3;

@end
