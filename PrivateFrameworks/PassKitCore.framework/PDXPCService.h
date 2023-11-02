
@interface PDXPCService : NSObject <PDXPCServiceExportedInterface> {
    bool  _callbacksSuspended;
    NSString * _className;
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _remoteProcessApplicationIdentifier;
    int  _remoteProcessIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *remoteProcessApplicationIdentifier;
@property (nonatomic, readonly) PDXPCApplicationInfo *remoteProcessApplicationInfo;
@property (nonatomic, readonly) NSString *remoteProcessBundleIdentifier;
@property (nonatomic, readonly) int remoteProcessIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activated;
- (void)clearConnectionReference;
- (id)connection;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)remoteProcessApplicationIdentifier;
- (id)remoteProcessApplicationInfo;
- (id)remoteProcessBundleIdentifier;
- (int)remoteProcessIdentifier;
- (void)serviceResumed;
- (void)serviceSuspended;

@end
