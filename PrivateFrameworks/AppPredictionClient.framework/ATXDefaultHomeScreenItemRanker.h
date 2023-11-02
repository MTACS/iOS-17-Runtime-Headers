
@interface ATXDefaultHomeScreenItemRanker : NSObject {
    NSDictionary * _appLaunchCounts;
    NSDictionary * _cachedRankerDictionary;
    NSMutableDictionary * _cachedWidgetPersonalityToAppScore;
    <ATXCategoricalHistogramProtocol> * _spotlightAppLaunchHistogram;
}

+ (long long)_downrankComparator:(id)arg1 widget2:(id)arg2;
+ (bool)_shouldDownrankWidget:(id)arg1;
+ (void)filterOutDuplicateWidgetsFromSameAppBundleId:(id)arg1;
+ (id)stringForAlgorithmType:(int)arg1;

- (void).cxx_destruct;
- (unsigned long long)_appUsageFrequencyForWidget:(id)arg1 regularlyUsedThreshold:(double)arg2;
- (void)_filterOutWidgetsNotFromTopLaunchedApps:(id)arg1;
- (void)_filterOutWidgetsThatAreNotRegularlyUsed:(id)arg1 regularlyUsedThreshold:(double)arg2;
- (id)_globalPopularityPlistStringKey:(int)arg1;
- (long long)_rankerDictionaryComparator:(id)arg1 timelineRelevanceAdoptionHelper:(id)arg2 widget1:(id)arg3 widget2:(id)arg4;
- (id)_rankerPlistToDictionary:(int)arg1;
- (double)_rawLaunchScoreForWidget:(id)arg1;
- (id)_scoreForWidget:(id)arg1 withGlobalPopularityDictionary:(id)arg2;
- (void)_sortWidgets:(id)arg1 byRankerPlist:(int)arg2 shouldDownRankAlreadyInstalledWidgets:(bool)arg3;
- (void)_sortWidgetsByDistinctDaysAppWasLaunched:(id)arg1 shouldDownRankAlreadyInstalledWidgets:(bool)arg2;
- (void)_sortWidgetsByRawLaunchCounts:(id)arg1 shouldDownRankAlreadyInstalledWidgets:(bool)arg2;
- (id)_timelineRelevanceAdoptionHelper:(int)arg1;
- (long long)_uniqueDaysLaunchedComparatorForWidget1:(id)arg1 widget2:(id)arg2;
- (double)_uniqueDaysLaunchedScoreForWidget:(id)arg1;
- (id)_widgetsBySortingAndFilteringWidgets:(id)arg1 byAppLaunchAndRankerPlist:(int)arg2 regularlyUsedThreshold:(double)arg3;
- (id)initWithCachedWidgetPersonalityToAppScore:(id)arg1 spotlightAppLaunchHistogram:(id)arg2 appLaunchCounts:(id)arg3;
- (id)widgetsBySortingAndFilteringWidgetsUsingOnboardingStacksAlgorithm:(id)arg1 algorithm:(int)arg2 regularlyUsedThreshold:(double)arg3;
- (id)widgetsBySortingAndFilteringWidgetsUsingPersonalizedGalleryAlgorithm:(id)arg1 rankerPlistType:(int)arg2 regularlyUsedThreshold:(double)arg3;
- (id)widgetsBySortingAndFilteringWidgetsUsingPersonalizedTodayandAddSheetStackAlgorithm:(id)arg1 rankerPlistType:(int)arg2 regularlyUsedThreshold:(double)arg3;
- (id)widgetsBySortingWidgetsUsingDayZeroGalleryAlgorithm:(id)arg1;

@end
