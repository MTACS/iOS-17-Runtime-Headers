
@interface LNDebouncer : NSObject {
    id /* block */  _block;
    double  _delay;
    LNWatchdogTimer * _longTimer;
    double  _maxDelay;
    NSObject<OS_dispatch_queue> * _queue;
    LNWatchdogTimer * _timer;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) LNWatchdogTimer *longTimer;
@property (nonatomic, readonly) double maxDelay;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) LNWatchdogTimer *timer;

- (void).cxx_destruct;
- (id /* block */)block;
- (double)delay;
- (id)initWithDelay:(double)arg1 maxDelay:(double)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (id)longTimer;
- (double)maxDelay;
- (id)queue;
- (id)timer;
- (void)trigger;

@end
