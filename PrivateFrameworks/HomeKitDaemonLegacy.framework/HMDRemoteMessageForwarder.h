
@interface HMDRemoteMessageForwarder : HMFObject <HMFLogging, HMFMessageReceiver> {
    NSUUID * _UUID;
    NSUUID * _contextUUID;
    HMDHome * _home;
    HMFMessageDispatcher * _messageDispatcher;
    NSMutableDictionary * _messagesByIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSUUID *contextUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSMutableDictionary *messagesByIdentifier;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)remoteMessageForwarderUUIDFromUUID:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (void)configureWithMessageDispatcher:(id)arg1;
- (id)contextUUID;
- (void)handleResponseMessage:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 UUID:(id)arg2 workQueue:(id)arg3;
- (id)messageDispatcher;
- (id)messageForForwardedMessage:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)messagesByIdentifier;
- (void)redispatchToResidentMessage:(id)arg1;
- (id)workQueue;

@end
