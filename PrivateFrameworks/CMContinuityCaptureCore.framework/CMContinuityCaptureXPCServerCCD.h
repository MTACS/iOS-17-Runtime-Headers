
@interface CMContinuityCaptureXPCServerCCD : NSObject <CMContinuityCaptureXPCClientActionCCD, NSXPCListenerDelegate> {
    NSMutableArray * _connections;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionsLock;
    <CMContinuityCaptureXPCServerDelegateCCD> * _delegate;
    NSXPCListener * _serviceListener;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_enumerateConnectionsWithBlock:(id /* block */)arg1;
- (void)disconnectSession;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)pauseSessionForEvent:(long long)arg1;
- (void)prepareForPullConversation:(id /* block */)arg1;
- (void)requestContinuityCaptureUIConfiguration:(id /* block */)arg1;
- (void)resumeStreamingForEvent:(long long)arg1;
- (void)skipPlacementStep;
- (void)startListeningWithDelegate:(id)arg1;
- (void)tearDownShieldUI;
- (void)updateClientsWithConfiguration:(id)arg1;

@end
