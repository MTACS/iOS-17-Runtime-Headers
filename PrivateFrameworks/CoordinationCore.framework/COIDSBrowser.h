
@interface COIDSBrowser : NSObject <COBrowserProtocol, COIDSPresenceObserver, COIDSServiceDirectorOnDemandDiscoveryDelegate> {
    id /* block */  _idsPresenceProvider;
    <NSObject> * _idsRegistryObserver;
    id /* block */  _idsServiceProvider;
    NSString * _meshName;
    COBrowserObserverSet * _observerSet;
    COIDSPresence * _presence;
    COIDSServiceDirector * _serviceDirector;
    bool  _started;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ idsPresenceProvider;
@property (nonatomic, retain) <NSObject> *idsRegistryObserver;
@property (nonatomic, copy) id /* block */ idsServiceProvider;
@property (nonatomic, readonly, copy) NSString *meshName;
@property (nonatomic, readonly) COBrowserObserverSet *observerSet;
@property (nonatomic, retain) COIDSPresence *presence;
@property (nonatomic, retain) COIDSServiceDirector *serviceDirector;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)addObserverUsingBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)didAddDevice:(id)arg1;
- (void)didRemoveDevice:(id)arg1;
- (id /* block */)idsPresenceProvider;
- (id)idsRegistryObserver;
- (id /* block */)idsServiceProvider;
- (id)initWithMeshName:(id)arg1 idsServiceName:(id)arg2;
- (id)meshName;
- (id)observerSet;
- (void)onDemandDiscoveryForRequest:(id)arg1;
- (id)presence;
- (id)registeredObservers;
- (void)removeObserver:(id)arg1;
- (id)serviceDirector;
- (void)setIdsPresenceProvider:(id /* block */)arg1;
- (void)setIdsRegistryObserver:(id)arg1;
- (void)setIdsServiceProvider:(id /* block */)arg1;
- (void)setPresence:(id)arg1;
- (void)setServiceDirector:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stop;
- (id)workQueue;

@end
