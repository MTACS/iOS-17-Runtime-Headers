
@interface HMDCameraStreamControlManager : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    <HMDCameraStreamControlManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMDCameraStreamSessionID * _sessionID;
    HMDService * _streamManagementService;
    HMDCameraStreamMetrics * _streamMetrics;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraStreamControlManagerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCameraStreamSessionID *sessionID;
@property (nonatomic, readonly) HMDService *streamManagementService;
@property (nonatomic, readonly) HMDCameraStreamMetrics *streamMetrics;
@property (nonatomic, readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callStreamFirstFrameReceived;
- (void)_callStreamNegotiated:(id)arg1;
- (void)_callStreamReconfigured;
- (void)_callStreamRemoteConnectionSetup;
- (void)_callStreamStarted;
- (void)_callStreamStoppedWithError:(id)arg1;
- (void)_cleanUpStreamSessionWithError:(id)arg1;
- (void)_reportErrorCode:(long long)arg1;
- (void)_reportInternalErrorCode:(long long)arg1;
- (id)accessory;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 isLocal:(bool)arg8;
- (id)logIdentifier;
- (id)managerProtocol;
- (id)sessionID;
- (void)setAccessory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)streamManagementService;
- (id)streamMetrics;
- (id)streamSnapshotHandler;
- (id)workQueue;

@end
