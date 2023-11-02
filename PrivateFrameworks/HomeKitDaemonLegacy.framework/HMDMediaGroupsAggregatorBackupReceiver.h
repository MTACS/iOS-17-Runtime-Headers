
@interface HMDMediaGroupsAggregatorBackupReceiver : HMFObject <HMFLogging, HMFMessageReceiver> {
    <HMDMediaGroupsAggregatorBackupReceiverDelegate> * _delegate;
    NSUUID * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaGroupsAggregatorBackupReceiverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSUUID *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2;
- (id)delegate;
- (void)handleGroupsBackupDataMessage:(id)arg1;
- (id)identifier;
- (id)init;
- (id)logIdentifier;
- (id)messageTargetUUID;
- (void)registerForMessagesWithHome:(id)arg1 messageDispatcher:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
