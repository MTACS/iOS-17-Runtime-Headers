
@interface HMDCameraIDSSessionReceiver : HMDCameraIDSSessionHandler <HMDCameraRemoteStreamReceiverDestinationProtocol, IDSSessionDelegate> {
    <HMDCameraIDSSessionReceiverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMDCameraIDSSessionInviterDeviceVerifier * _sessionInviterDeviceVerifier;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraIDSSessionReceiverDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *remoteDestination;
@property (readonly) IDSSession *session;
@property (nonatomic, readonly) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callSessionEndedWithError:(id)arg1;
- (void)_callSessionSetup:(id)arg1;
- (void)_receivedIDSSession:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 sessionInviterDeviceVerifier:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)logIdentifier;
- (id)remoteDestination;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;
- (id)session;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (id)sessionInviterDeviceVerifier;
- (void)sessionStarted:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setUpRemoteConnectionWithDevice:(id)arg1;

@end
