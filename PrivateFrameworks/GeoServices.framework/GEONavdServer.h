
@interface GEONavdServer : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _getNavigationStateListener;
    NSXPCListener * _monitorDestinationListener;
    GEONavigationServer * _navigationServer;
    NSXPCListener * _pushNavigationStateListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
