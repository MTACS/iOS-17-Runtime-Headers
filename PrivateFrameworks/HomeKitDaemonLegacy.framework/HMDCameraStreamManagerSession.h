
@interface HMDCameraStreamManagerSession : HMFObject <HMFLogging> {
    HMFMessage * _currentMessage;
    NSString * _destinationID;
    HMDCameraStreamSessionID * _sessionID;
    HMDXPCClientConnection * _streamClientConnection;
    <HMDCameraStreamControlManagerProtocol> * _streamControlManager;
    HMFTimer * _streamSetupTimer;
}

@property (retain) HMFMessage *currentMessage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *destinationID;
@property (readonly) unsigned long long hash;
@property (readonly) HMDCameraStreamSessionID *sessionID;
@property (retain) HMDXPCClientConnection *streamClientConnection;
@property (readonly) <HMDCameraStreamControlManagerProtocol> *streamControlManager;
@property (readonly) HMFTimer *streamSetupTimer;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)canStartWithError:(id*)arg1;
- (id)currentMessage;
- (id)destinationID;
- (id)initWithSessionID:(id)arg1 destinationID:(id)arg2 streamClientConnection:(id)arg3 streamControlManager:(id)arg4 setupWaitPeriod:(double)arg5;
- (id)initWithSessionID:(id)arg1 destinationID:(id)arg2 streamClientConnection:(id)arg3 streamControlManager:(id)arg4 streamSetupTimer:(id)arg5;
- (id)logIdentifier;
- (id)sessionID;
- (void)setCurrentMessage:(id)arg1;
- (void)setStreamClientConnection:(id)arg1;
- (id)streamClientConnection;
- (id)streamControlManager;
- (id)streamSetupTimer;

@end
