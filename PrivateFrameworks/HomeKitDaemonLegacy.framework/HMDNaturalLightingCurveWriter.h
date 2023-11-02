
@interface HMDNaturalLightingCurveWriter : HMFObject <HMDDevicePreferenceDataSource, HMFLogging, HMFMessageReceiver, HMFTimerDelegate> {
    NSUUID * _UUID;
    bool  _currentDevicePrimaryResident;
    <HMDLightProfileDataSource> * _dataSource;
    HMDLightProfile * _lightProfile;
    NSString * _logIdentifier;
    double  _naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
    double  _naturalLightingCurveUpdateInterval;
    NSNotificationCenter * _notificationCenter;
    HMFTimer * _periodicCharacteristicWriteTimer;
    id /* block */  _timerFactory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSUUID *UUID;
@property (getter=isCurrentDevicePrimaryResident) bool currentDevicePrimaryResident;
@property (readonly) <HMDLightProfileDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDLightProfile *lightProfile;
@property (readonly) NSString *logIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) double naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
@property (readonly) double naturalLightingCurveUpdateInterval;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) HMFTimer *periodicCharacteristicWriteTimer;
@property (readonly) Class superclass;
@property (readonly) id /* block */ timerFactory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UUID;
- (void)configureWithLightProfile:(id)arg1;
- (id)dataSource;
- (void)handleActiveTransitionContextUpdated:(id)arg1;
- (void)handleCurrentDevicePrimaryResidentChangedWithReason:(id)arg1;
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3 dataSource:(id)arg4 notificationCenter:(id)arg5 timerFactory:(id /* block */)arg6;
- (bool)isCurrentDevicePrimaryResident;
- (id)lightProfile;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (double)naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
- (double)naturalLightingCurveUpdateInterval;
- (id)notificationCenter;
- (id)periodicCharacteristicWriteTimer;
- (void)setCurrentDevicePrimaryResident:(bool)arg1;
- (void)setLightProfile:(id)arg1;
- (void)setPeriodicCharacteristicWriteTimer:(id)arg1;
- (bool)supportsDeviceWithCapabilities:(id)arg1;
- (void)synchronizeCurveWithActiveTransitionContext:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id /* block */)timerFactory;
- (id)workQueue;
- (void)writeForNaturalLightingEnabledWithReason:(id)arg1;
- (void)writeWithNaturalLightingEnabled:(bool)arg1 reason:(id)arg2 completion:(id /* block */)arg3;

@end
