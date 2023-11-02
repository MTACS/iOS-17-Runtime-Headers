
@interface APConnectionNotifier : NSObject {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSXPCConnection * _underlyingRemoteConnection;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, readonly) <ConnectionProtocol> *remoteObjectProxy;
@property (nonatomic, retain) NSXPCConnection *underlyingRemoteConnection;

+ (id)sharedNotifier;

- (void).cxx_destruct;
- (id)_newRemoteConnection;
- (id)_remoteConnection;
- (id)connectionQueue;
- (id)init;
- (id)remoteObjectProxy;
- (void)setUnderlyingRemoteConnection:(id)arg1;
- (id)underlyingRemoteConnection;

@end
