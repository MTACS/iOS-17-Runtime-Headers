
@interface AAFXPCSession : NSObject {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    <AAFXPCSessionDelegate> * _delegate;
    NSUUID * _identifier;
    AAFXPCSessionConfig * _remoteServiceConfig;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } connectionLock;
@property (nonatomic) <AAFXPCSessionDelegate> *delegate;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) AAFXPCSessionConfig *remoteServiceConfig;

- (void).cxx_destruct;
- (id)_unsafe_createNewConnection;
- (void)_unsafe_destroyXPCConnection;
- (id)connection;
- (struct os_unfair_lock_s { unsigned int x1; })connectionLock;
- (id)delegate;
- (id)identifier;
- (id)initWithRemoteServiceConfig:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (id)remoteServiceConfig;
- (id)remoteServiceProxy;
- (id)remoteServiceProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (void)setConnection:(id)arg1;
- (void)setConnectionLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setDelegate:(id)arg1;
- (void)suspend;
- (id)syncRemoteServiceProxy;
- (id)syncRemoteServiceProxyWithErrorHandler:(id /* block */)arg1;

@end
