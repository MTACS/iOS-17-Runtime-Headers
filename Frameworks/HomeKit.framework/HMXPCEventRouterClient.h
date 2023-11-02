
@interface HMXPCEventRouterClient : NSObject <HMEPersistentConnectionClientDelegate, HMFLogging, HMFMessageReceiver> {
    NSString * _changeRegistrationsMessageName;
    HMEPersistentConnectionClient * _eventRouterClient;
    NSUUID * _identifier;
    bool  _isActive;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFMessageDispatcher * _messageDispatcher;
    NSNotificationCenter * _notificationCenter;
    NSString * _updateMessageName;
    bool  _useBackgroundTaskAssertion;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *changeRegistrationsMessageName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMEPersistentConnectionClient *eventRouterClient;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property bool isActive;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *updateMessageName;
@property (readonly) bool useBackgroundTaskAssertion;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleUpdateEventsMessage:(id)arg1;
- (id)changeRegistrationsMessageName;
- (void)configure;
- (id)eventRouter;
- (id)eventRouterClient;
- (void)finishedWritingToStore:(unsigned long long)arg1;
- (id)forwardingTopicsForTopics:(id)arg1;
- (void)handleActiveAssertionSendState:(id)arg1;
- (void)handleDidBecomeActive:(id)arg1;
- (void)handleWillResignActive:(id)arg1;
- (id)identifier;
- (id)initWithMessageTargetUUID:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3 changeRegistrationsMessageName:(id)arg4 updateMessageName:(id)arg5 notificationCenter:(id)arg6 useBackgroundTaskAssertion:(bool)arg7 eventRouterClientFactory:(id /* block */)arg8;
- (id)initWithMessageTargetUUID:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3 changeRegistrationsMessageName:(id)arg4 updateMessageName:(id)arg5 storeReadHandle:(id)arg6 storeWriteHandle:(id)arg7 useBackgroundTaskAssertion:(bool)arg8;
- (bool)isActive;
- (bool)isActiveForSaving;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)notificationCenter;
- (void)sendChangeRegistrationsMessageWithAddedFilters:(id)arg1 removedFilters:(id)arg2 completion:(id /* block */)arg3;
- (void)setIsActive:(bool)arg1;
- (id)updateMessageName;
- (bool)useBackgroundTaskAssertion;
- (unsigned long long)willWriteToStore;
- (id)workQueue;

@end
