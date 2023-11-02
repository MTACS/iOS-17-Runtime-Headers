
@interface NUScheduledQueue : NSObject {
    NSMutableArray * _items;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
    double  _timerCoalesce;
    double  _timerLeeway;
}

@property double timerCoalesce;
@property double timerLeeway;

- (void).cxx_destruct;
- (void)_dispatchItemsThrough:(unsigned long long)arg1;
- (void)_scheduleTimer:(unsigned long long)arg1;
- (void)_startTimer;
- (void)_stopTimer;
- (void)_timerFired;
- (void)dealloc;
- (void)dispatchAfter:(double)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (void)dispatchAt:(unsigned long long)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)init;
- (void)setTimerCoalesce:(double)arg1;
- (void)setTimerLeeway:(double)arg1;
- (double)timerCoalesce;
- (double)timerLeeway;

@end
