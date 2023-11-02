
@interface HVPowerBudget : NSObject {
    <NSObject> * _batteryObserver;
    _Atomic bool  _discretionaryWorkInProgress;
    bool  _isScheduled;
    NSDate * _lastPlugInTime;
    NSObject<OS_os_log> * _log;
    _DASScheduler * _scheduler;
    HVPowerBudgetThrottlingState * _throttlingState;
}

+ (id)defaultBudget;
+ (void)setCanDoWorkOverrideForTesting:(id)arg1;

- (void).cxx_destruct;
- (unsigned char)canDoDiscretionaryWork;
- (unsigned char)canDoExtraDiscretionaryWork;
- (void)dealloc;
- (void)didConsumeAnExtraBudgetedOperation;
- (void)doDiscretionaryWork:(id /* block */)arg1 orElse:(id /* block */)arg2;
- (id)init;
- (id)initWithThrottleBudget:(id)arg1;
- (void)refillThrottleBudget;
- (id)throttlingState;

@end
