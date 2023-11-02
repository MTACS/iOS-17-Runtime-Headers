
@interface HMDPersonResidentSyncManager : HMFObject <HMFLogging, HMFMessageReceiver> {
    NSUUID * _UUID;
    <HMDPersonResidentSyncManagerDelegate> * _delegate;
    HMFMessageDispatcher * _messageDispatcher;
    HMDResidentSyncManager * _residentSyncManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property <HMDPersonResidentSyncManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) HMDResidentSyncManager *residentSyncManager;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UUID;
- (id)addOrUpdatePersons:(id)arg1;
- (id)addOrUpdatePersons:(id)arg1 andRemovePersonsWithUUIDs:(id)arg2;
- (void)configureWithHome:(id)arg1 delegate:(id)arg2;
- (id)delegate;
- (void)handleModifyPersonsMessage:(id)arg1;
- (void)handleRemoveAllAssociatedDataMessage:(id)arg1;
- (id)initWithUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 residentSyncManager:(id)arg4;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)removeAllAssociatedData;
- (id)removePersonsWithUUIDs:(id)arg1;
- (id)residentSyncManager;
- (void)setDelegate:(id)arg1;
- (id)workQueue;

@end
