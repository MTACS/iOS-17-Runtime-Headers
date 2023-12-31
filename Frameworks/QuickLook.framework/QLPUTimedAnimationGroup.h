
@interface QLPUTimedAnimationGroup : QLPUAnimationGroup {
    bool  _areAnimationsPaused;
    double  _beginTime;
    double  _pausedElapsedTime;
}

@property (nonatomic) double beginTime;
@property (nonatomic, readonly) double currentTime;

- (void)_update;
- (double)beginTime;
- (double)currentTime;
- (double)elapsedTime;
- (id)init;
- (void)pauseAnimations;
- (void)resumeAnimations;
- (void)setBeginTime:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)updateAnimations;

@end
