
@interface VIAEventCache : NSObject {
    NSMutableDictionary * _appToEventMap;
    NSObject<OS_dispatch_queue> * _queue;
    <VIAnalyticsTestingDelegate> * _testingDelegate;
}

@property (nonatomic) <VIAnalyticsTestingDelegate> *testingDelegate;

- (void).cxx_destruct;
- (id)_cachedEventsForBundleID:(id)arg1;
- (void)cacheEvent:(id)arg1;
- (id)cachedEventForBundleID:(id)arg1 queryID:(unsigned long long)arg2;
- (id)initWithQueue:(id)arg1;
- (void)setTestingDelegate:(id)arg1;
- (id)testingDelegate;

@end
