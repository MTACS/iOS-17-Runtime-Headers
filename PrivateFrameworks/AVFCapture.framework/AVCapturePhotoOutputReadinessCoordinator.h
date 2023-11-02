
@interface AVCapturePhotoOutputReadinessCoordinator : NSObject {
    long long  _captureReadiness;
    struct AVCapturePhotoOutputCaptureReadinessState { 
        bool sessionIsRunning; 
        bool autoDeferredPhotoDeliveryEnabled; 
        bool responsiveCaptureEnabled; 
        int numberOfPhotoCapturesInflight; 
        long long latestCaptureUniqueID; 
        long long inflightNonOverlappingCaptureUniqueID; 
        long long inflightUniqueIDWaitingForCapture; 
        long long inflightUniqueIDWaitingForProcessing; 
    }  _captureReadinessState;
    AVWeakReferencingDelegateStorage * _delegateStorage;
    NSMutableArray * _trackedPhotoSettingsArray;
}

@property (nonatomic, readonly) long long captureReadiness;
@property <AVCapturePhotoOutputReadinessCoordinatorDelegate> *delegate;

+ (long long)_captureReadinessFromReadinessState:(struct AVCapturePhotoOutputCaptureReadinessState { bool x1; bool x2; bool x3; int x4; long long x5; long long x6; long long x7; long long x8; })arg1;
+ (bool)_isOverlappingCaptureSupportedForPhotoSettings:(id)arg1 autoDeferredPhotoDeliveryEnabled:(bool)arg2 responsiveCaptureEnabled:(bool)arg3;

- (void)_invokeDelegateCallbackWithBlock:(id /* block */)arg1;
- (void)_photoOutputDidUpdateCaptureReadinessState:(struct AVCapturePhotoOutputCaptureReadinessState { bool x1; bool x2; bool x3; int x4; long long x5; long long x6; long long x7; long long x8; })arg1;
- (id)_queue;
- (void)_setDelegate:(id)arg1 queue:(id)arg2;
- (void)_updateCaptureReadinessWithDelegate:(id)arg1;
- (long long)captureReadiness;
- (void)dealloc;
- (id)delegate;
- (id)initWithPhotoOutput:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startTrackingCaptureRequestUsingPhotoSettings:(id)arg1;
- (void)stopTrackingCaptureRequestUsingPhotoSettingsUniqueID:(long long)arg1;

@end
