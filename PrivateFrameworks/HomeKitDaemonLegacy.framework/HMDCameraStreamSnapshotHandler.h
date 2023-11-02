
@interface HMDCameraStreamSnapshotHandler : HMFObject <HMDCameraGetSnapshotProtocol, HMDCameraStreamSnapshotCaptureDelegate, HMFLogging> {
    NSMapTable * _delegateTable;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logIdentifier;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableSet * _retiredStreamSnapshotCaptures;
    NSMutableDictionary * _serviceInstanceStreamStatus;
    bool  _streamAvailable;
    bool  _streamSetupInProgress;
    NSMutableSet * _streamSnapshotCaptures;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *logIdentifier;
@property (getter=isStreamAvailable, readonly) bool streamAvailable;
@property (getter=isStreamSetupInProgress, readonly) bool streamSetupInProgress;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)addVideoStreamInterface:(id)arg1;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)initWithWorkQueue:(id)arg1 services:(id)arg2 logID:(id)arg3;
- (bool)isStreamAvailable;
- (bool)isStreamSetupInProgress;
- (id)logIdentifier;
- (void)removeDelegate:(id)arg1;
- (void)removeVideoStreamInterface:(id)arg1;
- (void)setStreamSetupStatusForService:(id)arg1 inProgress:(bool)arg2;
- (void)streamSnapshotCapture:(id)arg1 didGetLastSnapshot:(id)arg2;
- (void)streamSnapshotCapture:(id)arg1 didGetNewSnapshot:(id)arg2;

@end
