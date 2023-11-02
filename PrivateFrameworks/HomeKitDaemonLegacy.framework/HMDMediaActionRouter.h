
@interface HMDMediaActionRouter : HMFObject <HMDMPCSessionDataMediaProfileSource, HMFMessageReceiver> {
    <HMDMediaActionRouterDataSource> * _dataSource;
    HMDMPCSessionController * _mpcSessionController;
    bool  _shouldExecuteOnCurrentDevice;
    HMDResidentDevice * _targetResidentDeviceOverride;
}

@property (nonatomic, readonly) <HMDMediaActionRouterDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMDMPCSessionController *mpcSessionController;
@property (nonatomic, readonly) bool shouldExecuteOnCurrentDevice;
@property (readonly) Class superclass;
@property (nonatomic) HMDResidentDevice *targetResidentDeviceOverride;

- (void).cxx_destruct;
- (void)_registerForMessages;
- (id)dataSource;
- (void)dealloc;
- (void)executeMediaActionWithSessionData:(id)arg1 completion:(id /* block */)arg2;
- (void)gatherTargetDevicesForExecutingMediaActionWithProfiles:(id)arg1 targetSystemMediaApplication:(bool)arg2 outResidentDevicesInMediaAction:(id*)arg3 outHomePodsInMediaAction:(id*)arg4 outResidentDevicesSupportingMediaActions:(id*)arg5 outHomePodsSupportingMediaActions:(id*)arg6 outNonOdeonHomePodsSupportingMediaActions:(id*)arg7 outNonOdeonResidentDevicesSupportingMediaActions:(id*)arg8 outNonOdeonResidentDevicesInMediaAction:(id*)arg9 outNonOdeonHomePodsInMediaAction:(id*)arg10 dataSource:(id)arg11;
- (void)handleNonResidentMediaActionExecutionWithSessionData:(id)arg1 encodePlaybackArchive:(bool)arg2 completion:(id /* block */)arg3;
- (id)home;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)mediaProfileWithUUID:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)mpcSessionController;
- (void)routeMediaActionForExecution:(id)arg1 source:(unsigned long long)arg2 clientName:(id)arg3 completion:(id /* block */)arg4;
- (void)routeMessage:(id)arg1;
- (void)routeSessionDataForExecution:(id)arg1 encodePlaybackArchive:(bool)arg2 completion:(id /* block */)arg3;
- (void)sendMediaActionMessageToCompanionWithSessionData:(id)arg1 encodePlaybackArchive:(bool)arg2 completion:(id /* block */)arg3;
- (void)sendMediaActionMessageToDevice:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(bool)arg3 canForwardMessage:(bool)arg4 completion:(id /* block */)arg5;
- (void)sendMediaActionMessageToResident:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(bool)arg3 completion:(id /* block */)arg4;
- (void)setTargetResidentDeviceOverride:(id)arg1;
- (bool)shouldExecuteOnCurrentDevice;
- (id)targetResidentDeviceForExecutingMediaActionWithProfiles:(id)arg1 targetSystemMediaApplication:(bool)arg2;
- (id)targetResidentDeviceOverride;

@end
