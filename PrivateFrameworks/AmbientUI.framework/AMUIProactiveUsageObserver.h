
@interface AMUIProactiveUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver> {
    SBHIconManager * _iconManager;
    SBIconListModel * _listModel;
    ATXAmbientSuggestionProvider * _proactiveClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_proactiveWidgetForIconDataSource:(id)arg1 ofIcon:(id)arg2;
- (id)_proactiveWidgetForWidget:(id)arg1 ofIcon:(id)arg2;
- (id)_proactiveWidgetStackForWidgetIcon:(id)arg1;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteDataSourceDidAppear:(id)arg2 forWidgetIcon:(id)arg3;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteDataSourceDidDisappear:(id)arg2 forWidgetIcon:(id)arg3;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteUserTappedWidgetIcon:(id)arg2 withURL:(id)arg3;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconStackChangedActiveWidget:(id)arg2;
- (void)homeScreenUsageAggregatorDidNoteHomeScreenLayoutChanged:(id)arg1;
- (id)initWithListModel:(id)arg1 iconManager:(id)arg2 proactiveClient:(id)arg3;
- (void)pushStackConfigurationsToProactive;

@end
