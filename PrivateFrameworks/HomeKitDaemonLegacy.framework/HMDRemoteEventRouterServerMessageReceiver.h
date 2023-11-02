
@interface HMDRemoteEventRouterServerMessageReceiver : NSObject <HMFMessageReceiver> {
    NSObject<OS_dispatch_queue> * _queue;
    HMDRemoteEventRouterServer * _server;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleRequestMessage:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;

@end
