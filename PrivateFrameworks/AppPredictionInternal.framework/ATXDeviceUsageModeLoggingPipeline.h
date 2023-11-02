
@interface ATXDeviceUsageModeLoggingPipeline : NSObject {
    BPSPublisher * _displayIntervalPublisher;
    unsigned long long  _lastActivityType;
    double  _lastEventTimestamp;
    BPSPublisher * _modeTransitionPublisher;
}

@property (nonatomic, readonly) BPSPublisher *displayIntervalPublisher;
@property (nonatomic, readonly) BPSPublisher *modeTransitionPublisher;

- (void).cxx_destruct;
- (id)_coalesceAndFilterDisplayOnIntervals:(id)arg1;
- (bool)_shouldCoalesceOnInterval:(id)arg1 nextInterval:(id)arg2;
- (id)displayIntervalPublisher;
- (id)displayIntervalsFromStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;
- (id)initWithModeTransitionPublisher:(id)arg1 displayIntervalPublisher:(id)arg2 lastEventTimestamp:(double)arg3 lastActivityType:(unsigned long long)arg4;
- (unsigned long long)lastKnownActivityFromStore;
- (double)lastPipelineRunTimestampFromStore;
- (void)logDeviceUsage;
- (void)logDeviceUsageWithXPCActivity:(id)arg1;
- (id)modeTransitionPublisher;
- (void)persistState;
- (id)timeMergedPublisherFromEventPublishers:(id)arg1 modeTransitionPublisher:(id)arg2;

@end
