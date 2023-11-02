
@interface VKSpringAnimation : VKAnimation {
    float  _friction;
    float  _lastFraction;
    double  _lastTimestamp;
    float  _lastVelocity;
    bool  _resuming;
    double  _startTimestamp;
    bool  _startTimestampSet;
    id /* block */  _stepHandler;
    float  _tension;
}

@property (nonatomic, readonly) float friction;
@property (nonatomic, copy) id /* block */ stepHandler;
@property (nonatomic, readonly) float tension;

- (void).cxx_destruct;
- (bool)_calculateFractionForTimeElapsed:(double)arg1 result:(float*)arg2;
- (float)friction;
- (id)initWithTension:(float)arg1 friction:(float)arg2 name:(id)arg3;
- (void)onTimerFired:(double)arg1;
- (void)pause;
- (void)resume;
- (void)setStepHandler:(id /* block */)arg1;
- (id /* block */)stepHandler;
- (void)stopAnimation:(bool)arg1;
- (float)tension;

@end
