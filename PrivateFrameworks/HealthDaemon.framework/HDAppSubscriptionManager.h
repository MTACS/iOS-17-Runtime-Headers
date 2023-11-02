
@interface HDAppSubscriptionManager : NSObject <HDDatabaseProtectedDataObserver, HDProfileReadyObserver> {
    HDBackgroundAppLauncher * _backgroundAppLauncher;
    int  _backgroundAppRefreshNotifyToken;
    HDBackgroundTaskScheduler * _backgroundTaskScheduler;
    NSObject<OS_dispatch_queue> * _launchQueue;
    NSMutableDictionary * _launchTimerLaunchTimes;
    NSMutableDictionary * _launchTimers;
    NSMutableSet * _observedDataTypeCodes;
    NSMutableDictionary * _outstandingLaunchesByBundleIdentifier;
    NSMutableDictionary * _pendingTypeCodesToAnchors;
    HDProfile * _profile;
    bool  _shouldScheduleLaunches;
    id /* block */  _unitTesting_backgroundAppRefreshStatusGenerator;
    id /* block */  _unitTesting_launchEventHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_backgroundAppRefreshStatusGenerator;
@property (nonatomic, copy) id /* block */ unitTesting_launchEventHandler;

- (void).cxx_destruct;
- (void)_isBackgroundAppRefreshDisabledForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)ackForBundleID:(id)arg1 dataTypes:(id)arg2 anchor:(id)arg3 ackTime:(id)arg4;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (void)removeBundleID:(id)arg1;
- (void)removeSubscriptionForBundleID:(id)arg1 dataCode:(long long)arg2;
- (void)setAnchor:(id)arg1 forDataCode:(long long)arg2;
- (void)setUnitTesting_backgroundAppRefreshStatusGenerator:(id /* block */)arg1;
- (void)setUnitTesting_launchEventHandler:(id /* block */)arg1;
- (void)subscribeForBundleID:(id)arg1 dataCode:(long long)arg2 frequencyInSeconds:(unsigned long long)arg3 appSDKVersion:(unsigned int)arg4;
- (id /* block */)unitTesting_backgroundAppRefreshStatusGenerator;
- (bool)unitTesting_isAwaitingLaunchForBundleID:(id)arg1 anchor:(id)arg2 dataTypeCode:(long long)arg3;
- (bool)unitTesting_isObservingDataTypeCode:(long long)arg1;
- (id /* block */)unitTesting_launchEventHandler;
- (void)unitTesting_synchronizeWithQueue;

@end
