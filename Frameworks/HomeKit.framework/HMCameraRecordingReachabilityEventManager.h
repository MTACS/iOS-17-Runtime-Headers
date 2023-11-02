
@interface HMCameraRecordingReachabilityEventManager : NSObject <HMFLogging, HMFMessageReceiver> {
    _HMContext * _context;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNotificationCenter * _notificationCenter;
    NSHashTable * _observers;
    NSUUID * _uniqueIdentifier;
}

@property (readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSHashTable *observers;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)configure;
- (id)context;
- (void)dealloc;
- (void)deleteAllEventsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchAllEventsWithCompletion:(id /* block */)arg1;
- (void)fetchCountOfAllEventsWithCompletion:(id /* block */)arg1;
- (void)fetchCountOfEventsWithDateInterval:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchEventsAfterDate:(id)arg1 withLimit:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)fetchEventsBeforeDate:(id)arg1 withLimit:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)fetchEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)fetchEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 shouldOrderAscending:(bool)arg3 completion:(id /* block */)arg4;
- (void)handleDaemonReconnectedNotification:(id)arg1;
- (void)handleDidChangeEventsMessage:(id)arg1;
- (id)initWithContext:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)initWithContext:(id)arg1 uniqueIdentifier:(id)arg2 notificationCenter:(id)arg3;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)notificationCenter;
- (id)observers;
- (void)performCloudPullWithCompletion:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)subscribe;
- (id)uniqueIdentifier;
- (void)unsubscribe;

@end
