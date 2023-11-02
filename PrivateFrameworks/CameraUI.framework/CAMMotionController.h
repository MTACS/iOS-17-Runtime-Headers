
@interface CAMMotionController : NSObject <BKSAccelerometerDelegate, CAMLevelViewModelChangeObserver> {
    BKSAccelerometer * __accelerometer;
    CMMotionManager * __attitudeAlignmentMotionManager;
    long long  __cachedCaptureOrientation;
    bool  __didNotifyCaptureOrientationWasInvalid;
    long long  __fallbackCaptureOrientation;
    long long  __numberOfDominantPhysicalButtonObservers;
    CMMotionManager * __physicalButtonMotionManager;
    CAMLevelViewModel * _activeLevelViewModel;
    CAMPreviewAlignmentModel * _activePreviewAlignmentModel;
    long long  _deviceOrientation;
    long long  _dominantPhysicalButton;
}

@property (setter=_setAccelerometer:, nonatomic, retain) BKSAccelerometer *_accelerometer;
@property (nonatomic, readonly) CMMotionManager *_attitudeAlignmentMotionManager;
@property (setter=_setCachedCaptureOrientation:, nonatomic) long long _cachedCaptureOrientation;
@property (setter=_setDidNotifyCaptureOrientationWasInvalid:, nonatomic) bool _didNotifyCaptureOrientationWasInvalid;
@property (nonatomic, readonly) long long _fallbackCaptureOrientation;
@property (setter=_setNumberOfDominantPhysicalButtonObservers:, nonatomic) long long _numberOfDominantPhysicalButtonObservers;
@property (nonatomic, readonly) CMMotionManager *_physicalButtonMotionManager;
@property (setter=_setActiveLevelViewModel:, nonatomic, retain) CAMLevelViewModel *activeLevelViewModel;
@property (setter=_setActivePreviewAlignmentModel:, nonatomic, retain) CAMPreviewAlignmentModel *activePreviewAlignmentModel;
@property (nonatomic, readonly) long long captureOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long deviceOrientation;
@property (setter=_setDominantPhysicalButton:, nonatomic) long long dominantPhysicalButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long panoramaCaptureOrientation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accelerometer;
- (id)_attitudeAlignmentMotionManager;
- (long long)_cachedCaptureOrientation;
- (id)_debugStringForDeviceOrientation:(long long)arg1;
- (id)_debugStringForInterfaceOrientation:(long long)arg1;
- (bool)_didNotifyCaptureOrientationWasInvalid;
- (long long)_fallbackCaptureOrientation;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleLevelMotionUpdate:(id)arg1 error:(id)arg2;
- (long long)_numberOfDominantPhysicalButtonObservers;
- (id)_physicalButtonMotionManager;
- (void)_setAccelerometer:(id)arg1;
- (void)_setActiveLevelViewModel:(id)arg1;
- (void)_setActivePreviewAlignmentModel:(id)arg1;
- (void)_setCachedCaptureOrientation:(long long)arg1;
- (void)_setDidNotifyCaptureOrientationWasInvalid:(bool)arg1;
- (void)_setDominantPhysicalButton:(long long)arg1;
- (void)_setNumberOfDominantPhysicalButtonObservers:(long long)arg1;
- (void)_updateAttitudeAlignmentMotionManager;
- (void)_updateInitialOrientation;
- (void)_updatePhysicalButtonObservation;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;
- (id)activeLevelViewModel;
- (id)activePreviewAlignmentModel;
- (void)beginGeneratingDominantPhysicalButtonNotifications;
- (void)beginUpdatingLevelViewModel:(id)arg1;
- (void)beginUpdatingPreviewAlignmentModel:(id)arg1;
- (long long)captureOrientation;
- (void)dealloc;
- (void)debugValidateCaptureOrientationForMode:(long long)arg1;
- (long long)deviceOrientation;
- (long long)dominantPhysicalButton;
- (void)endGeneratingDominantPhysicalButtonNotifications;
- (void)endUpdatingActiveLevelViewModel;
- (void)endUpdatingPreviewAlignmentModel;
- (id)init;
- (void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void*)arg3;
- (long long)panoramaCaptureOrientation;

@end
