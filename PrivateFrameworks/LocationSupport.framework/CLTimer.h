
@interface CLTimer : NSObject {
    double  _delaySetAtTime;
    double  _fireInterval;
    id /* block */  _handler;
    double  _nextFireDelay;
    <CLTimerScheduler> * _scheduler;
    CLSilo * _silo;
}

@property (nonatomic) double fireInterval;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) double nextFireDelay;
@property (nonatomic) double nextFireTime;

- (void).cxx_destruct;
- (void)dbgAssertInside;
- (double)fireInterval;
- (id /* block */)handler;
- (id)initInSilo:(id)arg1 withScheduler:(id)arg2;
- (void)invalidate;
- (double)nextFireDelay;
- (double)nextFireDelayRaw;
- (double)nextFireTime;
- (void)setFireInterval:(double)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setNextFireDelay:(double)arg1;
- (void)setNextFireDelay:(double)arg1 interval:(double)arg2;
- (void)setNextFireTime:(double)arg1;
- (void)setNextFireTime:(double)arg1 interval:(double)arg2;
- (void)shouldFire;
- (void)updateScheduler;

@end
