
@interface HMDLogEventCountingAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner> {
    HMDEventCountersManager * _countersManager;
    HMDEventCounterGroup * _currentDayCountersGroup;
    NSMutableDictionary * _currentPeriodCounters;
    HMMDateProvider * _dateProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _loggingPeriodicitySeconds;
    id /* block */  _periodicCountersSnapshotBlock;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serialNumber;
    unsigned long long  _tickSecondsLastLogged;
    id /* block */  _tickSecondsProviderBlock;
}

@property (nonatomic, readonly) HMDEventCountersManager *countersManager;
@property (nonatomic, retain) HMDEventCounterGroup *currentDayCountersGroup;
@property (nonatomic, readonly) NSMutableDictionary *currentPeriodCounters;
@property (nonatomic, readonly) HMMDateProvider *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long loggingPeriodicitySeconds;
@property (nonatomic, readonly) id /* block */ periodicCountersSnapshotBlock;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *serialNumber;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tickSecondsLastLogged;
@property (nonatomic, readonly) id /* block */ tickSecondsProviderBlock;

- (void).cxx_destruct;
- (id)countersManager;
- (id)currentDayCountersGroup;
- (id)currentPeriodCounters;
- (id)dateProvider;
- (void)deleteCountersAfterDate:(id)arg1;
- (void)deleteCountersBeforeDate:(id)arg1;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (void)didReceiveEventFromDispatcher:(id)arg1 withCurrentTickSeconds:(unsigned long long)arg2;
- (void)incrementDailyCountersForEventName:(id)arg1;
- (void)incrementPeriodicCountersForEventName:(id)arg1;
- (id)initWithEventCountersManager:(id)arg1 dailyScheduler:(id)arg2 dateProvider:(id)arg3 systemInfo:(id)arg4 queue:(id)arg5;
- (id)initWithEventCountersManager:(id)arg1 dailyScheduler:(id)arg2 dateProvider:(id)arg3 systemInfo:(id)arg4 queue:(id)arg5 loggingPeriodicitySeconds:(unsigned long long)arg6 tickSecondsProviderBlock:(id /* block */)arg7 periodicCountersLoggingBlock:(id /* block */)arg8;
- (unsigned long long)loggingPeriodicitySeconds;
- (id /* block */)periodicCountersSnapshotBlock;
- (id)periodicSnapshotAtCurrentTickSeconds:(unsigned long long)arg1;
- (id)queue;
- (void)runDailyTask;
- (id)serialNumber;
- (void)setCurrentDayCountersGroup:(id)arg1;
- (void)setTickSecondsLastLogged:(unsigned long long)arg1;
- (unsigned long long)tickSecondsLastLogged;
- (id /* block */)tickSecondsProviderBlock;

@end
