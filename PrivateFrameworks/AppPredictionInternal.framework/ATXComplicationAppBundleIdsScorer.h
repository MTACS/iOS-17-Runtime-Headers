
@interface ATXComplicationAppBundleIdsScorer : NSObject {
    BMAppLaunchStream * _appLaunchStream;
    ATXHomeScreenConfigCache * _hsCache;
    ATXComplicationSuggestionParameters * _parameters;
    ATXWatchFaceConfigurationCollector * _watchFaceConfiguration;
}

- (void).cxx_destruct;
- (id)_scoredComplicationBundleIdsForModularSet:(id)arg1 bundleIdToAppLaunchData:(id)arg2 bundleIdToPriors:(id)arg3 widgetAppBundleIdsOnHomeScreen:(id)arg4 complicationBundleIdCountsOnWatch:(id)arg5;
- (id)_widgetAppBundleIdsOnHomeScreen;
- (id)init;
- (id)inputDescriptionForSignal:(id)arg1 complicationAppBundleIds:(id)arg2;
- (id)rankedComplicationAppBundleIdsGivenComplicationAppBundleIds:(id)arg1 bundleIdToAppLaunchData:(id)arg2 bundleIdToPriors:(id)arg3 widgetAppBundleIdsOnHomeScreen:(id)arg4;
- (id)scoredComplicationBundleIdsForModularSet:(id)arg1;

@end
