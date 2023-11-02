
@interface HMDCameraSnapshotRemoteRelaySender : HMDCameraSnapshotSender <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotIDSRelayInitiatorDelegate, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotSenderProtocol, HMFLogging> {
    <HMDCameraSnapshotRemoteRelaySenderDelegate> * _delegate;
    HMDCameraSnapshotIDSRelayInitiator * _relayInitiator;
    HMDCameraSnapshotLocal * _snapshotLocal;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraSnapshotRemoteRelaySenderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCameraSnapshotIDSRelayInitiator *relayInitiator;
@property (nonatomic, readonly) HMDCameraSnapshotLocal *snapshotLocal;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDidCompleteSendImageDelegate:(id)arg1;
- (void)_callDidSaveSnapshotFileDelegate:(id)arg1;
- (void)_callDidStartCaptureImageDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8;
- (id)logIdentifier;
- (id)relayInitiator;
- (void)relayInitiator:(id)arg1 didEndIDSSessionWithError:(id)arg2;
- (void)relayInitiator:(id)arg1 didSendData:(id)arg2;
- (void)relayInitiatorDidSendDataSuccessfully:(id)arg1;
- (void)relayInitiatorDidSendIDSInvitation:(id)arg1;
- (void)relayInitiatorDidStartDataSend:(id)arg1;
- (void)relayInitiatorIDSSessionDidStart:(id)arg1;
- (void)snapShotTransferComplete;
- (id)snapshotLocal;
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;

@end
