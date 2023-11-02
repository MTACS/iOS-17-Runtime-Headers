
@interface SBProactiveHomeScreenUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver> {
    ATXHomeScreenPrediction * _currentPrediction;
    <SBProactiveHomeScreenUsageObserverDelegate> * _delegate;
    SBIconController * _iconController;
}

@property (nonatomic, retain) ATXHomeScreenPrediction *currentPrediction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBProactiveHomeScreenUsageObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconController *iconController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentPrediction;
- (id)delegate;
- (void)deviceLockStateDidChange:(id)arg1;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteCurrentPageIndexChanged:(unsigned long long)arg2;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteDataSourceDidAppear:(id)arg2 forWidgetIcon:(id)arg3;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteDataSourceDidDisappear:(id)arg2 forWidgetIcon:(id)arg3;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteRootControllerWillAppearWithPageIndex:(unsigned long long)arg2;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteTodayViewAtLocation:(long long)arg2 scrolledWithIconVisibility:(id)arg3;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteUserAddedWidgetIconStackSuggestion:(id)arg2;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteUserDislikedSiriSuggestionOnWidgetIconStackSuggestion:(id)arg2;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteUserDislikedWidgetIconStackSuggestion:(id)arg2;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteUserTappedWidgetIcon:(id)arg2 withURL:(id)arg3;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconStackChangedActiveWidget:(id)arg2;
- (void)homeScreenUsageAggregator:(id)arg1 widgetDiscoverabilityDidAcceptSuggestion:(id)arg2;
- (void)homeScreenUsageAggregator:(id)arg1 widgetDiscoverabilityDidRejectSuggestion:(id)arg2;
- (void)homeScreenUsageAggregatorDidNoteHomeScreenLayoutChanged:(id)arg1;
- (void)homeScreenUsageAggregatorDidStartDiscoveringWidgets:(id)arg1;
- (void)homeScreenUsageAggregatorWidgetDiscoverabilityDidEnterEditingMode:(id)arg1;
- (id)iconController;
- (id)iconModel;
- (id)initWithIconController:(id)arg1;
- (void)logHomeScreenPageDidAppearWithPageIndex:(unsigned long long)arg1;
- (void)logTodayViewDidAppear;
- (id)proactiveStackForWidgetIcon:(id)arg1 atIndex:(unsigned long long)arg2 gridCellInfo:(id)arg3;
- (id)proactiveWidgetForIconDataSource:(id)arg1 ofIcon:(id)arg2;
- (id)proactiveWidgetForWidget:(id)arg1 ofIcon:(id)arg2;
- (void)pushCurrentDockConfiguration;
- (void)pushCurrentHomeScreenConfiguration;
- (void)pushCurrentHomeScreenPagesConfiguration;
- (void)pushCurrentTodayConfiguration;
- (id)rootFolder;
- (void)setCurrentPrediction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)widgetIdentifiablesDictionaryForIconListModel:(id)arg1;

@end
