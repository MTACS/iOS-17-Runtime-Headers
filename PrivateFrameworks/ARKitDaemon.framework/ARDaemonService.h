
@interface ARDaemonService : NSObject <ARDaemonServiceBaseProtocol, ARServiceType> {
    bool  _active;
    bool  _authorized;
    NSString * _clientBundleIdentifier;
    int  _clientProcessIdentifier;
    NSString * _clientProcessName;
    <ARRemoteServiceBaseProtocol> * _clientService;
    NSXPCConnection * _connection;
    NSObject<OS_os_activity> * _daemonServiceActivity;
    <ARDaemonServiceDataSource> * _dataSource;
    <ARDaemonServiceDelegate> * _delegate;
    bool  _immersive;
    ARRemoteService * _remoteService;
    NSObject<OS_os_transaction> * _transaction;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) int clientProcessIdentifier;
@property (nonatomic, readonly) NSString *clientProcessName;
@property (readonly) <ARRemoteServiceBaseProtocol> *clientService;
@property (retain) NSXPCConnection *connection;
@property (nonatomic) <ARDaemonServiceDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARDaemonServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) ARRemoteService *remoteService;
@property (readonly) Class superclass;

+ (bool)isSupported;
+ (bool)isUnique;
+ (Class)remoteServiceClass;
+ (id)serviceName;

- (void).cxx_destruct;
- (void)_commonInitWithProcessName:(id)arg1 processIdentifier:(int)arg2 bundleIdentifier:(id)arg3;
- (id)clientBundleIdentifier;
- (int)clientProcessIdentifier;
- (id)clientProcessName;
- (id)clientService;
- (id)connection;
- (id)dataSource;
- (id)delegate;
- (id)initAsLocalService;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnection:(id)arg1 exportedInterface:(id)arg2 remoteObjectInterface:(id)arg3;
- (id)initWithRemoteService:(id)arg1;
- (void)interruptionHandler;
- (void)invalidate;
- (void)invalidationHandler;
- (bool)isActive;
- (id)remoteService;
- (void)resume;
- (void)setActive:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRemoteService:(id)arg1;
- (void)startService:(id /* block */)arg1;
- (void)suspend;

@end
