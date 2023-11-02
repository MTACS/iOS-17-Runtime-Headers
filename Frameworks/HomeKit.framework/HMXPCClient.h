
@interface HMXPCClient : HMFMessageTransport <HMFLogging, HMFMessageTransportDelegate> {
    NSUUID * _UUID;
    HMXPCMessageTransportConfiguration * _configuration;
    NSXPCConnection * _connection;
    unsigned long long  _homeDataAuthorizationStatus;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logIdentifier;
    int  _notifyRegisterToken;
    NSMutableArray * _reconnectionHandlers;
    bool  _requiresCheckin;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) HMXPCMessageTransportConfiguration *configuration;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long homeDataAuthorizationStatus;
@property (nonatomic, readonly) bool isAuthorizedForHomeDataAccess;
@property (nonatomic, readonly, copy) NSString *logIdentifier;
@property (nonatomic) int notifyRegisterToken;
@property (nonatomic, readonly) NSMutableArray *reconnectionHandlers;
@property (nonatomic) bool requiresCheckin;
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *userInfo;

+ (id)exportedInterface;
+ (id)logCategory;
+ (id)remoteObjectInterface;

- (void).cxx_destruct;
- (id)UUID;
- (id)configuration;
- (id)connection;
- (void)dealloc;
- (unsigned long long)homeDataAuthorizationStatus;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 userInfo:(id)arg2;
- (bool)isAuthorizedForHomeDataAccess;
- (id)logIdentifier;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (int)notifyRegisterToken;
- (id)reconnectionHandlers;
- (void)registerReconnectionHandler:(id /* block */)arg1;
- (bool)requiresCheckin;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setHomeDataAuthorizationStatus:(unsigned long long)arg1;
- (void)setNotifyRegisterToken:(int)arg1;
- (void)setRequiresCheckin:(bool)arg1;
- (id)userInfo;

@end
