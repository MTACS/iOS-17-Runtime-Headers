
@interface CLMonitorConfiguration : NSObject <CLIdentifiableClientProtocol> {
    id /* block */  _eventHandler;
    NSString * _name;
    NSString * _path;
    CLDispatchSilo * _silo;
    bool  _useMonitorQueue;
    id /* block */  _vendingHandler;
    NSString * identityToken;
    CLLocationManager * manager;
    NSData * storageToken;
    id /* block */  weakClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id /* block */ eventHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identityToken;
@property (nonatomic, retain) CLLocationManager *manager;
@property (readonly) NSString *name;
@property (nonatomic, retain) NSString *path;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSData *storageToken;
@property (readonly) Class superclass;
@property (nonatomic) bool useMonitorQueue;
@property (nonatomic, copy) id /* block */ vendingHandler;
@property (nonatomic) id /* block */ weakClient;

+ (id)_configWithMonitorName:(id)arg1;
+ (id)configWithMonitorName:(id)arg1 queue:(id)arg2 eventHandler:(id /* block */)arg3;

- (void)dealloc;
- (id /* block */)eventHandler;
- (unsigned long long)hash;
- (id)identityToken;
- (id)initWithName:(id)arg1 path:(id)arg2 onQueue:(id)arg3 eventHandler:(id /* block */)arg4 useMonitorQueueForVendingMonitor:(bool)arg5 vendingHandler:(id /* block */)arg6;
- (id)initWithName:(id)arg1 path:(id)arg2 onSilo:(id)arg3 eventHandler:(id /* block */)arg4 useMonitorQueueForVendingMonitor:(bool)arg5 vendingHandler:(id /* block */)arg6;
- (id)manager;
- (id)name;
- (id)path;
- (id)queue;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setIdentityToken:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setStorageToken:(id)arg1;
- (void)setUseMonitorQueue:(bool)arg1;
- (void)setVendingHandler:(id /* block */)arg1;
- (void)setWeakClient:(id /* block */)arg1;
- (id)storageToken;
- (void)updateIdentityToken:(id)arg1 withStorageToken:(id)arg2;
- (bool)useMonitorQueue;
- (void)vendMonitorWithIdentityAndAuthorizationAttributes:(id)arg1;
- (id /* block */)vendingHandler;
- (id /* block */)weakClient;

@end
