
@interface REUpNextTimer : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_source> * _dispatch_timer;
    NSDateInterval * _fireInterval;
    NSDate * _lastFireDate;
    NSObject<OS_dispatch_queue> * _queue;
    double  _rate;
}

@property (nonatomic, readonly) id /* block */ block;
@property (retain) NSObject<OS_dispatch_source> *dispatch_timer;
@property (nonatomic, readonly) NSDateInterval *fireInterval;
@property (nonatomic, readonly) double rate;
@property (getter=isValid, readonly) bool valid;

+ (id)timerWithFireDate:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
+ (id)timerWithFireInterval:(id)arg1 atRate:(double)arg2 queue:(id)arg3 block:(id /* block */)arg4;
+ (id)timerWithInterval:(double)arg1 queue:(id)arg2 block:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_handleTimer;
- (bool)_isNowRepeatingTimerWithCurrentDate:(id)arg1;
- (void)_rescheduleTimer;
- (void)_scheduleTimerWithInterval:(id)arg1 rate:(double)arg2;
- (id /* block */)block;
- (void)dealloc;
- (id)dispatch_timer;
- (id)fireInterval;
- (id)initWithDateInterval:(id)arg1 rate:(double)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (void)invalidate;
- (bool)isValid;
- (double)rate;
- (void)setDispatch_timer:(id)arg1;

@end
