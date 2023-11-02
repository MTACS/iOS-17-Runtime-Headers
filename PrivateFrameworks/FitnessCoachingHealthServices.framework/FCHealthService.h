
@interface FCHealthService : NSObject <FCGoalCompletionCoordinatorDelegate, FCGoalProgressCoordinatorDelegate, FCMoveModeCoordinatorDelegate, HDProfileReadyObserver> {
    FCAppInstallationObserver * _appInstallationObserver;
    FCCDateProvider * _dateProvider;
    FCGoalCompletionActivitySummaryObserver * _goalCompletionActivitySummaryObserver;
    FCGoalCompletionCoordinator * _goalCompletionCoordinator;
    FCGoalCompletionStore * _goalCompletionStore;
    FCGoalProgressCoordinator * _goalProgressCoordinator;
    FCGoalProgressDebouncer * _goalProgressDebouncer;
    FCCXPCActivityScheduler * _goalProgressScheduler;
    FCGoalProgressStore * _goalProgressStore;
    FCMoveModeCoordinator * _moveModeCoordinator;
    HDProfile * _profile;
    int  _sampleNotificationToken;
    bool  _serviceEnabled;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    int  _standalonePhoneNotificationToken;
    FCTypicalDayProvider * _typicalDayProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appInstallationChanged:(id)arg1;
- (void)_onqueue_registerForAppInstallationChange;
- (void)_onqueue_registerForStandalonePhoneModeChange;
- (void)_onqueue_updateService;
- (void)_postSampleNotification;
- (void)coordinator:(id)arg1 eventFiredWithContent:(id)arg2;
- (void)coordinator:(id)arg1 postGoalCompletionNotification:(id)arg2;
- (void)coordinator:(id)arg1 postMoveModeNotification:(id)arg2;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (void)registerGoalProgressConfiguration:(id)arg1 completion:(id /* block */)arg2;

@end
