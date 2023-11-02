
@interface HMDCameraSnapshotIDSStreamInitiator : HMDCameraSnapshotIDSStream <HMFLogging, IDSServiceDelegate> {
    <HMDCameraSnapshotIDSStreamInitiatorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _destinationID;
    NSString * _sendFileIdentifier;
    HMDSnapshotFile * _snapshotFile;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraSnapshotIDSStreamInitiatorDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *destinationID;
@property (readonly) unsigned long long hash;
@property (copy) NSString *sendFileIdentifier;
@property (retain) HMDSnapshotFile *snapshotFile;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callFileTransferFailedWithError:(id)arg1;
- (void)_sendFile:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)destinationID;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 proxyService:(id)arg3 destinationID:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;
- (id)logIdentifier;
- (void)sendFile:(id)arg1;
- (id)sendFileIdentifier;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)setDelegate:(id)arg1;
- (void)setSendFileIdentifier:(id)arg1;
- (void)setSnapshotFile:(id)arg1;
- (id)snapshotFile;

@end
