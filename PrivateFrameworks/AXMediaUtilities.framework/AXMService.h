
@interface AXMService : NSObject <AXMServiceClientInterface, AXMServiceInterface> {
    <AXMServiceDelegate> * _delegate;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXMServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_destroyXPCConnection;
- (id)_serviceProxy;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)prewarmVisionEngineService;
- (void)setDelegate:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)visionEngine:(id)arg1 evaluateSource:(id)arg2 context:(id)arg3 options:(long long)arg4 result:(id /* block */)arg5;
- (id)xpcConnection;

@end
