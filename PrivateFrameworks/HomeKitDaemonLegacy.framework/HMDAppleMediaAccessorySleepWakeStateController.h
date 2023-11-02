
@interface HMDAppleMediaAccessorySleepWakeStateController : HMFObject <HMFMessageReceiver> {
    NSUUID * _accessoryUUID;
    <HMDAppleMediaAccessorySleepWakeStateControllerDataSource> * _dataSource;
    NAFuture * _fetchSleepWakeFuture;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFMessageDispatcher * _messageDispatcher;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleFetchSleepWakeStateMessage:(id)arg1;
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3;
- (void)fetchSleepWakeStateWithCompletion:(id /* block */)arg1;
- (id)initWithAccessoryUUID:(id)arg1 dataSource:(id)arg2;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;

@end
