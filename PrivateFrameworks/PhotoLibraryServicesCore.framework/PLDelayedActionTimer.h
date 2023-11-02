
@interface PLDelayedActionTimer : NSObject {
    double  _delay;
    double  _end;
    double  _start;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property (nonatomic, readonly) bool isRunning;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic, readonly) double timeRemaining;

- (void).cxx_destruct;
- (void)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithTargetQueue:(id)arg1;
- (bool)isRunning;
- (id)targetQueue;
- (double)timeRemaining;

@end
