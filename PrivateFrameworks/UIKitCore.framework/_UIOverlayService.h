
@interface _UIOverlayService : NSObject <_UIOverlayServiceServerToClientInterface> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <_UIOverlayServiceDelegate> * _delegate;
    BSServiceConnection<BSServiceConnectionClient> * _serviceConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIOverlayServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BSServiceConnection<BSServiceConnectionClient> *serviceConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_asyncTargetWithHandler:(id /* block */)arg1;
- (void)_makeConnectionIfNecessaryWithConnectionHandler:(id /* block */)arg1;
- (id)connectionQueue;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (oneway void)performOverlayClientAction:(id)arg1;
- (void)prewarmConnection;
- (void)sendOverlayAction:(id)arg1;
- (id)serviceConnection;
- (void)setConnectionQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setServiceConnection:(id)arg1;

@end
