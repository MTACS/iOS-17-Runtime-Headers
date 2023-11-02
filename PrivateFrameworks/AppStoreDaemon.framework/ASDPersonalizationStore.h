
@interface ASDPersonalizationStore : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)flushMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)getAppEventsWithCompletionBlock:(id /* block */)arg1;
- (void)getClusterMappingsWithCompletionBlock:(id /* block */)arg1;
- (void)getGroupingToken:(id /* block */)arg1;
- (void)getTasteProfileToken:(id /* block */)arg1;
- (id)init;
- (void)recordLaunchesWithCompletionBlock:(id /* block */)arg1;
- (void)recordMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)reloadClusterMappingsWithCompletionBlock:(id /* block */)arg1;
- (void)reportAppEvent:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)resetActorIDWithCompletionBlock:(id /* block */)arg1;
- (void)resetMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)sendMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)setClusterMapping:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setClusterMappings:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)tasteProfileFeatureEnabled:(id /* block */)arg1;

@end
