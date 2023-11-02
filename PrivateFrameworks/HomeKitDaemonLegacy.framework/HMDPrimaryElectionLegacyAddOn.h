
@interface HMDPrimaryElectionLegacyAddOn : NSObject <HMDPrimaryResidentElectionAddOn, HMFLogging, HMFMessageReceiver, HMFTimerDelegate> {
    bool  _confirming;
    <HMDResidentDeviceManagerContext> * _context;
    <HMDPrimaryResidentElectionAddOnDelegate> * _delegate;
    NSHashTable * _devicePreferenceDataSources;
    HMDResidentDevice * _preferredElector;
    HMFTimer * _residentMonitorTimer;
}

@property (getter=isConfirming, nonatomic) bool confirming;
@property (nonatomic, readonly) <HMDResidentDeviceManagerContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property <HMDPrimaryResidentElectionAddOnDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSHashTable *devicePreferenceDataSources;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAtHome;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMDResidentDevice *preferredElector;
@property (nonatomic, retain) HMFTimer *residentMonitorTimer;
@property (readonly) Class superclass;

+ (long long)compareElectionVersions:(id)arg1 otherVersion:(id)arg2;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)__handleConfirmationRequest:(id)arg1;
- (void)_handleConfirmResidentDevice:(id)arg1;
- (void)_handleResidentElectionParameters:(id)arg1;
- (void)addDataSource:(id)arg1;
- (void)atHomeLevelChanged:(long long)arg1;
- (id)computePreferredElector:(unsigned long long*)arg1;
- (void)confirmAsResident;
- (void)confirmOnAvailability;
- (void)confirmPrimaryResident;
- (void)confirmWithCompletionHandler:(id /* block */)arg1;
- (id)context;
- (id)delegate;
- (id)devicePreferenceDataSources;
- (id)dumpState;
- (void)handleBatteryLevelChange:(id)arg1;
- (void)handleBatteryStateChange:(id)arg1;
- (id)initWithContext:(id)arg1;
- (bool)isAtHome;
- (bool)isConfirming;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)performElection;
- (void)performElectionWithReason:(unsigned long long)arg1;
- (id)preferredElector;
- (void)primaryResidentChanged:(id)arg1 previousResidentDevice:(id)arg2;
- (void)registerForMessages;
- (bool)residentIsPartOfTheCurrentMesh:(id)arg1;
- (id)residentMonitorTimer;
- (id)residentsInMesh;
- (void)setConfirming:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setResidentMonitorTimer:(id)arg1;
- (void)start;
- (void)stop;
- (void)timerDidFire:(id)arg1;

@end
