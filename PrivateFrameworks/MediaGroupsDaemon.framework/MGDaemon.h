
@interface MGDaemon : NSObject <MGGroupsQueryAgentDelegate, MGInternalQueryRunner, MGServiceInterfaceProtocol, NSXPCListenerDelegate> {
    MGServiceClientSet * _clients;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    MGGroupsMediator * _groupsMediator;
    NSDictionary * _internalQueries;
    NSXPCListener * _listener;
    MGServiceListenerProvider * _listenerProvider;
    MGGroupsQueryAgent * _queryAgent;
    MGRemoteQueryClientManager * _remoteQueryClient;
    MGRemoteQueryServerManager * _remoteQueryServer;
    MGClientService * _serviceForIngestion;
    id /* block */  _topologyRequestHandler;
}

@property (nonatomic, readonly) MGServiceClientSet *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) MGGroupsMediator *groupsMediator;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *internalQueries;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, readonly) MGServiceListenerProvider *listenerProvider;
@property (nonatomic, readonly) MGGroupsQueryAgent *queryAgent;
@property (nonatomic, readonly) MGRemoteQueryClientManager *remoteQueryClient;
@property (nonatomic, readonly) MGRemoteQueryServerManager *remoteQueryServer;
@property (nonatomic, retain) MGClientService *serviceForIngestion;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ topologyRequestHandler;

+ (id)daemon;
+ (id)daemonWithTopologyRequestHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)HomeKitAccessoryOfType:(id)arg1 accessoryIdentifier:(id)arg2 homeIdentifier:(id)arg3 categoryType:(id)arg4 name:(id)arg5 properties:(id)arg6 completion:(id /* block */)arg7;
- (void)_addHomeKitAccessoryWithoutHomeIngestion:(id)arg1 fromHome:(id)arg2;
- (void)_homeTheaterGroupIdentifierForAudioDestination:(id)arg1 fromHome:(id)arg2 completion:(id /* block */)arg3;
- (void)_ingestHomeKitHome:(id)arg1;
- (void)addHomeKitAccessory:(id)arg1 fromHome:(id)arg2;
- (void)addHomeKitHome:(id)arg1;
- (void)addHomeKitMediaSystem:(id)arg1;
- (void)addHomeKitMediaSystem:(id)arg1 fromHome:(id)arg2;
- (void)addHomeKitRoom:(id)arg1 fromHome:(id)arg2;
- (void)addHomeKitZone:(id)arg1 fromHome:(id)arg2;
- (void)addMember:(id)arg1 group:(id)arg2 completion:(id /* block */)arg3;
- (id)clients;
- (void)createGroupWithType:(id)arg1 name:(id)arg2 members:(id)arg3 completion:(id /* block */)arg4;
- (void)deleteGroup:(id)arg1 completion:(id /* block */)arg2;
- (id)dispatchQueue;
- (id)groupsMediator;
- (void)groupsQueryAgent:(id)arg1 didFindGroups:(id)arg2 forQuery:(id)arg3;
- (id)init;
- (id)initWithServiceListenerProvider:(id)arg1;
- (id)initWithTopologyRequestHandler:(id /* block */)arg1 serviceListenerProvider:(id)arg2;
- (id)internalQueries;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerProvider;
- (id)queryAgent;
- (id)remoteQueryClient;
- (id)remoteQueryServer;
- (void)removeHomeKitAccessory:(id)arg1 fromHome:(id)arg2;
- (void)removeHomeKitHome:(id)arg1;
- (void)removeHomeKitMediaSystem:(id)arg1;
- (void)removeHomeKitMediaSystem:(id)arg1 fromHome:(id)arg2;
- (void)removeHomeKitRoom:(id)arg1 fromHome:(id)arg2;
- (void)removeHomeKitZone:(id)arg1 fromHome:(id)arg2;
- (void)removeMember:(id)arg1 group:(id)arg2 completion:(id /* block */)arg3;
- (id)serviceForIngestion;
- (void)setInternalQueries:(id)arg1;
- (void)setName:(id)arg1 group:(id)arg2 completion:(id /* block */)arg3;
- (void)setServiceForIngestion:(id)arg1;
- (void)setTopologyRequestHandler:(id /* block */)arg1;
- (id)startInternalQueryWithPredicate:(id)arg1 handler:(id /* block */)arg2;
- (void)startOutstandingQueryWithPredicate:(id)arg1 handler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)startQueryWithPredicate:(id)arg1 completion:(id /* block */)arg2;
- (void)stopInternalQuery:(id)arg1;
- (void)stopOutstandingQuery:(id)arg1;
- (void)stopQuery:(id)arg1;
- (void)stopQuery:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)topologyRequestHandler;

@end
