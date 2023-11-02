
@interface ATXHomeScreenLogSystemChangeDictionary : NSObject {
    NSMutableDictionary * _systemChangeDictionary;
}

+ (id)systemChangeDictionaryAccumulatorKeys;

- (void).cxx_destruct;
- (id)_createNewSystemChangeDictionary;
- (bool)_fetchHasHadWidgetsOnHomeScreenUserDefault;
- (void)_logSuggestedWidgetDismissalWithEvent:(id)arg1;
- (void)_logSuggestedWidgetExplicitDismissalWithEvent:(id)arg1;
- (bool)_suggestedWidgetWasExplicitlyDismissedWithEvent:(id)arg1;
- (id)dryRunResult;
- (id)init;
- (void)sendToCoreAnalytics;
- (void)updateSystemChangeSummaryForHomeScreenEvent:(id)arg1;
- (void)updateSystemChangeSummaryForHomeScreenPages:(id)arg1;

@end
