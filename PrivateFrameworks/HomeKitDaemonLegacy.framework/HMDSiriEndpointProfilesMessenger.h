
@interface HMDSiriEndpointProfilesMessenger : NSObject <HMFLogging, HMFMessageReceiver> {
    HMFMessageDispatcher * _messageDispatcher;
    HMDSiriEndpointProfileMessageHandler * _messageHandler;
    <HMDMessageRouter> * _messageRouter;
    NSUUID * _messageTargetUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDSiriEndpointProfileMessageHandler *messageHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) <HMDMessageRouter> *messageRouter;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 messageRouter:(id)arg3 messageHandler:(id)arg4;
- (id)intermediateApplyOnboardingSelectionsRequestMessageForMessage:(id)arg1 error:(id*)arg2;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageHandler;
- (id)messageRouter;
- (id)messageTargetUUID;
- (void)registerForMessagesWithHome:(id)arg1;
- (void)routeSiriEndpointApplyOnboardingSelectionsRequestMessage:(id)arg1;
- (void)routeSiriEndpointDeleteSiriHistoryMessage:(id)arg1;

@end
