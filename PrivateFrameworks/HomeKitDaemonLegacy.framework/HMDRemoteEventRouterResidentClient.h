
@interface HMDRemoteEventRouterResidentClient : HMDRemoteEventRouterClient {
    bool  _hasResetConnectionTimer;
    NSUUID * _homeUUID;
}

@property (readonly, copy) NSUUID *homeUUID;

- (void).cxx_destruct;
- (void)_registerForNotifications;
- (id)accessoryUUID;
- (id)client:(id)arg1 upstreamTopicsForTopic:(id)arg2;
- (bool)clientIsEnabled:(id)arg1;
- (void)configureIsPrimaryResident:(bool)arg1 networkAvailable:(bool)arg2 additionalPolicies:(id)arg3;
- (id)dumpStateDescription;
- (id)forwardingTopicsForTopics:(id)arg1 downstreamRouter:(id)arg2;
- (void)handleAccessoryDeviceDidUpdateNotification:(id)arg1;
- (void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)arg1;
- (void)handlePrimaryResidentReceivedIncomingConnection:(id)arg1;
- (id)homeUUID;
- (id)initWitAccessoryUUID:(id)arg1 homeUUID:(id)arg2 queue:(id)arg3 dataSource:(id)arg4 messageDispatcher:(id)arg5 notificationCenter:(id)arg6 requestMessageName:(id)arg7 updateMessageName:(id)arg8 storeReadHandle:(id)arg9 storeWriteHandle:(id)arg10 retryIntervalProvider:(id)arg11 logCategory:(const char *)arg12;

@end
