
@interface UISApplicationStateClient : NSObject <BSInvalidatable> {
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    BSServiceConnection * _queue_connection;
    bool  _queue_invalidated;
}

@property (nonatomic, copy) NSString *badgeValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double nextWakeIntervalSinceReferenceDate;
@property (readonly) Class superclass;
@property (nonatomic) bool usesBackgroundNetwork;

- (void).cxx_destruct;
- (id)_remoteTarget;
- (id)badgeValue;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)invalidate;
- (double)nextWakeIntervalSinceReferenceDate;
- (void)setBadgeValue:(id)arg1;
- (void)setMinimumBackgroundFetchInterval:(double)arg1;
- (void)setNextWakeIntervalSinceReferenceDate:(double)arg1;
- (void)setUsesBackgroundNetwork:(bool)arg1;
- (bool)usesBackgroundNetwork;

@end
