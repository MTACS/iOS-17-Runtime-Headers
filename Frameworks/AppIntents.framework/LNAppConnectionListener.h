
@interface LNAppConnectionListener : NSObject <LNConnectionListener, NSXPCListenerDelegate> {
    LNAppContext * _appContext;
    NSMutableSet * _clientConnections;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, retain) LNAppContext *appContext;
@property (nonatomic, readonly) NSMutableSet *clientConnections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCListener *xpcListener;

+ (id)sharedListener;

- (void).cxx_destruct;
- (id)appContext;
- (id)clientConnections;
- (void)handleAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (void)setAppContext:(id)arg1;
- (id)xpcListener;

@end
