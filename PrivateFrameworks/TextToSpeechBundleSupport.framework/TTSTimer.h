
@interface TTSTimer : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _paused;
    NSMutableArray * _queue;
    NSObject<OS_dispatch_source> * _timer;
    NSLock * _timerLock;
}

- (void).cxx_destruct;
- (void)_createTimer;
- (void)_handleTimerFired;
- (void)_startTimer:(id)arg1;
- (void)clearQueue;
- (void)continueQueue;
- (void)dealloc;
- (void)enqueueBlock:(id /* block */)arg1 withDelay:(double)arg2 withId:(long long)arg3;
- (id)initWithDispatchQueue:(id)arg1;
- (void)pauseQueue;

@end
