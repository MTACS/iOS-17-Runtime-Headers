
@interface HMDRemotePersonDataMessenger : HMFObject <HMDPersonDataInterface, HMFLogging, HMFMessageReceiver, HMFTimerDelegate> {
    NSUUID * _UUID;
    <HMDPersonDataSource> * _dataSource;
    HMFMessageDispatcher * _messageDispatcher;
    HMFTimer * _notifyResidentsOfUpdatedDataDebounceTimer;
    id /* block */  _notifyResidentsOfUpdatedDataDebounceTimerFactory;
    <HMDResidentDeviceManager> * _residentDeviceManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSUUID *UUID;
@property <HMDPersonDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (retain) HMFTimer *notifyResidentsOfUpdatedDataDebounceTimer;
@property (copy) id /* block */ notifyResidentsOfUpdatedDataDebounceTimerFactory;
@property (readonly) HMIExternalPersonManager *photosPersonManager;
@property (readonly) <HMDResidentDeviceManager> *residentDeviceManager;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UUID;
- (void)_notifyResidentsOfUpdatedFaceClassificationDependentData;
- (void)_sendMessagesToNotifyResidentsOfUpdatedFaceClassificationDependentData;
- (void)configureWithDataSource:(id)arg1 home:(id)arg2;
- (id)dataSource;
- (void)handlePerformCloudPullMessage:(id)arg1;
- (void)handleRemovedFaceCropWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleRemovedPersonWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedPerson:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedPersonFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;
- (id)initWithUUID:(id)arg1 home:(id)arg2 workQueue:(id)arg3;
- (id)initWithUUID:(id)arg1 messageDispatcher:(id)arg2 residentDeviceManager:(id)arg3 workQueue:(id)arg4;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)notifyResidentsOfUpdatedDataDebounceTimer;
- (id /* block */)notifyResidentsOfUpdatedDataDebounceTimerFactory;
- (id)residentDeviceManager;
- (void)setDataSource:(id)arg1;
- (void)setNotifyResidentsOfUpdatedDataDebounceTimer:(id)arg1;
- (void)setNotifyResidentsOfUpdatedDataDebounceTimerFactory:(id /* block */)arg1;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
