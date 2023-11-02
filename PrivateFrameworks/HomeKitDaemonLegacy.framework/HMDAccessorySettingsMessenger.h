
@interface HMDAccessorySettingsMessenger : HMFObject <HMFLogging, HMFMessageReceiver> {
    HMDAccessorySettingsLegacyMessageReceiver * _legacyMessageReceiver;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    HMFMessageDispatcher * _messageDispatcher;
    HMDAccessorySettingsLocalMessageHandler * _messageHandler;
    <HMDMessageRouter> * _messageRouter;
    NSUUID * _messageTargetUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDAccessorySettingsLegacyMessageReceiver *legacyMessageReceiver;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDAccessorySettingsLocalMessageHandler *messageHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) <HMDMessageRouter> *messageRouter;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)fetchLogEventFromMessage:(id)arg1;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 messageRouter:(id)arg3 messageHandler:(id)arg4 logEventSubmitter:(id)arg5 legacyMessageReceiver:(id)arg6;
- (id)legacyMessageForMessage:(id)arg1;
- (id)legacyMessageReceiver;
- (id)logEventSubmitter;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageHandler;
- (id)messageRouter;
- (id)messageTargetUUID;
- (void)registerForMessagesWithHome:(id)arg1;
- (void)routeAccessorySettingsFetchRequestMessage:(id)arg1;
- (void)routeAccessorySettingsUpdateRequestMessage:(id)arg1;
- (void)sendFetchAccessorySettingsRequestWithAccessoryUUID:(id)arg1 keyPaths:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendUpdateAccessorySettingRequestWithAccessoryUUID:(id)arg1 keyPath:(id)arg2 settingValue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)updateAndPostFetchSettingsEvent:(id)arg1 responsePayload:(id)arg2 responseError:(id)arg3;

@end
