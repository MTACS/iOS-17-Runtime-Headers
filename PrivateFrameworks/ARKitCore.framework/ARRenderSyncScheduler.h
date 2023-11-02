
@interface ARRenderSyncScheduler : NSObject {
    NSMutableArray * _blocks;
    ARDisplayLink * _displayLink;
    unsigned long long  _excessiveCallbackOptions;
    bool  _initialLatencyReached;
    double  _inputJitterBufferInterval;
    ARRollingNumberSeries * _latencies;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _reportAdjustments;
    bool  _schedulingActive;
}

@property unsigned long long excessiveCallbackOptions;
@property long long expectedFramesPerSecond;
@property double inputJitterBufferInterval;
@property bool schedulingActive;
@property double vsyncOffset;

- (void).cxx_destruct;
- (void)_callback;
- (unsigned long long)_callbackActionForBlockWithLatency:(double)arg1;
- (void)_tryNextBlockWithTotalTried:(unsigned long long)arg1;
- (unsigned long long)excessiveCallbackOptions;
- (long long)expectedFramesPerSecond;
- (id)init;
- (id)initWithExpectedFramesPerSecond:(long long)arg1;
- (double)inputJitterBufferInterval;
- (bool)schedulingActive;
- (void)setExcessiveCallbackOptions:(unsigned long long)arg1;
- (void)setExpectedFramesPerSecond:(long long)arg1;
- (void)setInputJitterBufferInterval:(double)arg1;
- (void)setSchedulingActive:(bool)arg1;
- (void)setVsyncOffset:(double)arg1;
- (void)submitBlock:(id /* block */)arg1;
- (double)vsyncOffset;

@end
