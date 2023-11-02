
@interface QLTAnalyticsManager : NSObject

+ (id)sharedManager;

- (id)_eventsQueue;
- (void)_sendEvent:(id)arg1;
- (void)sendCacheSizeEventWithCacheSize:(unsigned long long)arg1;

@end
