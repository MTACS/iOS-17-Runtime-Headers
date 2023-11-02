
@interface BBDataProviderConnectionResolver : NSObject <BBDataProviderConnectionClientEndpoint, NSXPCListenerDelegate> {
    NSXPCConnection * _connectionToServer;
    BBDataProviderConnection * _dataProviderConnection;
    int  _listeningToken;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCListener * _wakeupListener;
}

@property (nonatomic) BBDataProviderConnection *dataProviderConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)resolverForConnection:(id)arg1;
+ (id)xpcInterface;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_queue_registerWithServer:(id /* block */)arg1;
- (void)_registerForPublicationNotification;
- (id)dataProviderConnection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)ping:(id /* block */)arg1;
- (void)setDataProviderConnection:(id)arg1;

@end