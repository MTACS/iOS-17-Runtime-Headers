
@interface GEOPeer : NSObject {
    GEOApplicationAuditToken * _auditToken;
    GEOXPCConnection * _connection;
    GEODaemon * _daemon;
    NSString * _debugIdentifier;
    NSMutableDictionary * _entitlementValueCache;
    unsigned long long  _handleRequestSignpost;
    NSString * _peerID;
    <NSObject> * _peerTransaction;
    bool  _preloading;
    bool  _preloadingExclusively;
    <NSObject> * _preloadingTransaction;
    NSString * _serverIdentifier;
    unsigned long long  _serverType;
}

@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) GEOXPCConnection *connection;
@property (nonatomic, copy) NSString *debugIdentifier;
@property (nonatomic) unsigned long long handleRequestSignpost;
@property (nonatomic, readonly) bool isLocationd;
@property (nonatomic, readonly) NSString *offlineCohortId;
@property (nonatomic, readonly) NSString *peerID;
@property (nonatomic) bool preloading;
@property (nonatomic) bool preloadingExclusively;
@property (nonatomic, copy) NSString *serverIdentifier;
@property (nonatomic, readonly) unsigned long long serverType;

- (void).cxx_destruct;
- (void)_handleEvent:(id)arg1;
- (id)auditToken;
- (id)bundleIdentifier;
- (id)connection;
- (void)dealloc;
- (id)debugIdentifier;
- (id)description;
- (unsigned long long)handleRequestSignpost;
- (bool)hasEntitlement:(id)arg1;
- (id)initWithConnection:(id)arg1 daemon:(id)arg2;
- (bool)isForServerIdentifier:(id)arg1;
- (bool)isForServerType:(unsigned long long)arg1;
- (bool)isLocationd;
- (id)offlineCohortId;
- (id)peerID;
- (bool)preloading;
- (bool)preloadingExclusively;
- (id)serverIdentifier;
- (unsigned long long)serverType;
- (void)setDebugIdentifier:(id)arg1;
- (void)setHandleRequestSignpost:(unsigned long long)arg1;
- (void)setPreloading:(bool)arg1;
- (void)setPreloadingExclusively:(bool)arg1;
- (void)setServerIdentifier:(id)arg1;
- (id)valueForEntitlement:(id)arg1;

@end
