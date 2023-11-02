
@interface HMDSettingMessageMapper : HMFObject <HMFMessageReceiver> {
    NSUUID * _identifier;
    HMFMessageDispatcher * _messageDispatcher;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)deregisterFromAllMessages;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)queue;
- (void)registerForMessage:(id)arg1 policies:(id)arg2 messageDispatcher:(id)arg3 messageHandler:(id /* block */)arg4;
- (void)setMessageDispatcher:(id)arg1;

@end
