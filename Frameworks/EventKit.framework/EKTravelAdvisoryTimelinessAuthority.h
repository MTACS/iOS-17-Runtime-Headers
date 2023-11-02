
@interface EKTravelAdvisoryTimelinessAuthority : NSObject <CalActivatable> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <CalDateProvider> * _dateProvider;
    bool  _internalActive;
    unsigned long long  _internalPeriod;
    id /* block */  _internalPeriodChangedCallback;
    NSDate * _startOfLeaveNowPeriodInternal;
    NSDate * _startOfRunningLatePeriodInternal;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) <CalDateProvider> *dateProvider;
@property (nonatomic) bool internalActive;
@property (nonatomic) unsigned long long internalPeriod;
@property (nonatomic, copy) id /* block */ internalPeriodChangedCallback;
@property (nonatomic, readonly) unsigned long long period;
@property (nonatomic, copy) id /* block */ periodChangedCallback;
@property (nonatomic, readonly) NSDate *startOfLeaveNowPeriod;
@property (nonatomic, retain) NSDate *startOfLeaveNowPeriodInternal;
@property (nonatomic, readonly) NSDate *startOfRunningLatePeriod;
@property (nonatomic, retain) NSDate *startOfRunningLatePeriodInternal;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)stringForPeriod:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_refresh;
- (void)_refreshOnDate:(id)arg1;
- (void)_refreshPeriod;
- (void)_refreshTimer;
- (void)_uninstallTimer;
- (void)activate;
- (bool)active;
- (id)callbackQueue;
- (id)dateProvider;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (id)initWithDateProvider:(id)arg1;
- (bool)internalActive;
- (unsigned long long)internalPeriod;
- (id /* block */)internalPeriodChangedCallback;
- (unsigned long long)period;
- (id /* block */)periodChangedCallback;
- (void)setCallbackQueue:(id)arg1;
- (void)setInternalActive:(bool)arg1;
- (void)setInternalPeriod:(unsigned long long)arg1;
- (void)setInternalPeriodChangedCallback:(id /* block */)arg1;
- (void)setPeriodChangedCallback:(id /* block */)arg1;
- (void)setStartOfLeaveNowPeriodInternal:(id)arg1;
- (void)setStartOfRunningLatePeriodInternal:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)startOfLeaveNowPeriod;
- (id)startOfLeaveNowPeriodInternal;
- (id)startOfRunningLatePeriod;
- (id)startOfRunningLatePeriodInternal;
- (id)timer;
- (void)updateWithHypothesis:(id)arg1;
- (id)workQueue;

@end
