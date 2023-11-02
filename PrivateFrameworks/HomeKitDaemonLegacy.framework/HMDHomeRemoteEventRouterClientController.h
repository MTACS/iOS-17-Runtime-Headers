
@interface HMDHomeRemoteEventRouterClientController : NSObject <HMDRemoteEventRouterClientDataSource, HMEDelegatingEventRouterDataSource> {
    HMDUserMessagePolicy * _clientUserMessagePolicy;
    NSUUID * _currentAccessoryUUID;
    <HMDHomeRemoteEventRouterClientControllerDataSource> * _dataSource;
    HMDHomeManager * _homeManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _messageTargetUUID;
    HMDRemoteEventRouterPrimaryResidentClient * _remoteEventRouterPrimaryResidentClient;
    NSString * _requestMessageName;
    NSMutableArray * _residentClients;
    HMEDelegatingEventRouter * _residentDelegatingEventRouter;
    <HMDHomeRemoteEventRouterClientFactory> * _routerClientFactory;
    NSString * _updateMessageName;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHomeManager *homeManager;
@property (readonly) NSUUID *homeUUID;
@property (readonly) HMEDelegatingEventRouter *residentDelegatingEventRouter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)client:(id)arg1 forwardingTopicsForTopics:(id)arg2;
- (bool)client:(id)arg1 isIdsIdentifier:(id)arg2 ofAccessory:(id)arg3;
- (void)createResidentRouterForAccessoryUUID:(id)arg1;
- (id)delegatingRouter:(id)arg1 filteredTopics:(id)arg2 forRouter:(id)arg3;
- (id)delegatingRouter:(id)arg1 upstreamTopicsFor:(id)arg2;
- (void)discoverPrimaryResidentForEventRouterClient:(id)arg1;
- (id)dumpStateDescription;
- (id)homeManager;
- (id)homeUUID;
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 dataSource:(id)arg3 requestMessageName:(id)arg4 updateMessageName:(id)arg5 clientUserMessagePolicy:(id)arg6 currentAccessoryUUID:(id)arg7 assertionController:(id)arg8;
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 dataSource:(id)arg3 routerClientFactory:(id)arg4 requestMessageName:(id)arg5 updateMessageName:(id)arg6 clientUserMessagePolicy:(id)arg7 currentAccessoryUUID:(id)arg8 assertionController:(id)arg9 delegatingRouterFactory:(id /* block */)arg10;
- (bool)isCurrentDevicePrimaryResident;
- (bool)isNetworkAvailable;
- (void)networkAvailabilityDidChange:(bool)arg1;
- (id)primaryResidentChangeMonitorForRouterClient:(id)arg1;
- (void)removeResidentRouterForAccessoryUUID:(id)arg1;
- (id)residentDelegatingEventRouter;
- (id)routerClientMessageDestination:(id)arg1 serverIdentifier:(out id*)arg2;
- (id)routerClientPrimaryResidentDeviceIdentifier:(id)arg1;
- (bool)routerClientShouldRestrictMessagingToLocalOnly:(id)arg1;
- (bool)routerClientSupportsFragmentMessageForServerIdentifier:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)updateCurrentAccessoryUUID:(id)arg1;

@end
