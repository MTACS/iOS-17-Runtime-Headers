
@interface HMDCameraSnapshotIDSStreamReceiver : HMDCameraSnapshotIDSStream <HMFLogging, IDSServiceDelegate> {
    <HMDCameraSnapshotIDSStreamReceiverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMDDevice * _remoteDevice;
    HMDSnapshotFile * _snapshotFile;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraSnapshotIDSStreamReceiverDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDDevice *remoteDevice;
@property (readonly) HMDSnapshotFile *snapshotFile;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callFileReceivedWithError:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 proxyService:(id)arg3 snapshotFile:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 remoteDevice:(id)arg7;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 snapshotFile:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 remoteDevice:(id)arg6;
- (id)logIdentifier;
- (id)remoteDevice;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)setDelegate:(id)arg1;
- (id)snapshotFile;

@end
