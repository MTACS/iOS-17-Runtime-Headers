
@interface SFAnalyticsCollection : NSObject {
    <SFAnalyticsCollectionAction> * _actions;
    NSMutableDictionary * _matchingRules;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _tearDownMetricsHook;
}

@property (retain) <SFAnalyticsCollectionAction> *actions;
@property (retain) NSMutableDictionary *matchingRules;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ tearDownMetricsHook;

- (void).cxx_destruct;
- (id)actions;
- (void)dealloc;
- (id)init;
- (id)initWithActionInterface:(id)arg1;
- (void)loadCollection:(id)arg1;
- (unsigned int)match:(id)arg1 eventClass:(long long)arg2 attributes:(id)arg3 bucket:(unsigned int)arg4 logger:(id)arg5;
- (id)matchingRules;
- (void)onQueue_stopMetricCollection;
- (id)parseCollection:(id)arg1 logger:(id)arg2;
- (id)queue;
- (void)setActions:(id)arg1;
- (void)setMatchingRules:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTearDownMetricsHook:(id /* block */)arg1;
- (void)setupMetricsHook:(id)arg1;
- (void)stopMetricCollection;
- (void)storeCollection:(id)arg1 logger:(id)arg2;
- (id /* block */)tearDownMetricsHook;

@end
