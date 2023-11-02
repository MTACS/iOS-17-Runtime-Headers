
@interface ICExternalSharedListeningConnectionController : ICSharedListeningConnectionController <ICSharedListeningConnectionClientProtocol> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_initializeConnectionIfNeeded;
- (void)dealloc;
- (id)delegateQueue;
- (id)initWithSessionIdentifier:(id)arg1 identity:(id)arg2 bundleID:(id)arg3;
- (void)receiveConnectionError:(id)arg1;
- (void)receiveFatalError:(id)arg1;
- (void)receiveMessageData:(id)arg1;
- (void)receiveStartWithSessionIdentifier:(id)arg1 sessionToken:(id)arg2 inviteURLString:(id)arg3;
- (void)sendMessage:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)start;
- (void)stop;
- (id)xpcConnection;

@end
