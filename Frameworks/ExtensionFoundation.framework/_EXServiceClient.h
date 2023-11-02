
@interface _EXServiceClient : NSObject {
    NSMutableSet * _activeQueries;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activeQueriesLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    NSXPCConnection * _discoveryConnection;
    NSXPCConnection * _launchConnection;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    NSXPCConnection * _tccProxyConnection;
}

@property (nonatomic, retain) NSMutableSet *activeQueries;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; }*activeQueriesLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; }*connectionLock;
@property (nonatomic, retain) NSXPCConnection *discoveryConnection;
@property (nonatomic, retain) NSXPCConnection *launchConnection;
@property (readonly) NSObject<OS_dispatch_queue> *notifyQueue;
@property (nonatomic, retain) NSXPCConnection *tccProxyConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_activeQueryForQuery:(id)arg1;
- (void)_beginActiveQuery:(id)arg1;
- (id)_init;
- (id)activeQueries;
- (struct os_unfair_lock_s { unsigned int x1; }*)activeQueriesLock;
- (void)addQueryObserver:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; }*)connectionLock;
- (id)discoveryConnection;
- (id)extensionsWithQueries:(id)arg1;
- (void)fetchExtensionsWithQueries:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchResultWithQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)launchConnection;
- (id)launchWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)notifyQueue;
- (bool)photoServiceAuthorizationStatusForExtensionUUID:(id)arg1 error:(id*)arg2;
- (void)reconnectActiveQueries;
- (void)removeQueryObserver:(id)arg1;
- (id)resultWithQuery:(id)arg1;
- (void)setActiveQueries:(id)arg1;
- (void)setDiscoveryConnection:(id)arg1;
- (void)setLaunchConnection:(id)arg1;
- (void)setTccProxyConnection:(id)arg1;
- (id)tccProxyConnection;

@end
