
@interface HMDAccessorySettingsLegacyMessageReceiver : HMFObject <HMFMessageReceiver> {
    HMFMessageDispatcher * _messageDispatcher;
    NSUUID * _messageTargetUUID;
    HMDAccessorySettingsMessenger * _messenger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property HMDAccessorySettingsMessenger *messenger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2;
- (id)messageDispatcher;
- (id)messageTargetUUID;
- (id)messenger;
- (void)registerForMessagesWithHome:(id)arg1;
- (void)routeAccessorySettingsFetchRequestMessage:(id)arg1;
- (void)routeAccessorySettingsUpdateRequestMessage:(id)arg1;
- (void)setMessenger:(id)arg1;

@end
