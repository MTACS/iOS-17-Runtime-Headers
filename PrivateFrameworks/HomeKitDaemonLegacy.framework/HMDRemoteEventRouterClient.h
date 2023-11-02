
@interface HMDRemoteEventRouterClient : NSObject <HMDRemoteEventRouterAssertionClient, HMEMessageDatagramClientDataSource, HMEMessageDatagramClientDelegate, HMFLogging, HMFMessageReceiver> {
    <HMDRemoteEventRouterClientDataSource> * _dataSource;
    HMEMessageDatagramClient * _eventRouterClient;
    NSUUID * _identifier;
    bool  _isConnected;
    bool  _isNetworkAvailable;
    bool  _isPrimaryResident;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    NSObject<OS_os_log> * _logger;
    HMFMessageDispatcher * _messageDispatcher;
    NSNotificationCenter * _notificationCenter;
    NSString * _requestMessageName;
    NSString * _updateMessageName;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) <HMDRemoteEventRouterClientDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMEMessageDatagramClient *eventRouterClient;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (nonatomic) bool isConnected;
@property (nonatomic) bool isNetworkAvailable;
@property (readonly) bool isPrimaryResident;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) unsigned long long messageTransportRestriction;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSString *requestMessageName;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *updateMessageName;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)routerClientWithQueue:(id)arg1 storeReadHandle:(id)arg2 storeWriteHandle:(id)arg3 logCategory:(const char *)arg4;
+ (id)routerClientWithQueue:(id)arg1 storeReadHandle:(id)arg2 storeWriteHandle:(id)arg3 retryIntervalProvider:(id)arg4 logCategory:(const char *)arg5;

- (void).cxx_destruct;
- (void)_handleCachedEventMessage:(id)arg1 fromServer:(id)arg2 events:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleEventUpdateMessage:(id)arg1 fromServer:(id)arg2 events:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleUpdateMessage:(id)arg1;
- (void)_handleUpdatedEventsRequest:(id)arg1 originalMessage:(id)arg2;
- (void)_registerForMessages:(id)arg1;
- (id)_underlyingMessageDataFromFragmentMessageData:(id)arg1 error:(id*)arg2;
- (void)client:(id)arg1 fetchWithFilters:(id)arg2 completion:(id /* block */)arg3;
- (id)client:(id)arg1 forwardingTopicsForTopics:(id)arg2;
- (bool)client:(id)arg1 isConnectionTerminatingError:(id)arg2;
- (void)client:(id)arg1 sendChangeRegistrationsWithAddedFilters:(id)arg2 removedFilters:(id)arg3 completion:(id /* block */)arg4;
- (void)client:(id)arg1 sendConnectWithAddedFilters:(id)arg2 completion:(id /* block */)arg3;
- (id)client:(id)arg1 upstreamTopicsForTopic:(id)arg2;
- (void)clientDidConnect:(id)arg1 serverIdentifier:(id)arg2;
- (void)clientDidDisconnect:(id)arg1;
- (bool)clientIsEnabled:(id)arg1;
- (void)configureIsPrimaryResident:(bool)arg1 networkAvailable:(bool)arg2 additionalPolicies:(id)arg3;
- (id)dataSource;
- (void)didChangeFetchAvailableCondition:(bool)arg1;
- (void)didChangeHasForegroundClient:(bool)arg1;
- (id)dumpStateDescription;
- (id)eventRouter;
- (id)eventRouterClient;
- (void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)arg1;
- (id)identifier;
- (id)initWithMessageTargetUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 logCategory:(const char *)arg8 logEventSubmitter:(id)arg9 eventRouterClientFactory:(id /* block */)arg10;
- (id)initWithMessageTargetUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 storeReadHandle:(id)arg8 storeWriteHandle:(id)arg9;
- (id)initWithMessageTargetUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 storeReadHandle:(id)arg8 storeWriteHandle:(id)arg9 logCategory:(const char *)arg10;
- (id)initWithMessageTargetUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 storeReadHandle:(id)arg8 storeWriteHandle:(id)arg9 retryIntervalProvider:(id)arg10 logCategory:(const char *)arg11;
- (bool)isConnected;
- (bool)isNetworkAvailable;
- (bool)isPrimaryResident;
- (id)logEventSubmitter;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (unsigned long long)messageTransportRestriction;
- (void)networkAvailabilityDidChange:(bool)arg1;
- (id)notificationCenter;
- (id)requestMessageName;
- (id /* block */)responseHandlerForMessageIdentifier:(id)arg1 serverIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)sendChangeRegistrationsMessageWithAddedFilters:(id)arg1 removedFilters:(id)arg2 client:(id)arg3 completion:(id /* block */)arg4;
- (void)sendChangeRegistrationsMessageWithAddedFilters:(id)arg1 removedFilters:(id)arg2 completion:(id /* block */)arg3;
- (void)sendDisconnectForClient:(id)arg1 completion:(id /* block */)arg2;
- (void)sendKeepAliveForClient:(id)arg1 completion:(id /* block */)arg2;
- (void)sendMessageWithPayloadMessage:(id)arg1 client:(id)arg2 messageType:(long long)arg3 completion:(id /* block */)arg4;
- (void)sendMessageWithPayloadMessage:(id)arg1 messageType:(long long)arg2 destination:(id)arg3 serverIdentifier:(id)arg4 completion:(id /* block */)arg5;
- (void)setIsConnected:(bool)arg1;
- (void)setIsNetworkAvailable:(bool)arg1;
- (id)updateMessageName;
- (id)workQueue;

@end
