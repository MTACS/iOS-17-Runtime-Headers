
@interface HMDAppleMediaAccessoryMessenger : HMFObject <HMFLogging, HMFMessageReceiver> {
    NSUUID * _identifier;
    HMDAppleMediaAccessoryLocalMessageHandler * _localHandler;
    HMFMessageDispatcher * _messageDispatcher;
    <HMDMessageRouter> * _router;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMDAppleMediaAccessoryLocalMessageHandler *localHandler;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) <HMDMessageRouter> *router;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 messageDispatcher:(id)arg2 router:(id)arg3 localHandler:(id)arg4;
- (id)localHandler;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageTargetUUID;
- (void)registerForMessagesWithHome:(id)arg1;
- (void)routeSiriEndpointDeleteSiriHistoryMessage:(id)arg1;
- (id)router;
- (void)sendDeleteSiriHistoryRequestForAccessoryWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;

@end
