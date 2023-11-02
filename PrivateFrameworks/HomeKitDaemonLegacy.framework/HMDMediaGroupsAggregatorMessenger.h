
@interface HMDMediaGroupsAggregatorMessenger : NSObject <HMFLogging, HMFMessageReceiver> {
    <HMDMediaGroupsAggregatorMessengerDataSource> * _dataSource;
    <HMDMediaGroupsAggregatorMessengerDelegate> * _delegate;
    NSUUID * _identifier;
}

@property <HMDMediaGroupsAggregatorMessengerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaGroupsAggregatorMessengerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSUUID *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configureWithMessageDispatcher:(id)arg1 home:(id)arg2;
- (id)dataSource;
- (id)delegate;
- (id)identifier;
- (id)init;
- (void)locallyHandleUpdateAssociatedGroupIdentifierRequestMessage:(id)arg1;
- (id)logIdentifier;
- (id)messageTargetUUID;
- (void)notifyOfRequestToUpdateAssociatedGroupIdentifierWithPayload:(id)arg1 message:(id)arg2;
- (void)registerForMessagesWithMessageDispatcher:(id)arg1 home:(id)arg2;
- (void)routeMessage:(id)arg1 localHandler:(id /* block */)arg2;
- (void)routeUpdateAssociatedGroupIdentifierRequestMessage:(id)arg1;
- (id)router;
- (void)sendRequestToUpdateAssociatedGroupIdentifier:(id)arg1 forGroupIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
