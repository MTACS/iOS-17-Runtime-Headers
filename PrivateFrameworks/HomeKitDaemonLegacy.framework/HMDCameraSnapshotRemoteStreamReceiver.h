
@interface HMDCameraSnapshotRemoteStreamReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotIDSStreamReceiverDelegate, HMDCameraSnapshotReceiverProtocol, HMFLogging> {
    <HMDCameraSnapshotRemoteStreamReceiverDelegate> * _delegate;
    HMDCameraSnapshotIDSStreamReceiver * _relayReceiver;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraSnapshotRemoteStreamReceiverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDCameraSnapshotIDSStreamReceiver *relayReceiver;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDidSaveImageDelegateWithError:(id)arg1;
- (void)_callGettingImageDelegate:(id)arg1;
- (void)_getSnapshot:(unsigned long long)arg1;
- (void)dealloc;
- (id)delegate;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 accessory:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 snapshotRequestHandler:(id)arg7 residentMessageHandler:(id)arg8 remoteDevice:(id)arg9;
- (id)logIdentifier;
- (id)relayReceiver;
- (void)setRelayReceiver:(id)arg1;
- (void)snapShotSendFailed:(id)arg1;
- (void)streamReceiver:(id)arg1 didReceiveFileWithError:(id)arg2;

@end
