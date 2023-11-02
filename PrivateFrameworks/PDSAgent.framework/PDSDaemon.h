
@interface PDSDaemon : NSObject <PDSDaemonListenerVendor> {
    PDSXPCServer * _XPCServer;
    IDSServerBag * _bag;
    PDSCDCacheContainer * _cacheContainer;
    PDSConfiguration * _configuration;
    PDSCoordinator * _coordinator;
    PDSEntryStore * _entryStore;
    PDSRequestQueue * _requestQueue;
    <PDSCDCache><PDSKVStore> * _underlyingStorage;
    PDSUserTracker * _userTracker;
}

@property (nonatomic, retain) PDSXPCServer *XPCServer;
@property (nonatomic, retain) IDSServerBag *bag;
@property (nonatomic, retain) PDSCDCacheContainer *cacheContainer;
@property (nonatomic, retain) PDSConfiguration *configuration;
@property (nonatomic, retain) PDSCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PDSEntryStore *entryStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PDSRequestQueue *requestQueue;
@property (readonly) Class superclass;
@property (nonatomic) <PDSCDCache><PDSKVStore> *underlyingStorage;
@property (nonatomic, retain) PDSUserTracker *userTracker;

- (void).cxx_destruct;
- (id)XPCServer;
- (id)_entryStore;
- (id)_underlyingStorage;
- (id)bag;
- (id)cacheContainer;
- (id)configuration;
- (id)coordinator;
- (id)entryStore;
- (id)initWithConfiguration:(id)arg1;
- (id)remoteInternalListener;
- (id)remoteListenerForAllClientIDs;
- (id)remoteListenerForClientIDs:(id)arg1;
- (id)requestQueue;
- (void)setBag:(id)arg1;
- (void)setCacheContainer:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setEntryStore:(id)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)setUnderlyingStorage:(id)arg1;
- (void)setUserTracker:(id)arg1;
- (void)setXPCServer:(id)arg1;
- (void)start;
- (id)underlyingStorage;
- (id)userTracker;

@end
