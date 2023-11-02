
@interface PLMomentGenerationThrottle : NSObject {
    bool  _canDelayAnyQOS;
    _Atomic bool  _isExecutingOrConsideringExecution;
    double  _lastRunDuration;
    double  _lastRunEndTime;
    NSString * _name;
    double  _nextExpectedRun;
    _Atomic bool  _shouldRunAgain;
    bool  _singleThreaded;
    id /* block */  _targetBlock;
    NSObject<OS_dispatch_queue> * _targetQueue;
    <PLMomentGenerationThrottleTimeProvider> * _timeProvider;
}

@property (nonatomic) bool singleThreaded;
@property (nonatomic, readonly) <PLMomentGenerationThrottleTimeProvider> *timeProvider;

- (void).cxx_destruct;
- (void)_doAsyncUpdateWithCompletionBlock:(id /* block */)arg1 tryAgainLaterBlock:(id /* block */)arg2 tryAgainAfterCurrentExecutionBlock:(id /* block */)arg3;
- (id)initWithName:(id)arg1 canDelayAnyQOS:(bool)arg2 singleThreadedMode:(bool)arg3 timeProvider:(id)arg4 targetQueue:(id)arg5 target:(id /* block */)arg6;
- (bool)isIdle;
- (void)setSingleThreaded:(bool)arg1;
- (bool)singleThreaded;
- (id)timeProvider;
- (void)update;

@end
