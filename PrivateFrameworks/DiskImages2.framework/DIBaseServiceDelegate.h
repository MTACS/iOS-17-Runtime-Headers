
@interface DIBaseServiceDelegate : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createListener;
- (id)dispatchQueue;
- (void)enterSandbox;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)sandboxProfile;
- (id)serviceName;
- (void)setListener:(id)arg1;
- (bool)setupNewConnection:(id)arg1;
- (void)startXPClistener;
- (void)validateConnection;

@end
