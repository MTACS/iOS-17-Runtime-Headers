
@interface ATXHomeScreenWidgetDiscoverabilityLogHarvester : NSObject {
    BMAppLaunchStream * _appLaunchStream;
    NSMutableDictionary * _appMetricsAccumulator;
    NSMutableDictionary * _appUsageDictionary;
    NSUserDefaults * _defaults;
    NSDictionary * _globalPopularityDictionary;
    bool  _isiPad;
    NSMutableArray * _metricsPerAlgorithm;
    NSArray * _thirdPartyAppsSortedByUsage;
    ATXTimelineRelevanceAdoption * _timelineRelevanceAdoptionHelper;
    NSSet * _topTwentyInstalled3PApps;
    NSMutableDictionary * _widgetDiscoverabilityDictionaries;
}

- (void).cxx_destruct;
- (id)_appLaunchCountForAppBundleId:(id)arg1;
- (id)_fetchStackSuggestionsWithDefaultStack:(id)arg1;
- (id)_generateSummaryMetricsWithDescriptorCache:(id)arg1 withActivity:(id)arg2;
- (void)_generateWidgetDiscoverabilityMetricsWithHomeScreenItemProducer:(id)arg1 descriptors:(id)arg2 appMetrics:(id)arg3 algorithm:(int)arg4;
- (id)_globalPopularityDictionary;
- (id)_initializeMetricsAccumulatorWithKeys:(id)arg1;
- (id)_installed3PAppsSortedByUsage;
- (id)_installed3PAppsWithWidgetsSortedByUsage;
- (id)_installedAppsSortedByAppUsage;
- (bool)_isRegularlyUsedApp:(id)arg1;
- (void)_logAdblClassificationForUser;
- (void)_logRankBasedMetricsWithOnboardingStacks:(id)arg1 algorithm:(int)arg2;
- (void)_populateDistributionBasedMetricsWithAppMetrics:(id)arg1;
- (void)_populateRankBasedGlobalPopularityMetricsForWidgetPersonality:(id)arg1 withRank:(id)arg2 adoptionScore:(id)arg3;
- (void)_populateRankBasedMetricsForUsageWithRank:(id)arg1 appBundleId:(id)arg2 mostRegularlyUsedApp:(id)arg3 secondMostRegularlyUsedApp:(id)arg4;
- (void)_populateRankBasedTimelineAdoptionMetricsForWidgetPersonality:(id)arg1 withRank:(id)arg2 adoptionScore:(id)arg3;
- (void)_queryAppUsageForAllInstalledApps;
- (id)_setOfTopTwentyInstalled3PApps;
- (id)_shortDescriptionForAlgorithm:(int)arg1;
- (bool)_shouldConsiderWidgetWhenCalculatingRankBasedMetricsWithFamilyMask:(unsigned long long)arg1;
- (id)_topTwentyInstalled3PAppsSortedByUsage;
- (id)_uniqueDaysAppHasBeenLaunchedOverLast28Days:(id)arg1;
- (id)dryRunResult;
- (void)generateWidgetDiscoverabilityMetricsWithActivity:(id)arg1;
- (id)init;
- (void)sendToCoreAnalytics;

@end
