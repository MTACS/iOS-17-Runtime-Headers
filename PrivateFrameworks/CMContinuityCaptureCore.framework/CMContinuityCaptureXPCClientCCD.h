
@interface CMContinuityCaptureXPCClientCCD : NSObject <CMContinuityCaptureXPCClientActionCCD, CMContinuityCaptureXPCServerActionCCD> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <CMContinuityCaptureXPCServerActionCCD> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_service;
- (void)connectToContinuityCaptureServerWithDelegate:(id)arg1;
- (void)disconnectSession;
- (id)init;
- (void)pauseSessionForEvent:(long long)arg1;
- (void)prepareForPullConversation:(id /* block */)arg1;
- (void)requestContinuityCaptureUIConfiguration:(id /* block */)arg1;
- (void)resumeStreamingForEvent:(long long)arg1;
- (void)serverXPCConnectionInterrupted;
- (void)sessionDidUpdateWithConfiguration:(id)arg1;
- (void)skipPlacementStep;
- (void)tearDownShield;

@end
