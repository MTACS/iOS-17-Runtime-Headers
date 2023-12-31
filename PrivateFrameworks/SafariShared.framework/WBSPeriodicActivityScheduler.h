
@interface WBSPeriodicActivityScheduler : NSObject {
    id /* block */  _block;
    double  _interval;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _queue;
    NSTimer * _timer;
}

- (void).cxx_destruct;
- (void)_performActivity;
- (void)_scheduleActivityWithInterval:(double)arg1;
- (void)_timerDidFire:(id)arg1;
- (id)init;
- (id)initWithInterval:(double)arg1 minimumDelay:(double)arg2 lastFireDate:(id)arg3 block:(id /* block */)arg4;
- (void)invalidate;

@end
