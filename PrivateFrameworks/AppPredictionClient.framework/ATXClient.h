
@interface ATXClient : NSObject {
    ATXCacheReader * _cacheReader;
    unsigned long long  _consumerType;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (id)clientForConsumerType:(unsigned long long)arg1;
+ (id)clientForConsumerType:(unsigned long long)arg1 cacheBasePath:(id)arg2;
+ (id)clientForConsumerType:(unsigned long long)arg1 cachePath:(const char *)arg2;
+ (id)dayZeroBundleIdsAndScoresFromDayZeroParameters:(id)arg1;

- (void).cxx_destruct;
- (id)_asyncProxy;
- (id)_getConnection;
- (id)_minuteZeroResponse;
- (id)_predicateForDenyList:(id)arg1;
- (id)_simulatorResponse;
- (id)_syncProxy;
- (id)appPredictionsForConsumerSubType:(unsigned char)arg1 blackList:(id)arg2 limit:(int)arg3 runningDiagnostics:(bool)arg4;
- (id)appPredictionsForConsumerSubType:(unsigned char)arg1 limit:(int)arg2;
- (id)approvedSiriKitIntents;
- (id)atxResponseFromBlendingAppPredictionCacheForConsumerSubType:(unsigned char)arg1 filterPredicate:(id)arg2 limit:(int)arg3;
- (void)dealloc;
- (bool)forceCacheUpdateForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateIntentTypeIdentifiers:(id)arg4;
- (id)getAppPredictorAssetMappingDescription;
- (void)getWebsitePredictionsForContextType:(id)arg1 limit:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (id)init;
- (id)initWithConsumerType:(unsigned long long)arg1 cacheBasePath:(id)arg2;
- (void)logUserFeedback:(id)arg1 consumerSubType:(unsigned char)arg2 engagementType:(unsigned long long)arg3 bundleIdentifier:(id)arg4 bundleIdsShown:(id)arg5 explicitlyRejectedIds:(id)arg6;
- (void)overwriteWebsitePredictionsCacheWithWebsiteString:(id)arg1 contextType:(id)arg2;
- (bool)shouldPredictAppBundleId:(id)arg1;
- (bool)shouldPredictBundleIdForShortcuts:(id)arg1 action:(id)arg2;
- (bool)shouldPredictBundleIdForShortcuts:(id)arg1 action:(id)arg2 forPrimaryShortcuts:(bool)arg3;
- (void)sortAppsByLaunches:(id)arg1 reply:(id /* block */)arg2;
- (id)xpcConnection;

@end
