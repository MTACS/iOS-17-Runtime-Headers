
@interface PLBackgroundJobService : NSObject <PFCameraViewfinderSessionWatcherDelegate, PFStateCaptureProvider, PLBackgroundJobLibraryCoordinatorDelegate> {
    NSDictionary * _bundlesToProcessByCriteriaShortCode;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bundlesToProcessByCriteriaShortCodeLock;
    bool  _cameraForeground;
    PFCameraViewfinderSessionWatcher * _cameraWatcher;
    bool  _deferringService;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    PLBackgroundJobLibraryCoordinator * _libraryCoordinator;
    NSDictionary * _libraryInvalidationCompletionHandlerByLibraryURL;
    bool  _needsActivityUnregistrationOnFirstLaunch;
    NSPointerArray * _observers;
    PLBackgroundJobCriteria * _pausedCriteria;
    NSMutableSet * _registeredXPCActivities;
    PFCoalescer * _registrationCoalescer;
    PLBackgroundJobCriteria * _runningCriteria;
    NSObject<OS_xpc_object> * _runningXPCActivity;
    NSObject<OS_dispatch_source> * _runningXPCActivityDeferTimer;
    NSNumber * _simulateXpcActivityDeferring;
    unsigned long long  _state;
    PFStateCaptureHandler * _stateCaptureHandler;
    PLBackgroundJobStatusCenter * _statusCenter;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _watchdogTimerLock;
    NSDate * _watchdogTimerLock_dateOfWatchdogTimerStart;
    double  _watchdogTimerLock_registrationCoalescerPushBackTimeInterval;
    NSString * _watchdogTimerLock_watchdogTimerSourceDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSPointerArray *observers;
@property (readonly) NSDictionary *statusCenterDump;
@property (readonly) Class superclass;

+ (void)_removeAllBundlesFromUserDefaultsWithoutLocking;
+ (bool)_stateIsReadyForRegistration:(unsigned long long)arg1;
+ (bool)_stateIsReadyToRun:(unsigned long long)arg1;
+ (bool)_verifyActivityHandlerInvokedWithCorrectIdentifier:(id)arg1 forCriteria:(id)arg2;
+ (bool)verifyStateTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)_activityIsRegisteredForCriteria:(id)arg1;
- (void)_appendBundleRecordsToProcessingSet:(id)arg1 criteriaShortCode:(id)arg2;
- (id)_bundlesToProcessByCriteriaShortCodesAsPathStrings;
- (id)_bundlesToProcessByCriteriaShortCodesAsPathStringsAlreadyLocked;
- (void)_fireWatchdogTimerWithStartTime:(id)arg1 startingPushBackTimeInterval:(double)arg2 sourceDescription:(id)arg3;
- (id)_getBundleRecordsFromProcessingSetForAllCriterias;
- (id)_getBundleRecordsFromProcessingSetForCriteriaShortCode:(id)arg1;
- (unsigned long long)_getServiceStateOnQueue;
- (void)_invalidateSignalNeededForCrashRecoveryOnBundle:(id)arg1;
- (void)_loadBundleRecordsDictionaryFromUserDefaults;
- (void)_noteSignalNeededForCrashRecoveryOnBundle:(id)arg1;
- (void)_persistBundleRecordsDictionaryToUserDefaults;
- (void)_registerActivityIfNecessaryOnBundles:(id)arg1;
- (void)_registerActivityWithCriteria:(id)arg1;
- (void)_registerActivityWithoutCoalescingIfNecessaryOnBundle:(id)arg1;
- (void)_registerBackgroundProcessingNeededForBundles:(id)arg1 context:(id)arg2;
- (void)_removeAllBundlesFromProcessingSet;
- (void)_removeAllBundlesFromProcessingSetForCriteriaShortCode:(id)arg1;
- (void)_removeBundleRecordFromProcessingSet:(id)arg1 criteriaShortCode:(id)arg2;
- (void)_removeRegisteredActivityForCriteria:(id)arg1;
- (void)_runActivity:(id)arg1 withCriteria:(id)arg2;
- (void)_setRegisteredActivityForCriteria:(id)arg1;
- (void)_setRunningCriteria:(id)arg1;
- (void)_setServiceState:(unsigned long long)arg1;
- (void)_setServiceStateOnQueue:(unsigned long long)arg1;
- (void)_shutdown;
- (bool)_signalNeededOnBundle:(id)arg1;
- (void)_simulateXPCShouldDefer:(bool)arg1;
- (void)_startPollingForActivityStatus;
- (void)_startPollingForActivityStatusOnQueue;
- (void)_startRunningBackgroundJobsWithCriteria:(id)arg1;
- (void)_startRunningBackgroundJobsWithCriteriaOnQueue:(id)arg1;
- (void)_stopPollingForActivityStatus;
- (void)_stopRunningBackgroundJobs;
- (void)_unregisterActivityIfNeededShouldConsiderDeferring:(bool)arg1;
- (void)_unregisterActivityIfNeededShouldConsiderDeferring_enqueue:(bool)arg1;
- (void)_updateCameraForegroundState:(bool)arg1;
- (void)cameraWatcherDidChangeState:(id)arg1;
- (unsigned long long)getServiceState;
- (id)init;
- (id)initWithLibraryCoordinator:(id)arg1;
- (id)initWithLibraryCoordinator:(id)arg1 statusCenter:(id)arg2;
- (void)invalidateLibraryBundle:(id)arg1 completion:(id /* block */)arg2;
- (void)libraryCoordinatorFinishedJobsOnAllSubmittedBundles;
- (void)libraryCoordinatorFinishedJobsOnSubmittedBundle:(id)arg1 withCriteria:(id)arg2;
- (id)observers;
- (void)performCrashRecoveryIfNeededOnBundle:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)signalBackgroundProcessingNeededOnBundle:(id)arg1;
- (void)signalBackgroundProcessingNeededOnLibrary:(id)arg1;
- (void)startWatchdogTimerIfNeededWithSourceDescription:(id)arg1;
- (id)stateCaptureDictionary;
- (id)statusCenterDump;

@end
