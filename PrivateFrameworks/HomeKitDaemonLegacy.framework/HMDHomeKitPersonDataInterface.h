
@interface HMDHomeKitPersonDataInterface : HMFObject <HMDActiveXPCClientConnectionsPeriodicTimerDelegate, HMDPersonDataInterface, HMFLogging, HMFMessageReceiver> {
    NSUUID * _UUID;
    HMDActiveXPCClientConnectionsPeriodicTimer * _clientConnectionsTimer;
    <HMDPersonDataSource> * _dataSource;
    id /* block */  _fetchServerFactory;
    HMFMessageDispatcher * _messageDispatcher;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly) HMDActiveXPCClientConnectionsPeriodicTimer *clientConnectionsTimer;
@property <HMDPersonDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ fetchServerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) HMIExternalPersonManager *photosPersonManager;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UUID;
- (void)_notifySubscribersOfMessageWithName:(id)arg1 payload:(id)arg2;
- (id)clientConnectionsTimer;
- (void)clientConnectionsTimerDidFire:(id)arg1;
- (void)configureWithDataSource:(id)arg1 home:(id)arg2;
- (id)dataSource;
- (id /* block */)fetchServerFactory;
- (void)handleAddOrUpdateFaceCropsMessage:(id)arg1;
- (void)handleAddOrUpdateFaceprintsMessage:(id)arg1;
- (void)handleAddOrUpdatePersonsMessage:(id)arg1;
- (void)handleAssociateFaceCropsMessage:(id)arg1;
- (void)handleDisassociateFaceCropsMessage:(id)arg1;
- (void)handleFetchFaceCropsMessage:(id)arg1;
- (void)handleFetchFaceprintsMessage:(id)arg1;
- (void)handleFetchPersonFaceCropsMessage:(id)arg1;
- (void)handleFetchPersonsMessage:(id)arg1;
- (void)handleFetchUnassociatedFaceCropsMessage:(id)arg1;
- (void)handlePerformCloudPullMessage:(id)arg1;
- (void)handleRemoveFaceCropsMessage:(id)arg1;
- (void)handleRemoveFaceprintsMessage:(id)arg1;
- (void)handleRemovePersonsMessage:(id)arg1;
- (void)handleRemovedFaceCropWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleRemovedFaceprintWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleRemovedPersonWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleSubscribeMessage:(id)arg1;
- (void)handleUnsubscribeMessage:(id)arg1;
- (void)handleUpdatedFaceprint:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedPerson:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedPersonFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedUnassociatedFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;
- (id)initWithUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3;
- (id)initWithUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 clientConnectionsTimer:(id)arg4;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)setDataSource:(id)arg1;
- (void)setFetchServerFactory:(id /* block */)arg1;
- (id)workQueue;

@end
