
@interface ATXHomeScreenLogWidgetEventDictionaries : NSObject {
    NSMutableDictionary * _widgetEventDictionaries;
}

+ (id)widgetEventDictionaryAccumulatorSplitByLocationKeys;

- (void).cxx_destruct;
- (id)_createNewWidgetEventDictionaryForBundleId:(id)arg1 kind:(id)arg2 size:(unsigned long long)arg3;
- (id)_widgetEventDictionaryForATXHomeScreenWidgetIdentifiable:(id)arg1;
- (id)_widgetEventDictionaryForHomeScreenEvent:(id)arg1;
- (id)_widgetEventDictionaryForWidgetId:(id)arg1 widgetKind:(id)arg2 widgetSize:(unsigned long long)arg3;
- (id)_widgetEventDictionaryKeyWithWidgetId:(id)arg1 widgetKind:(id)arg2 widgetSize:(unsigned long long)arg3;
- (id)dryRunResult;
- (id)init;
- (void)sendToCoreAnalytics;
- (void)updateUnlockSessionsWithWidgetDwell:(id)arg1;
- (void)updateWidgetLevelSummaryForHomeScreenEvent:(id)arg1 lastStackEvent:(id)arg2;
- (void)updateWidgetLevelSummaryForWidgetPseudoTapWithStackShownEvent:(id)arg1;

@end
