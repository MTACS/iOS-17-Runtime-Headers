
@interface AIMLExperimentationAnalyticsManager : NSObject <AIMLExperimentationAnalytics> {
    AIMLExperimentationAnalyticsManagerInternal * _underlyingObject;
}

@property (nonatomic, readonly) AIMLExperimentationAnalyticsManagerInternal *underlyingObject;

- (void).cxx_destruct;
- (void)cacheTrialExperimentsForCodePathID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cacheTrialExperimentsIdentifiersForCodePathID:(id)arg1 namespaces:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)emitTriggerForCodePathID:(id)arg1 requestID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)emitTriggerFromCacheForCodePathID:(id)arg1 requestID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)underlyingObject;

@end
