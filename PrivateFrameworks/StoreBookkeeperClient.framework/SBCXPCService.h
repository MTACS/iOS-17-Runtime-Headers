
@interface SBCXPCService : NSObject {
    SBCXPCServiceInterface * _XPCServiceInterface;
    SBCClientConfiguration * _clientConfiguration;
    bool  _connectionConfigured;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) SBCXPCServiceInterface *XPCServiceInterface;
@property (nonatomic, readonly) SBCClientConfiguration *clientConfiguration;
@property (getter=isConnectionConfigured, nonatomic) bool connectionConfigured;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)XPCInterfaceDebugDescription;
+ (Class)XPCServiceInterfaceClass;
+ (id)newListener;

- (void).cxx_destruct;
- (id)XPCServiceInterface;
- (void)_openServiceConnection;
- (void)_serverDidLaunch;
- (id)clientConfiguration;
- (void)closeServiceConnection;
- (void)dealloc;
- (void)didConnectToService;
- (id)initWithClientConfiguration:(id)arg1;
- (bool)isConnectionConfigured;
- (id)newServiceConnection;
- (id)queue;
- (void)setClientConfiguration:(id)arg1;
- (void)setConnectionConfigured:(bool)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
