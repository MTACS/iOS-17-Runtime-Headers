
@interface COService : NSObject <NSXPCListenerDelegate> {
    <COServiceAddOnProvider> * _addOnProvider;
    NSDictionary * _addOns;
    NSDictionary * _assertions;
    COCoordinationServiceClientSet * _clients;
    <COServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSXPCListener * _listener;
    <COServiceListenerProvider> * _listenerProvider;
}

@property (nonatomic, readonly) <COServiceAddOnProvider> *addOnProvider;
@property (nonatomic, copy) NSDictionary *addOns;
@property (nonatomic, copy) NSDictionary *assertions;
@property (nonatomic, copy) COCoordinationServiceClientSet *clients;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <COServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, readonly) <COServiceListenerProvider> *listenerProvider;
@property (readonly) Class superclass;

+ (bool)_isAllowedClient:(id)arg1;

- (void).cxx_destruct;
- (void)_addMesh:(id)arg1 forClusters:(id)arg2;
- (void)_addOnAdded:(id)arg1;
- (id)_addOnForCluster:(id)arg1;
- (void)_addOnForCluster:(id)arg1 completion:(id /* block */)arg2;
- (void)_addOnRemoved:(id)arg1;
- (bool)_applicableToCluster:(id)arg1;
- (void)_clientLost:(id)arg1;
- (id)_clustersForAddOn:(id)arg1;
- (void)_configureServiceInterfacesOnConnection:(id)arg1;
- (id)_newClientForConnection:(id)arg1;
- (void)_releaseAssertionForCluster:(id)arg1;
- (void)_removeMeshForClusters:(id)arg1;
- (void)_serviceReady;
- (void)_takeAssertionForCluster:(id)arg1;
- (id)_uniqueAddOns;
- (id)addOnProvider;
- (id)addOns;
- (id)assertions;
- (id)clientForConnection:(id)arg1;
- (id)clients;
- (id)currentClient;
- (id)delegate;
- (id)dispatchQueue;
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;
- (void)joinClusters:(id)arg1 usingMeshController:(id)arg2 withClusterIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)leaveClusters:(id)arg1 withClusterIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerProvider;
- (void)setAddOns:(id)arg1;
- (void)setAssertions:(id)arg1;
- (void)setClients:(id)arg1;

@end
