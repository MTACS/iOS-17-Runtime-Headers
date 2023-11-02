
@interface HMDXPCEventRouterServer : NSObject <HMEPersistentConnectionServerDataSource, HMEPersistentConnectionServerDelegate, HMFLogging, HMFMessageReceiver> {
    NSString * _changeRegistrationsMessageName;
    <HMDXPCEventRouterServerDataSource> * _dataSource;
    HMFMessageDispatcher * _messageDispatcher;
    NSUUID * _messageUUID;
    NSNotificationCenter * _notificationCenter;
    HMEPersistentConnectionServer * _persistentConnectionServer;
    NSString * _updateEventsMessageName;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *changeRegistrationsMessageName;
@property (readonly) <HMDXPCEventRouterServerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly, copy) NSUUID *messageUUID;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMEPersistentConnectionServer *persistentConnectionServer;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *updateEventsMessageName;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleChangeRegistrationsRequest:(id)arg1;
- (id)changeRegistrationsMessageName;
- (void)configure;
- (id)dataSource;
- (unsigned long long)debounceTimeForConnection:(id)arg1;
- (id)dumpStateDescription;
- (void)handleConnectionActiveStateChange:(id)arg1;
- (void)handleXPCConnectionInvalidated:(id)arg1;
- (id)initWithMessageUUID:(id)arg1 dataSource:(id)arg2 changeRegistrationsMessageName:(id)arg3 updateEventsMessageName:(id)arg4 messageDispatcher:(id)arg5 queue:(id)arg6 notificationCenter:(id)arg7 persistentConnectionServerFactory:(id /* block */)arg8;
- (id)initWithMessageUUID:(id)arg1 dataSource:(id)arg2 changeRegistrationsMessageName:(id)arg3 updateEventsMessageName:(id)arg4 messageDispatcher:(id)arg5 queue:(id)arg6 notificationCenter:(id)arg7 subscriptionProvider:(id)arg8 registrationEventRouter:(id)arg9 storeReadHandle:(id)arg10;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)messageUUID;
- (id)notificationCenter;
- (id)persistentConnectionServer;
- (void)registerForMessages;
- (void)sendUpdatedCachedEvents:(id)arg1 toConnection:(id)arg2;
- (void)sendUpdatedEvents:(id)arg1 toConnection:(id)arg2;
- (id)server:(id)arg1 expandedTopicsForTopics:(id)arg2;
- (id)server:(id)arg1 upstreamTopicsForTopic:(id)arg2;
- (bool)shouldAllowEvent:(id)arg1 topic:(id)arg2 connection:(id)arg3;
- (id)updateEventsMessageName;
- (id)workQueue;

@end
