
@interface AFCoreAnalyticsLoggingService : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedLoggingService;

- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (void)logToCoreAnalyticsCrossDeviceRequestEvent:(id)arg1;

@end
