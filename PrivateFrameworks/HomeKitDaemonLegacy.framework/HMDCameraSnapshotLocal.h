
@interface HMDCameraSnapshotLocal : HMFObject <HMDCameraGetSnapshotProtocol, HMFLogging> {
    HMDAccessory * _accessory;
    <HMDCameraSnapshotLocalDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMDCameraSnapshotSessionID * _sessionID;
    HMDSnapshotFile * _snapshotFile;
    <HMDSnapshotRequestHandlerProtocol> * _snapshotRequestHandler;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDCameraSnapshotLocalDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCameraSnapshotSessionID *sessionID;
@property (nonatomic, retain) HMDSnapshotFile *snapshotFile;
@property (nonatomic, readonly) <HMDSnapshotRequestHandlerProtocol> *snapshotRequestHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_getSnapshot:(unsigned long long)arg1;
- (void)_handleSnapshotFile:(id)arg1 error:(id)arg2;
- (id)accessory;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 accessory:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 snapshotRequestHandler:(id)arg6;
- (id)logIdentifier;
- (id)sessionID;
- (void)setAccessory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSnapshotFile:(id)arg1;
- (id)snapshotFile;
- (id)snapshotRequestHandler;
- (id)workQueue;

@end
