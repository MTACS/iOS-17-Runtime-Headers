
@interface HMDSettingsMessageHandler : HMFObject <HMDSettingsMessageHandlerProtocol, HMFLogging, HMFMessageReceiver> {
    HMDUserMessagePolicy * _anyUserAllowedPolicy;
    HMFMessageDispatcher * _messageDispatcher;
    NSUUID * _messageTargetUUID;
    <HMDSettingsMessageController> * _privateMessageController;
    NSObject<OS_dispatch_queue> * _queue;
    <HMDSettingsMessageController> * _sharedMessageController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, retain) NSUUID *messageTargetUUID;
@property <HMDSettingsMessageController> *privateMessageController;
@property <HMDSettingsMessageController> *sharedMessageController;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleUpdateValue:(id)arg1;
- (void)configureWithMessageDispatcher:(id)arg1 home:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)privateMessageController;
- (void)setMessageTargetUUID:(id)arg1;
- (void)setPrivateMessageController:(id)arg1;
- (void)setSharedMessageController:(id)arg1;
- (id)sharedMessageController;

@end
