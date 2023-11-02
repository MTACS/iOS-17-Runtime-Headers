
@interface HMDSnapshotRequestHandler : HMFObject <HMDCameraStreamSnapshotHandlerDelegate, HMDSnapshotRequestHandlerProtocol, HMFLogging, HMFTimerDelegate> {
    HMDAccessory * _accessory;
    NSString * _imageCacheDirectory;
    NSString * _logIdentifier;
    HMDSnapshotFile * _mostRecentSnapshot;
    HMFTimer * _mostRecentSnapshotInvalidationTimer;
    NSMutableArray * _pendingRequests;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
    NSSet * _supportedResolutions;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *imageCacheDirectory;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *supportedResolutions;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)imageCacheDirectory;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 imageCacheDirectory:(id)arg4 logID:(id)arg5;
- (id)logIdentifier;
- (void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setSupportedResolutions:(id)arg1;
- (void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;
- (void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;
- (id)supportedResolutions;
- (void)timerDidFire:(id)arg1;

@end
