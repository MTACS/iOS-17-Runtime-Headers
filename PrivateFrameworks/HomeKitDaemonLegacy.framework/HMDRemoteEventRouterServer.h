
@interface HMDRemoteEventRouterServer : NSObject <HMEMessageDatagramServerDataSource, HMEMessageDatagramServerDelegate, HMFLogging, HMFMessageReceiver> {
    NSMutableDictionary * _accessControls;
    HMDRemoteEventRouterServerMessageReceiver * _accessoryMessageReceiver;
    NSUUID * _accessoryUUID;
    HMEMessageDatagramServer * _connectionServer;
    NSMutableArray * _currentConnections;
    <HMDRemoteEventRouterServerDataSource> * _dataSource;
    NSUUID * _homeUUID;
    bool  _isPrimaryResident;
    bool  _isResidentEventProviding;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    NSObject<OS_os_log> * _logger;
    HMFMessageDispatcher * _messageDispatcher;
    NSNotificationCenter * _notificationCenter;
    NSString * _routerRequestMessageName;
    NSString * _routerUpdateMessageName;
    HMDEventRouterTimerProvider * _timerProvider;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSMutableArray *currentConnections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSUUID *residentModeUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleChangeRegistrationsRequest:(id)arg1 originalMessage:(id)arg2;
- (void)_handleConnectRequest:(id)arg1 originalMessage:(id)arg2 connectionMode:(long long)arg3;
- (void)_handleDisconnectRequest:(id)arg1 originalMessage:(id)arg2;
- (void)_handleFetchEventsRequest:(id)arg1 originalMessage:(id)arg2;
- (void)_handleKeepAliveRequest:(id)arg1 originalMessage:(id)arg2;
- (void)_handlePrimaryRequestMessage:(id)arg1;
- (void)_handleProtoRequest:(id)arg1 originalMessage:(id)arg2 connectionMode:(long long)arg3;
- (void)_handleRequestMessage:(id)arg1 connectionMode:(long long)arg2;
- (void)_handleUserPrivilegeChange:(id)arg1;
- (void)_registerForAccessoryMessages:(id)arg1;
- (void)_registerForMessages:(id)arg1 withHome:(id)arg2;
- (id)_underlyingMessageDataFromFragmentMessageData:(id)arg1 error:(id*)arg2;
- (void)configureWithHome:(id)arg1 isPrimaryResident:(bool)arg2 isResidentEventProviding:(bool)arg3 additionalPolicies:(id)arg4;
- (id)currentConnections;
- (id)description;
- (id)dumpStateDescription;
- (void)handleHomeUserRemovedNotification:(id)arg1;
- (void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)arg1;
- (id)initWithPrimaryModeUUID:(id)arg1 residentModeUUID:(id)arg2 queue:(id)arg3 messageDispatcher:(id)arg4 dataSource:(id)arg5 notificationCenter:(id)arg6 requestMessageName:(id)arg7 updateMessageName:(id)arg8 logCategory:(const char *)arg9 logEventSubmitter:(id)arg10 connectionServerFactory:(id /* block */)arg11;
- (id)initWithPrimaryModeUUID:(id)arg1 residentModeUUID:(id)arg2 queue:(id)arg3 messageDispatcher:(id)arg4 dataSource:(id)arg5 notificationCenter:(id)arg6 requestMessageName:(id)arg7 updateMessageName:(id)arg8 subscriptionProvider:(id)arg9 registrationEventRouter:(id)arg10 storeReadHandle:(id)arg11;
- (bool)isErrorHMENotAcceptingConnections:(id)arg1;
- (id)logIdentifier;
- (void)logMetricsForLiveEvents:(id)arg1 cachedEvents:(id)arg2 destinationDevice:(id)arg3 destinationDeviceIdentifier:(id)arg4 responseMessageType:(unsigned long long)arg5;
- (id)messageReceiveQueue;
- (id)messageTargetForMode:(long long)arg1;
- (id)messageTargetUUID;
- (void)refreshConnections:(id)arg1;
- (id)residentModeUUID;
- (void)respondToMessage:(id)arg1 underlyingResponseData:(id)arg2 connection:(id)arg3 label:(id)arg4;
- (void)respondToMessage:(id)arg1 underlyingResponseData:(id)arg2 supportsFragmentMessage:(bool)arg3 label:(id)arg4;
- (id /* block */)responseHandlerForSendMessageIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)sendMessageWithPayloadMessage:(id)arg1 destination:(id)arg2 messageType:(long long)arg3 completion:(id /* block */)arg4;
- (void)server:(id)arg1 connectionDidConnect:(id)arg2;
- (void)server:(id)arg1 connectionDidExpire:(id)arg2;
- (void)server:(id)arg1 connectionDidFail:(id)arg2;
- (id)server:(id)arg1 expandedTopicsForTopics:(id)arg2;
- (id)server:(id)arg1 forwardingTopicsForTopics:(id)arg2;
- (bool)server:(id)arg1 isConnectionTerminatingError:(id)arg2;
- (void)server:(id)arg1 logMetricsForEventTopic:(id)arg2 eventSize:(unsigned long long)arg3 isCached:(bool)arg4;
- (void)server:(id)arg1 logMetricsForMessageDatagramFragmentation:(bool)arg2 isFragmented:(bool)arg3;
- (void)server:(id)arg1 sendEvents:(id)arg2 cachedEvents:(id)arg3 connection:(id)arg4 completion:(id /* block */)arg5;
- (bool)server:(id)arg1 shouldProcessEventsForConnection:(id)arg2 shouldLogState:(bool)arg3;
- (double)server:(id)arg1 timeoutIntervalForConnection:(id)arg2;
- (id)server:(id)arg1 upstreamTopicsForTopic:(id)arg2;
- (double)serverDebounceTimeInterval:(id)arg1;
- (unsigned long long)serverFragmentEventsDataSize:(id)arg1;
- (bool)serverSupportFragmentCachedEvents:(id)arg1;
- (id)serverTimerProvider:(id)arg1;
- (bool)shouldAllowEvent:(id)arg1 topic:(id)arg2 connection:(id)arg3;
- (void)submitLogEvent:(id)arg1;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;

@end
