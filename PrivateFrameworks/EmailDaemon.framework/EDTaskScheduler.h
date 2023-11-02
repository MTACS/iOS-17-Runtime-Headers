
@interface EDTaskScheduler : NSObject {
    double  _backOffInterval;
    double  _backoffMultiplier;
    id /* block */  _canceledCallback;
    NSObject<OS_dispatch_queue> * _executionQueue;
    double  _initialDelay;
    bool  _isReachable;
    double  _maxBackOffInterval;
    bool  _observeForNetworkReachability;
    bool  _pendingWaitingForNetwork;
    id /* block */  _task;
    NSObject<OS_dispatch_source> * _timerSource;
    id /* block */  _work;
}

@property (nonatomic) double backOffInterval;
@property (nonatomic) double backoffMultiplier;
@property (nonatomic, copy) id /* block */ canceledCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic) double initialDelay;
@property (nonatomic) bool isReachable;
@property (nonatomic) double maxBackOffInterval;
@property (nonatomic) bool observeForNetworkReachability;
@property (nonatomic) bool pendingWaitingForNetwork;
@property (nonatomic, copy) id /* block */ task;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic, copy) id /* block */ work;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_doScheduleTask:(id /* block */)arg1 canceledCallback:(id /* block */)arg2;
- (void)_incrementBackoffInterval;
- (void)_reportReachabilityChange:(id)arg1;
- (void)_startObservingNetworkReachability;
- (void)_stopObservingNetworkReachability;
- (double)backOffInterval;
- (double)backoffMultiplier;
- (id /* block */)canceledCallback;
- (void)dealloc;
- (id)executionQueue;
- (id)initWithExecutionQueue:(id)arg1;
- (double)initialDelay;
- (bool)isReachable;
- (double)maxBackOffInterval;
- (bool)observeForNetworkReachability;
- (bool)pendingWaitingForNetwork;
- (void)rescheduleTask;
- (void)scheduleTask:(id /* block */)arg1 canceledCallback:(id /* block */)arg2;
- (void)setBackOffInterval:(double)arg1;
- (void)setBackoffMultiplier:(double)arg1;
- (void)setCanceledCallback:(id /* block */)arg1;
- (void)setExecutionQueue:(id)arg1;
- (void)setInitialDelay:(double)arg1;
- (void)setIsReachable:(bool)arg1;
- (void)setMaxBackOffInterval:(double)arg1;
- (void)setObserveForNetworkReachability:(bool)arg1;
- (void)setPendingWaitingForNetwork:(bool)arg1;
- (void)setTask:(id /* block */)arg1;
- (void)setTimerSource:(id)arg1;
- (void)setWork:(id /* block */)arg1;
- (id /* block */)task;
- (id)timerSource;
- (id /* block */)work;

@end
