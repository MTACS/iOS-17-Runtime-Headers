
@interface COCapabilityManager : NSObject <COCapabilityManagerClientInterface> {
    NSXPCConnection * _lastConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSArray * _observers;
    <COCapabilityManagerConnectionProvider> * _provider;
    NSSet * _registeredCapabilities;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSXPCConnection *lastConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic, copy) NSArray *observers;
@property (nonatomic, readonly) <COCapabilityManagerConnectionProvider> *provider;
@property (nonatomic, copy) NSSet *registeredCapabilities;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lostConnectionToService;
- (void)_notifyObserver:(id)arg1 available:(bool)arg2;
- (void)_registerCapabililty:(id)arg1;
- (void)_registerObserver:(id)arg1;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)arg1;
- (void)_withLock:(id /* block */)arg1;
- (id)addObserverForCapability:(id)arg1 inCluster:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)availabilityChanged:(bool)arg1 ofCapability:(id)arg2 inCluster:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithConnectionProvider:(id)arg1;
- (id)lastConnection;
- (id)observerQueue;
- (id)observers;
- (id)provider;
- (void)registerCapability:(id)arg1;
- (id)registeredCapabilities;
- (void)removeObserver:(id)arg1;
- (void)setLastConnection:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setRegisteredCapabilities:(id)arg1;
- (void)unregisterCapability:(id)arg1;

@end
