
@interface MKThrottledGate : NSObject {
    double  _availableTickets;
    int  _maxAvailableTickets;
    NSObject<OS_dispatch_queue> * _queue;
    double  _refreshRate;
    VKTimer * _timer;
    NSMutableArray * _waitingJobs;
}

- (void).cxx_destruct;
- (bool)_dispatchWaitingJobsIfNecessary;
- (void)_ensureTimer;
- (bool)_replenishAvailableJobsIfNecessary;
- (void)_timerFired:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)dispatch:(id /* block */)arg1;
- (id)initWithMax:(int)arg1 refreshRate:(double)arg2 queue:(id)arg3;

@end
