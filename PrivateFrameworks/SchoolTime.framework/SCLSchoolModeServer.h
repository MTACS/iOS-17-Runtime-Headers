
@interface SCLSchoolModeServer : NSObject <SCLSchedulingEngineDelegate, SCLSuppressSchoolModeAssertionManagerObserver> {
    NSObject<OS_os_transaction> * _activeTransaction;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    SCLSchedulingEngine * _schedulingEngine;
    SCLSuppressSchoolModeAssertionManager * _suppressionManager;
    NSObject<OS_dispatch_queue> * _targetQueue;
    int  _timeChangeToken;
    NSObject<OS_dispatch_source> * _timerSource;
    SCLSchoolModeWakeScheduler * _wakeScheduler;
}

@property (nonatomic, retain) NSObject<OS_os_transaction> *activeTransaction;
@property (readonly) SCLState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) SCLSchedulingEngine *schedulingEngine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SCLSuppressSchoolModeAssertionManager *suppressionManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic) int timeChangeToken;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic, readonly) SCLSchoolModeWakeScheduler *wakeScheduler;

- (void).cxx_destruct;
- (void)_scheduleTimerForDate:(id)arg1;
- (id)activeTransaction;
- (void)addObserver:(id)arg1;
- (void)applySchedule:(id)arg1;
- (void)assertionManager:(id)arg1 didUpdateAssertionsStatus:(unsigned long long)arg2;
- (void)configureParameters:(id)arg1 forSuppressionStatus:(unsigned long long)arg2;
- (id)currentState;
- (void)handleLocaleChange;
- (void)handleSignificantTimeChange;
- (id)initWithQueue:(id)arg1 suppressionManager:(id)arg2 wakeScheduler:(id)arg3;
- (void)invalidate;
- (id)observers;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (id)schedulingEngine;
- (void)schedulingEngine:(id)arg1 didUpdateState:(id)arg2 fromState:(id)arg3 nextEvaluationDate:(id)arg4;
- (void)setActive:(bool)arg1;
- (void)setActiveTransaction:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSchedulingEngine:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setTimeChangeToken:(int)arg1;
- (void)setTimerSource:(id)arg1;
- (void)startWithScheduleSettings:(id)arg1 shouldStartManuallyActive:(bool)arg2;
- (id)suppressionManager;
- (id)targetQueue;
- (int)timeChangeToken;
- (void)timerFired;
- (id)timerSource;
- (id)wakeScheduler;

@end
