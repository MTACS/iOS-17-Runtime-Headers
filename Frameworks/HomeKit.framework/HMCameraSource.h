
@interface HMCameraSource : NSObject <HMFLogging, HMFMessageReceiver> {
    double  _aspectRatio;
    HMCameraView * _cameraView;
    _HMContext * _context;
    NSUUID * _profileUniqueIdentifier;
    NSNumber * _slotIdentifier;
}

@property (readonly) double aspectRatio;
@property HMCameraView *cameraView;
@property (retain) _HMContext *context;
@property (readonly) double currentAspectRatio;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly, copy) NSUUID *profileUniqueIdentifier;
@property (readonly, copy) NSNumber *slotIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (double)aspectRatio;
- (id)cameraView;
- (id)context;
- (double)currentAspectRatio;
- (void)fillSlotWithCompletionHandler:(id /* block */)arg1;
- (id)initWithProfileUniqueIdentifier:(id)arg1 slotIdentifier:(id)arg2 aspectRatio:(id)arg3;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)profileUniqueIdentifier;
- (void)setCameraView:(id)arg1;
- (void)setContext:(id)arg1;
- (id)slotIdentifier;

@end
