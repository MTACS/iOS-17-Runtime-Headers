
@interface VKDynamicAnimation : VKAnimation {
    id /* block */  _dynamicStepHandler;
    double  _lastTimestamp;
    bool  _resuming;
}

@property (nonatomic, copy) id /* block */ dynamicStepHandler;

- (void).cxx_destruct;
- (id /* block */)dynamicStepHandler;
- (id)init;
- (void)onTimerFired:(double)arg1;
- (void)pause;
- (void)resume;
- (bool)runsForever;
- (void)setDynamicStepHandler:(id /* block */)arg1;
- (void)setRunsForever:(bool)arg1;
- (void)stopAnimation:(bool)arg1;

@end
