
@interface MTSampling : NSObject {
    NSMutableDictionary * _sessions;
}

@property (nonatomic, retain) NSMutableDictionary *sessions;

- (void).cxx_destruct;
- (void)clearSessionWithEventType:(id)arg1;
- (id)init;
- (bool)isSampledInWithEventType:(id)arg1 samplingForced:(id)arg2 sessionSamplingPercentage:(id)arg3 sessionDuration:(id)arg4 samplingPercentage:(id)arg5;
- (bool)isSampledInWithEventType:(id)arg1 sessionSamplingPercentage:(double)arg2 sessionDurationMs:(unsigned long long)arg3;
- (bool)isSampledInWithMetricsData:(id)arg1;
- (bool)isSampledInWithSamplingPercentage:(double)arg1;
- (id)sessions;
- (void)setSessions:(id)arg1;

@end
