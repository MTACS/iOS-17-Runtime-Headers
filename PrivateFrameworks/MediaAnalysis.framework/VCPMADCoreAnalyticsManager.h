
@interface VCPMADCoreAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> * _managementQueue;
    NSMutableDictionary * _sessionAnalytics;
    unsigned long long  _sessionAnalyticsSentCount;
    unsigned long long  _singleAnalyticsSentCount;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)accumulateDoubleValue:(double)arg1 forField:(id)arg2 andEvent:(id)arg3;
- (void)accumulateInt64Value:(long long)arg1 forField:(id)arg2 andEvent:(id)arg3;
- (void)dealloc;
- (void)flush;
- (id)init;
- (void)sendEvent:(id)arg1 withAnalytics:(id)arg2;
- (void)sendSessionEvent:(id)arg1;
- (void)setValue:(id)arg1 forField:(id)arg2 andEvent:(id)arg3;
- (id)valueForField:(id)arg1 andEvent:(id)arg2;

@end
