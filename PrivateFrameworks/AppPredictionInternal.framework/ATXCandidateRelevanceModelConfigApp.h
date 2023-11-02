
@interface ATXCandidateRelevanceModelConfigApp : ATXCandidateRelevanceModelConfig {
    ATXAppPredictionBlacklist * _appBlacklist;
    ATXDigitalHealthBlacklist * _appDigitalHealthBlacklist;
    _ATXRecentInstallCache * _recentInstallCache;
}

@property (nonatomic, retain) ATXAppPredictionBlacklist *appBlacklist;
@property (nonatomic, retain) ATXDigitalHealthBlacklist *appDigitalHealthBlacklist;
@property (nonatomic, retain) _ATXRecentInstallCache *recentInstallCache;

- (void).cxx_destruct;
- (id)appBlacklist;
- (id)appDigitalHealthBlacklist;
- (id)appInstallAgesForAppsWithExcludedApps:(id)arg1 appInfoManager:(id)arg2;
- (bool)bundleIdIsEnabledForPrediction:(id)arg1;
- (bool)candidateIsStillValidToSuggest:(id)arg1;
- (id)candidatePublisherFromStartTime:(double)arg1;
- (id)datasetGenerator;
- (id)heuristicSuggestionsForContext:(id)arg1 currentSuggestionExecutableIds:(id)arg2;
- (id)heuristicSuggestionsForContext:(id)arg1 currentSuggestionExecutableIds:(id)arg2 appInfoManager:(id)arg3;
- (id)init;
- (id)proactiveSuggestionForBundleId:(id)arg1 prediction:(float)arg2;
- (id)proactiveSuggestionForCandidate:(id)arg1 prediction:(float)arg2;
- (id)recentInstallCache;
- (id)recentlyInstalledAndNotLaunchedAppsFromAppInfoManager:(id)arg1 currentSuggestionExecutableIds:(id)arg2 launchedApps:(id)arg3;
- (id)recentlyLaunchedAppsFromAppLaunchAges:(id)arg1;
- (void)setAppBlacklist:(id)arg1;
- (void)setAppDigitalHealthBlacklist:(id)arg1;
- (void)setRecentInstallCache:(id)arg1;

@end
