
@interface ATXSuggestedPagesGenerator : NSObject <ATXSuggestedSpacesEnvironment> {
    ATXSuggestedPagesAppAggregator * _appAggregator;
    NSDictionary * _appLaunchCounts;
    unsigned long long  _cachedHomeScreenColumns;
    unsigned long long  _cachedHomeScreenRows;
    ATXWidgetDescriptorCache * _descriptorCache;
    ATXSuggestedPagesSleepShortcutsDataSource * _shortcutsDataSource;
    NSSet * _suggestedApps;
    ATXSuggestedPagesTunableConstants * _tunableConstants;
    ATXSuggestedPagesWidgetAggregator * _widgetAggregator;
}

@property (nonatomic, readonly) NSDictionary *appLaunchCounts;
@property (nonatomic, readonly) NSSet *suggestedApps;
@property (nonatomic, readonly) ATXSuggestedPagesTunableConstants *tunableConstants;

- (void).cxx_destruct;
- (unsigned long long)_suggestAppsFromPool:(id)arg1 forPage:(id)arg2 type:(long long)arg3 numberOfAppsNecessary:(unsigned long long)arg4;
- (unsigned long long)_suggestShortcutsFromPool:(id)arg1 forPage:(id)arg2 type:(long long)arg3 numberOfShortcutsNecessary:(unsigned long long)arg4;
- (unsigned long long)_suggestStacksFromPool:(id)arg1 forPage:(id)arg2 type:(long long)arg3 layout:(id)arg4 numberOfColumns:(unsigned long long)arg5;
- (id)_validatedWidgets:(id)arg1 bundleIdsToLaunches:(id)arg2;
- (id)appLaunchCounts;
- (id)generateSuggestedPagesForPageType:(long long)arg1 layoutOptions:(id)arg2;
- (id)init;
- (id)initWithWidgetAggregator:(id)arg1 appAggregator:(id)arg2 shortcutsDataSource:(id)arg3 descriptorCache:(id)arg4;
- (id)suggestedApps;
- (id)tunableConstants;

@end
