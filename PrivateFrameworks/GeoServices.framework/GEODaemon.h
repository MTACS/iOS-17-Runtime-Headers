
@interface GEODaemon : NSObject <GEOPListStateCapturing> {
    NSString * _knownLocale;
    NSObject<OS_xpc_object> * _listener;
    NSObject<OS_xpc_object> * _offlineServiceConenction;
    NSMutableSet * _peers;
    NSObject<OS_dispatch_queue> * _serverQueue;
    NSMutableDictionary * _servers;
    NSMutableArray * _serversToStart;
    NSObject<OS_dispatch_source> * _sigInfoSrc;
    NSObject<OS_dispatch_source> * _sigTermSrc;
    NSObject<OS_dispatch_source> * _sigUsr1Src;
    unsigned long long  _stateCaptureHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOfflineService;
@property (nonatomic, readonly) NSSet *peers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serverQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createPeerForConnection:(id)arg1;
- (void)_handleNewConnection:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_shutdown;
- (void)addServer:(id)arg1;
- (void)addServerClass:(Class)arg1;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initPrimaryDaemon;
- (id)initWithPort:(const char *)arg1 createXPCListenerBlock:(id /* block */)arg2;
- (void)installSignalHandlers;
- (bool)isOfflineService;
- (void)peerDidConnect:(id)arg1;
- (void)peerDidDisconnect:(id)arg1;
- (id)peers;
- (id)serverQueue;
- (bool)shouldAllowIncomingConnection:(id)arg1;
- (void)shutdown;
- (void)start;
- (id)startServerClassIfNecessary:(Class)arg1;

@end
