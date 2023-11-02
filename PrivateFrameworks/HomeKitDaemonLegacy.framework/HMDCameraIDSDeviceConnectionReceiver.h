
@interface HMDCameraIDSDeviceConnectionReceiver : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamReceiverSocketProtocol> {
    <HMDCameraIDSDeviceConnectionReceiverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraIDSDeviceConnectionReceiverDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int remoteAudioSocket;
@property (nonatomic, readonly) int remoteVideoSocket;
@property (readonly) IDSSession *session;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callSessionEndedWithError:(id)arg1;
- (void)_socketOpenedWithError:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)logIdentifier;
- (int)remoteAudioSocket;
- (int)remoteVideoSocket;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setUpRemoteConnectionWithDevice:(id)arg1;

@end
