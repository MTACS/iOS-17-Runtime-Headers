
@interface FCGoalProgressCoordinator : NSObject <FCCXPCActivitySchedulerDelegate, FCGoalProgressDebouncerDelegate, FCGoalProgressEvaluationDelegate, HDDatabaseProtectedDataObserver, HDProfileReadyObserver> {
    FCCGoalProgressConfiguration * _currentConfiguration;
    FCCDateProvider * _dateProvider;
    FCGoalProgressDebouncer * _debouncer;
    <FCGoalProgressCoordinatorDelegate> * _delegate;
    HDProfile * _profile;
    NSArray * _progressEvents;
    FCCXPCActivityScheduler * _scheduler;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    FCGoalProgressStore * _store;
    FCTypicalDayProvider * _typicalDayProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCGoalProgressCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_minimumActiveDaysOverride;
- (void)_onqueue_handleGoalProgressConfiguration:(id)arg1;
- (void)_onqueue_notificationPosted:(id)arg1;
- (void)_onqueue_registerGoalProgressConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)_onqueue_rescheduleEvents;
- (void)_onqueue_runEvaluation;
- (void)_todayActivityChanged:(id)arg1;
- (id)currentCalendar;
- (id)currentDate;
- (unsigned long long)currentExperienceType;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (void)debouncerDidFinishDebounce:(id)arg1;
- (id)delegate;
- (id)initWithDateProvider:(id)arg1 debouncer:(id)arg2 profile:(id)arg3 scheduler:(id)arg4 serviceQueue:(id)arg5 store:(id)arg6 typicalDayProvider:(id)arg7;
- (id)lastFiredDateForProgressEventIdentifier:(id)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (void)registerGoalProgressConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)scheduler:(id)arg1 performActivityWithName:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
