
@interface HMDResidentReachabilityNotificationManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    HMDBulletinBoard * _bulletinBoard;
    HMDRemoteDeviceMonitor * _deviceMonitor;
    HMFTimer * _evaluateDebounceTimer;
    HMDHome * _home;
    bool  _notificationEnabled;
    HMDResidentReachabilityContext * _reachabilityContext;
    id /* block */  _timerFactory;
    HMFTimer * _unreachableBulletinDebounceTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) bool anyEnabledResidentSupportsCameraRecordingReachabilityNotifications;
@property (readonly) HMDBulletinBoard *bulletinBoard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDRemoteDeviceMonitor *deviceMonitor;
@property (retain) HMFTimer *evaluateDebounceTimer;
@property (readonly) bool hasMultipleResidentsSupportingCameraRecording;
@property (readonly) bool hasReachableResidentSupportingCameraRecording;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property bool notificationEnabled;
@property (retain) HMDResidentReachabilityContext *reachabilityContext;
@property (getter=isReachabilityEventNotificationEnabledForAnyCamera, readonly) bool reachabilityEventNotificationEnabledForAnyCamera;
@property (readonly) Class superclass;
@property (readonly, copy) id /* block */ timerFactory;
@property (retain) HMFTimer *unreachableBulletinDebounceTimer;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_createTimer;
- (void)_evaluateReachabilityBulletinAndPostponeUnreachableBulletin:(bool)arg1;
- (void)_handleCameraProfileSettingsDidChange:(id)arg1;
- (void)_handleCameraProfileUnconfigured:(id)arg1;
- (void)_handleNetworkReachabilityChange:(id)arg1;
- (void)_handleResidentAdded:(id)arg1;
- (void)_handleResidentRemoved:(id)arg1;
- (void)_handleResidentUpdated:(id)arg1;
- (void)_startDebounceTimer;
- (void)_startUnreachableBulletinDebounceTimer;
- (bool)anyEnabledResidentSupportsCameraRecordingReachabilityNotifications;
- (id)bulletinBoard;
- (void)configureWithHome:(id)arg1 deviceMonitor:(id)arg2;
- (void)configureWithHome:(id)arg1 deviceMonitor:(id)arg2 notificationCenter:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)deviceMonitor;
- (id)evaluateDebounceTimer;
- (bool)hasMultipleResidentsSupportingCameraRecording;
- (bool)hasReachableResidentSupportingCameraRecording;
- (id)home;
- (id)initWithResidentReachabilityContext:(id)arg1 workQueue:(id)arg2;
- (id)initWithResidentReachabilityContext:(id)arg1 workQueue:(id)arg2 timerFactory:(id /* block */)arg3 bulletinBoard:(id)arg4;
- (bool)isReachabilityEventNotificationEnabledForAnyCamera;
- (id)logIdentifier;
- (bool)notificationEnabled;
- (id)reachabilityContext;
- (void)setEvaluateDebounceTimer:(id)arg1;
- (void)setNotificationEnabled:(bool)arg1;
- (void)setReachabilityContext:(id)arg1;
- (void)setUnreachableBulletinDebounceTimer:(id)arg1;
- (bool)shouldPostReachableNotification;
- (bool)shouldPostUnreachableNotification;
- (void)timerDidFire:(id)arg1;
- (id /* block */)timerFactory;
- (id)unreachableBulletinDebounceTimer;
- (void)updateNotificationEnabled;
- (id)workQueue;

@end
