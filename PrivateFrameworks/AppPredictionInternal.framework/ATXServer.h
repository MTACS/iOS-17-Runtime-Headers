
@interface ATXServer : NSObject <ATXClientXPCInterface, NSXPCListenerDelegate> {
    NSString * _cacheFileBasePath;
    NSMutableDictionary * _cacheFileDescriptors;
    <ATXPredictionContextBuilderProtocol> * _contextBuilder;
    NSXPCListener * _listener;
    NSString * _machServiceName;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)consumerSubTypesToUpdate;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)approvedSiriKitIntentsWithReply:(id /* block */)arg1;
- (id)consumerSubTypesToUpdateWithRefreshRate:(double)arg1 disabledConsumerSubTypes:(id)arg2 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(bool)arg3;
- (void)dealloc;
- (void)generateNewAppPredictionsForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateIntentTypeIdentifiers:(id)arg4 featureCache:(id)arg5 reply:(id /* block */)arg6;
- (void)generateNewAppPredictionsForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateIntentTypeIdentifiers:(id)arg4 reply:(id /* block */)arg5;
- (void)getAppPredictorAssetMappingDescriptionWithReply:(id /* block */)arg1;
- (void)getWebsitePredictionsForContextType:(id)arg1 limit:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (id)init;
- (id)initWithCacheFileBasePath:(id)arg1 machServiceName:(id)arg2 predictionContextBuilder:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)overwriteWebsitePredictionsCacheWithWebsiteString:(id)arg1 contextType:(id)arg2;
- (void)sendFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 atxResponse:(id)arg3 engagementType:(unsigned long long)arg4 engagedBundleId:(id)arg5 bundleIdsShown:(id)arg6 explicitlyRejectedBundleIds:(id)arg7 reply:(id /* block */)arg8;
- (void)shouldPredictAppBundleId:(id)arg1 reply:(id /* block */)arg2;
- (void)shouldPredictBundleIdForShortcuts:(id)arg1 action:(id)arg2 forPrimaryShortcuts:(bool)arg3 reply:(id /* block */)arg4;
- (void)sortAppsByLaunches:(id)arg1 reply:(id /* block */)arg2;
- (bool)syncGenerateNewAppPredictionsForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateIntentTypeIdentifiers:(id)arg4 featureCache:(id)arg5;
- (bool)updateAppPredictionsWithConsumerSubTypes:(id)arg1 featureCache:(id)arg2;
- (void)updateBlendingLayerForAllConsumerSubTypes;

@end
