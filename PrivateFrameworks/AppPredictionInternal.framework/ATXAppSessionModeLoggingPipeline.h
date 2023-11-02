
@interface ATXAppSessionModeLoggingPipeline : NSObject {
    BPSPublisher * _appLaunchPublisher;
    NSString * _bookmarkFilepath;
    unsigned long long  _lastActivityType;
    double  _lastEventTimestamp;
    BPSPublisher * _modeTransitionPublisher;
    BPSPublisher * _notificationEventPublisher;
}

@property (nonatomic, readonly) BPSPublisher *appLaunchPublisher;
@property (nonatomic, readonly) NSString *bookmarkFilepath;
@property (nonatomic, readonly) BPSPublisher *modeTransitionPublisher;
@property (nonatomic, readonly) BPSPublisher *notificationEventPublisher;

- (void).cxx_destruct;
- (id)appLaunchPublisher;
- (id)bookmarkFilepath;
- (id)init;
- (id)initWithModeTransitionPublisher:(id)arg1 appLaunchPublisher:(id)arg2 notificationEventPublisher:(id)arg3 lastEventTimestamp:(double)arg4 lastActivityType:(unsigned long long)arg5;
- (unsigned long long)lastKnownActivityFromStore;
- (double)lastPipelineRunTimestampFromStore;
- (void)logAppSessionMetrics;
- (void)logAppSessionMetricsWithXPCActivity:(id)arg1;
- (id)modeTransitionPublisher;
- (id)notificationEventPublisher;
- (void)persistState;
- (id)timeMergedPublisherFromEventPublishers:(id)arg1 modeTransitionPublisher:(id)arg2;

@end
