
@interface ATXHomeScreenLogWidgetSetupDictionaries : NSObject {
    ATXInformationStore * _informationStore;
    NSMutableDictionary * _stackConfigDictionary;
    NSMutableArray * _widgetSetupDictionaries;
}

- (void).cxx_destruct;
- (void)_copyAllowedWidgetBundleIds;
- (void)_createNewWidgetSetupDictionaryForWidget:(id)arg1 stackKind:(unsigned long long)arg2 stackLocation:(unsigned long long)arg3 rowCoordinate:(long long)arg4 columnCoordinate:(long long)arg5;
- (void)_createStackConfigStatisticsForWidget:(id)arg1 stackKind:(unsigned long long)arg2;
- (void)_finalizeWidgetSetupDictionaries;
- (void)_persistStackConfigStatistics;
- (void)_removeAuxiliaryFieldsFromWidgetSetupDictionaries;
- (id)dryRunResult;
- (id)init;
- (void)sendToCoreAnalytics;
- (void)updateTotalUnlockSessions:(unsigned long long)arg1;
- (void)updateWidgetLevelParentAppLaunches:(id)arg1;
- (void)updateWidgetSetupSummaryForHomeScreenPages:(id)arg1;

@end
