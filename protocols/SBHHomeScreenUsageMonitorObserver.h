
@protocol SBHHomeScreenUsageMonitorObserver <NSObject>

@optional

- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 didNoteCurrentPageIndexChanged:(unsigned long long)arg2;
- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 didNoteDataSourceDidAppear:(id <SBLeafIconDataSource>)arg2 forWidgetIcon:(SBWidgetIcon *)arg3;
- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 didNoteDataSourceDidDisappear:(id <SBLeafIconDataSource>)arg2 forWidgetIcon:(SBWidgetIcon *)arg3;
- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 didNoteRootControllerWillAppearWithPageIndex:(unsigned long long)arg2;
- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 didNoteTodayViewAtLocation:(long long)arg2 scrolledWithIconVisibility:(NSMapTable *)arg3;
- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 didNoteUserAddedWidgetIconStackSuggestion:(SBWidgetIcon *)arg2;
- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 didNoteUserDislikedSiriSuggestionOnWidgetIconStackSuggestion:(SBWidgetIcon *)arg2;
- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 didNoteUserDislikedWidgetIconStackSuggestion:(SBWidgetIcon *)arg2;
- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 didNoteUserTappedWidgetIcon:(SBWidgetIcon *)arg2 withURL:(NSURL *)arg3;
- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 didNoteWidgetIconAdded:(SBWidgetIcon *)arg2;
- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 didNoteWidgetIconRemoved:(SBWidgetIcon *)arg2;
- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 didNoteWidgetIconStackChangedActiveWidget:(SBWidgetIcon *)arg2;
- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 widgetDiscoverabilityDidAcceptSuggestion:(NSArray *)arg2;
- (void)homeScreenUsageAggregator:(SBHHomeScreenUsageMonitor *)arg1 widgetDiscoverabilityDidRejectSuggestion:(NSArray *)arg2;
- (void)homeScreenUsageAggregatorAddWidgetSheetWillPresent:(SBHHomeScreenUsageMonitor *)arg1;
- (void)homeScreenUsageAggregatorDidNoteEditingModeEntered:(SBHHomeScreenUsageMonitor *)arg1;
- (void)homeScreenUsageAggregatorDidNoteHomeScreenLayoutChanged:(SBHHomeScreenUsageMonitor *)arg1;
- (void)homeScreenUsageAggregatorDidStartDiscoveringWidgets:(SBHHomeScreenUsageMonitor *)arg1;
- (void)homeScreenUsageAggregatorWidgetDiscoverabilityDidEnterEditingMode:(SBHHomeScreenUsageMonitor *)arg1;

@end
