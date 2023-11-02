
@interface SASAnalytics : NSObject {
    NSObject<OS_dispatch_queue> * _analyticsEventQueue;
    NSMutableArray * _pendingAnalyticsEventQueue;
    bool  _shouldLogAnalyticsEvents;
}

@property (nonatomic, retain) NSMutableArray *pendingAnalyticsEventQueue;
@property (nonatomic) bool shouldLogAnalyticsEvents;

+ (id)analytics;
+ (id)new;

- (void).cxx_destruct;
- (void)_enqueueAnalyticsEvent:(id)arg1;
- (id)_init;
- (void)enqueueCurrentAnalyticsEventWithType:(long long)arg1 context:(id)arg2;
- (void)flushPendingAnalyticsEventQueue;
- (id)init;
- (id)pendingAnalyticsEventQueue;
- (void)setPendingAnalyticsEventQueue:(id)arg1;
- (void)setShouldLogAnalyticsEvents:(bool)arg1;
- (bool)shouldLogAnalyticsEvents;

@end
