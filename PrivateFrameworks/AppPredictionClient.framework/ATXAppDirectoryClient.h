
@interface ATXAppDirectoryClient : NSObject <ATXAppDirectoryInterface> {
    ATXProactiveSuggestionClient * _blendingClient;
    bool  _didSendFeedbackDuringSession;
    ATXEngagementRecordManager * _engagementRecordManager;
    <_DKKnowledgeSaving> * _knowledgeStore;
    _DKEventStream * _knowledgeStream;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    NSArray * _recentAppsVisible;
    NSArray * _topAppsVisible;
    <ATXPETEventTracker2Protocol> * _tracker;
    ATXUniversalBiomeUIStream * _uiStream;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) bool didSendFeedbackDuringSession;
@property (retain) NSArray *recentAppsVisible;
@property (retain) NSArray *topAppsVisible;

+ (id)_allPlaceholderBundleIdsFromHomeScreenService:(id)arg1;
+ (id)_readRecentAppsWithError:(id*)arg1;
+ (id)_sortedAllOtherBundleIDsFromAllBundleIDs:(id)arg1 allPlaceholderBundleIDs:(id)arg2 hardcodedAppCategoryMappings:(id)arg3;
+ (id)_sortedBundleIDsByCategoryWithHardcodedAppCategoryMappings:(id)arg1;
+ (id)_sortedDefaultCategories;
+ (id)hardcodedAppCategoryMappings;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addEngagedSuggestionToERM:(id)arg1;
- (id)_init;
- (void)_logCaptureRateCapture;
- (void)_logCaptureRateDiversionWithType:(int)arg1;
- (void)_logToBiome:(unsigned long long)arg1 metadata:(id)arg2;
- (void)_logToBiomeWithEventType:(unsigned long long)arg1 date:(id)arg2 blendingCacheUUID:(id)arg3 shownSuggestionIds:(id)arg4 engagedSuggestionIds:(id)arg5 categoryID:(id)arg6 categoryIndex:(id)arg7 bundleId:(id)arg8 bundleIndex:(id)arg9 searchQueryLength:(id)arg10 searchTab:(id)arg11 bundleIdInTopAppsVisible:(id)arg12 userLaunchedAppBeforeLeaving:(id)arg13;
- (void)_logToDuet:(unsigned long long)arg1 metadata:(id)arg2;
- (void)_resetSessionState;
- (id)_suggestionsPodDedupableBundleIds;
- (void)_updateTopAppsVisibilityWithCategories:(id)arg1;
- (void)appLaunchDatesWithReply:(id /* block */)arg1;
- (void)categoriesWithReply:(id /* block */)arg1;
- (void)categoriesWithShouldUseDefault:(bool)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (bool)didSendFeedbackDuringSession;
- (void)logCategoryExitWithDate:(id)arg1 categoryID:(unsigned long long)arg2 categoryIndex:(unsigned long long)arg3;
- (void)logCategoryExpansionWithDate:(id)arg1 categoryID:(unsigned long long)arg2 categoryIndex:(unsigned long long)arg3;
- (void)logCloseSearchWithDate:(id)arg1;
- (void)logDidEnterAppDirectoryWithDate:(id)arg1;
- (void)logDidLeaveAppDirectoryWithDate:(id)arg1 appDirectoryResponse:(id)arg2;
- (void)logLaunchFromCategoryPreviewWithDate:(id)arg1 categoryID:(unsigned long long)arg2 categoryIndex:(unsigned long long)arg3 bundleID:(id)arg4 bundleIndex:(unsigned long long)arg5 appDirectoryResponse:(id)arg6;
- (void)logLaunchFromExpandedCategoryWithDate:(id)arg1 categoryID:(unsigned long long)arg2 categoryIndex:(unsigned long long)arg3 bundleID:(id)arg4 bundleIndex:(unsigned long long)arg5 appDirectoryResponse:(id)arg6;
- (void)logLaunchFromSearchWithDate:(id)arg1 bundleID:(id)arg2 bundleIndex:(unsigned long long)arg3 searchQueryLength:(unsigned long long)arg4 searchTab:(unsigned long long)arg5 appDirectoryResponse:(id)arg6;
- (void)logOpenSearchWithDate:(id)arg1;
- (void)notifyBookmarksDidChange;
- (void)predictedAppsAndRecentAppsWithMaxNumberOfPredictedApps:(unsigned long long)arg1 shouldUseDefaultCategories:(bool)arg2 reply:(id /* block */)arg3;
- (void)predictedAppsAndRecentAppsWithShouldUseDefaultCategories:(bool)arg1 reply:(id /* block */)arg2;
- (id)recentAppsVisible;
- (void)requestNotificationWhenCategoriesAreReady;
- (void)setDidSendFeedbackDuringSession:(bool)arg1;
- (void)setRecentAppsVisible:(id)arg1;
- (void)setTopAppsVisible:(id)arg1;
- (id)topAppsVisible;

@end
