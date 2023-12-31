
@interface VKTimedAnimation : VKAnimation {
    double  _duration;
    double  _lastTimestamp;
    bool  _resuming;
    double  _startTimestamp;
    bool  _startTimestampSet;
    id /* block */  _stepHandler;
    id /* block */  _timingFunction;
}

@property (nonatomic, copy) id /* block */ stepHandler;
@property (nonatomic, copy) id /* block */ timingFunction;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

+ (void)setDragCoefficientGetter:(id /* block */)arg1;

- (void).cxx_destruct;
- (double)duration;
- (id)init;
- (id)initWithDuration:(double)arg1;
- (id)initWithDuration:(double)arg1 name:(id)arg2;
- (id)initWithDuration:(double)arg1 priority:(long long)arg2 name:(id)arg3;
- (id)initWithName:(id)arg1;
- (void)onTimerFired:(double)arg1;
- (void)pause;
- (void)resume;
- (void)setDuration:(double)arg1;
- (void)setStepHandler:(id /* block */)arg1;
- (void)setTimingFunction:(id /* block */)arg1;
- (id /* block */)stepHandler;
- (void)stopAnimation:(bool)arg1;
- (bool)timed;
- (id /* block */)timingFunction;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)animationMatchingCurrentAnimationParametersWithName:(id)arg1;

@end
