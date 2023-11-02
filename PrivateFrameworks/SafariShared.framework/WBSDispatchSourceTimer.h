
@interface WBSDispatchSourceTimer : NSObject {
    id /* block */  _handler;
    double  _interval;
    bool  _repeats;
    double  _startDelay;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, readonly) double interval;
@property (nonatomic, readonly) bool repeats;
@property (nonatomic, readonly) double startDelay;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)scheduledRepeatingTimerWithStartDelay:(double)arg1 interval:(double)arg2 handler:(id /* block */)arg3;
+ (id)scheduledTimerWithInterval:(double)arg1 repeats:(bool)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_initWithStartDelay:(double)arg1 interval:(double)arg2 repeats:(bool)arg3 handler:(id /* block */)arg4;
- (void)_scheduleTimer;
- (void)dealloc;
- (id /* block */)handler;
- (double)interval;
- (void)invalidate;
- (bool)isValid;
- (bool)repeats;
- (void)resetFireDate;
- (void)schedule;
- (double)startDelay;

@end
