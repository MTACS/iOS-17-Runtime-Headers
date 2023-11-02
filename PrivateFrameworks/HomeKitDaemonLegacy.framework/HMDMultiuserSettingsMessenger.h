
@interface HMDMultiuserSettingsMessenger : HMFObject <HMFLogging, HMFMessageReceiver> {
    HMDHome * _home;
    HMFMessageDispatcher * _messageDispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)handleFetchMultiuserSettingsRequest:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 messageDispatcher:(id)arg2;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageTargetUUID;
- (void)registerForMessages;

@end
