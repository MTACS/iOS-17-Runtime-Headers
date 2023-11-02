
@interface HMDHomeLockNotificationManager : HMFObject <HMFLogging, HMFMessageReceiver> {
    <HMDHomeLockNotificationManagerDataSource> * _dataSource;
    HMDHome * _home;
    HMFMessageDispatcher * _msgDispatcher;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) <HMDHomeLockNotificationManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasReachablePrimaryResidentSupportingLockNotificationContext;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_resolveKeypadContextIdentifier:(id)arg1 accessoryUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)_sendResolveLockNotificationContextIdentifierMessage:(id)arg1 accessoryUUID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)configureWithHome:(id)arg1;
- (id)contextResolutionResultFromAccessCode:(id)arg1;
- (id)contextResolutionResultFromHAPContextId:(id)arg1;
- (id)contextResolutionResultFromNFCContextId:(id)arg1;
- (id)dataSource;
- (id)displayNameForNotificationContextResolutionResult:(id)arg1;
- (void)handleResolveNotificationContextIdentifierMessage:(id)arg1;
- (bool)hasReachablePrimaryResidentSupportingLockNotificationContext;
- (id)home;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 dataSource:(id)arg3;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)resolveEncodedCharacteristicNotificationContext:(id)arg1 accessoryUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)resolveKeypadContextIdentifier:(id)arg1 accessoryUUID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (bool)shouldResolveNotificationContextForCharacteristic:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end
