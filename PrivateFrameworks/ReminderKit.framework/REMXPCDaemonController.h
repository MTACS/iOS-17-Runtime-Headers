
@interface REMXPCDaemonController : NSObject <REMDaemonController> {
    <REMXPCDaemonControllerCloudKitNetworkActivityDelegate> * _cloudKitNetworkActivityDelegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _ivarLock;
    NSMutableDictionary * _l_performersByName;
    NSString * _serviceName;
    REMStoreContainerToken * _storeContainerToken;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <REMXPCDaemonControllerCloudKitNetworkActivityDelegate> *cloudKitNetworkActivityDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } ivarLock;
@property (nonatomic, retain) NSMutableDictionary *l_performersByName;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, retain) REMStoreContainerToken *storeContainerToken;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)userInteractiveDaemonController;
+ (id)weakSharedInstance;

- (void).cxx_destruct;
- (void)_asyncPerformerWithResolver:(id)arg1 reason:(id)arg2 loadHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (void)_asyncResolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (void)_asyncResolvePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (id)_resolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(id /* block */)arg3;
- (id)_resolvePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(id /* block */)arg3;
- (id)_syncPerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(id /* block */)arg3;
- (void)_xpcConnectionDidInterrupt;
- (void)_xpcConnectionDidInvalidate;
- (id)_xpcConnectionReconnectingIfNecessary;
- (void)asyncDebugPerformerWithReason:(id)arg1 loadHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)asyncIndexingPerformerWithReason:(id)arg1 loadHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)asyncStorePerformerWithReason:(id)arg1 loadHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)asyncSyncInterfacePerformerWithReason:(id)arg1 loadHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)cloudKitNetworkActivityDelegate;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithStoreContainerToken:(id)arg1;
- (id)initWithStoreContainerToken:(id)arg1 userInteractive:(bool)arg2;
- (void)invalidate;
- (struct os_unfair_lock_s { unsigned int x1; })ivarLock;
- (id)l_performersByName;
- (id)serviceName;
- (void)setCloudKitNetworkActivityDelegate:(id)arg1;
- (void)setIvarLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setL_performersByName:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setStoreContainerToken:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)storeContainerToken;
- (id)syncChangeTrackingPerformerWithReason:(id)arg1 errorHandler:(id /* block */)arg2;
- (id)syncDebugPerformerWithErrorHandler:(id /* block */)arg1;
- (id)syncDebugPerformerWithReason:(id)arg1 errorHandler:(id /* block */)arg2;
- (id)syncIndexingPerformerWithReason:(id)arg1 errorHandler:(id /* block */)arg2;
- (id)syncStorePerformerWithReason:(id)arg1 errorHandler:(id /* block */)arg2;
- (id)syncSyncInterfacePerformerWithReason:(id)arg1 errorHandler:(id /* block */)arg2;
- (id)xpcConnection;

@end
