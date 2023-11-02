
@interface DDSInterface : NSObject <DDSManaging, DDSManagingDelegate> {
    NSObject<OS_dispatch_queue> * _connectionUsageQueue;
    <DDSManagingDelegate> * _delegate;
    NSXPCConnection * _remoteServer;
    <DDSManaging> * _serverOverride;
    DDSInterface * _sharedInstance;
    NSString * _xpcServiceName;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *connectionUsageQueue;
@property (readonly, copy) NSString *debugDescription;
@property <DDSManagingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCConnection *remoteServer;
@property (nonatomic, retain) <DDSManaging> *serverOverride;
@property (nonatomic, readonly) DDSInterface *sharedInstance;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *xpcServiceName;

+ (id)interface;
+ (unsigned long long)xpcConnectionOptionsForServer;

- (void).cxx_destruct;
- (void)_teardownXPCConnection;
- (void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
- (void)assertionIDsForClientID:(id)arg1 reply:(id /* block */)arg2;
- (id)connectionUsageQueue;
- (void)createConnectionIfNecessary;
- (void)dealloc;
- (id)delegate;
- (void)fetchAssetUpdateStatusForQuery:(id)arg1 callback:(id /* block */)arg2;
- (id)initWithXPCServiceName:(id)arg1;
- (id)remoteServer;
- (void)removeAssertionWithID:(id)arg1;
- (id)server;
- (id)serverOverride;
- (id)serviceObjectProxy;
- (void)setDelegate:(id)arg1;
- (void)setRemoteServer:(id)arg1;
- (void)setServerOverride:(id)arg1;
- (id)sharedInstance;
- (id)syncServer;
- (id)syncServiceObjectProxy;
- (void)teardownXPCConnection;
- (void)triggerDump;
- (void)triggerUpdate;
- (void)updateAssetForQuery:(id)arg1 callback:(id /* block */)arg2;
- (id)xpcServiceName;

@end
