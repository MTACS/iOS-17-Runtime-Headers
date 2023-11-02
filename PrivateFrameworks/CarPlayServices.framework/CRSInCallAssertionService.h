
@interface CRSInCallAssertionService : NSObject <BSServiceConnectionListenerDelegate, CRSInCallClientToServerInterface> {
    NSHashTable * _activatedConnections;
    NSHashTable * _bannersAllowedConnections;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSMutableDictionary * _connections;
    BSServiceConnectionListener * _listener;
    CARObserverHashTable * _observers;
}

@property (nonatomic, retain) NSHashTable *activatedConnections;
@property (nonatomic, retain) NSHashTable *bannersAllowedConnections;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, retain) NSMutableDictionary *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BSServiceConnectionListener *listener;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_connectionQueue_addConnection:(id)arg1;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (id)_init;
- (id)activatedConnections;
- (void)addObserver:(id)arg1;
- (void)addObserver:(id)arg1 notifyIfNeeded:(bool)arg2;
- (id)bannersAllowedConnections;
- (id)connectionQueue;
- (id)connections;
- (id)listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)observers;
- (oneway void)presentInCallService;
- (void)removeObserver:(id)arg1;
- (void)setActivatedConnections:(id)arg1;
- (oneway void)setAllowsBanners:(id)arg1;
- (void)setBannersAllowedConnections:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setObservers:(id)arg1;

@end
