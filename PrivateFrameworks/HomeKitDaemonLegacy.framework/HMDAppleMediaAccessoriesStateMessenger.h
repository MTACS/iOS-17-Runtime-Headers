
@interface HMDAppleMediaAccessoriesStateMessenger : HMFObject <HMFLogging, HMFMessageReceiver> {
    <HMDAppleMediaAccessoriesStateMessengerDelegate> * _delegate;
    NSUUID * _identifier;
    HMFMessageDispatcher * _messageDispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDAppleMediaAccessoriesStateMessengerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleAppleMediaAccessoryModelIdentifierRequestMessage:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 messageDispatcher:(id)arg2;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageTargetUUID;
- (void)registerForMessagesWithHome:(id)arg1;
- (id)relayMessageName:(id)arg1 payload:(id)arg2 toAppleMediaAccessory:(id)arg3;
- (void)sendModelIdentifierRequestMessageToAppleMediaAccessory:(id)arg1 withAccessoryIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
