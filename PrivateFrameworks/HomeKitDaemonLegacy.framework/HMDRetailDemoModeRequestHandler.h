
@interface HMDRetailDemoModeRequestHandler : HMFObject <HMFMessageReceiver> {
    HMDHomeManager * _homeManager;
    NSUUID * _identifier;
    HMFMessageDispatcher * _messageDispatcher;
    <HMDRelaunchHandling> * _relaunchHandler;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) <HMDRelaunchHandling> *relaunchHandler;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_handleConfigRetailDemoModeMessage:(id)arg1;
- (void)_handleConfigRetailDemoModeMessageForFinalize:(id)arg1;
- (void)_handleConfigRetailDemoModeMessageForPrepare:(id)arg1;
- (void)configure;
- (id)homeManager;
- (id)identifier;
- (id)initWithHomeManager:(id)arg1 messageDispatcher:(id)arg2 relaunchHandler:(id)arg3;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)relaunchHandler;
- (id)workQueue;

@end
