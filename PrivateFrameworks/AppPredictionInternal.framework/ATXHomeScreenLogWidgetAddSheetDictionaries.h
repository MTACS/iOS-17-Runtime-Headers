
@interface ATXHomeScreenLogWidgetAddSheetDictionaries : NSObject {
    NSMutableDictionary * _widgetAddSheetDictionaries;
}

+ (id)rankKeysSplitBySize;

- (void).cxx_destruct;
- (id)_createNewWidgetAddSheetDictionaryForBundleId:(id)arg1 kind:(id)arg2;
- (void)_updateWidgetAddSheetDictionariesForDescriptor:(id)arg1 inStack:(bool)arg2 rank:(unsigned long long)arg3;
- (void)_updateWidgetAddSheetDictionariesForStack:(id)arg1 suggestedSize:(unsigned long long)arg2;
- (void)_updateWidgetAddSheetDictionariesWithDictionary:(id)arg1 suggestedSize:(unsigned long long)arg2 inStack:(bool)arg3 rank:(unsigned long long)arg4;
- (id)_widgetAddSheetDictionaryForDescriptor:(id)arg1;
- (id)_widgetAddSheetDictionaryForStack;
- (id)_widgetAddSheetDictionaryForWidgetId:(id)arg1 widgetKind:(id)arg2;
- (id)dryRunResult;
- (id)init;
- (void)sendToCoreAnalytics;
- (void)updateWidgetAddSheetSummaryForDefaultStack:(id)arg1;
- (void)updateWidgetAddSheetSummaryForSuggestions:(id)arg1;
- (id)widgetAddSheetDictionaryKeyWithWidgetId:(id)arg1 widgetKind:(id)arg2;

@end
