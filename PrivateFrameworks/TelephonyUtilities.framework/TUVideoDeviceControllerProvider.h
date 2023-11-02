
@interface TUVideoDeviceControllerProvider : NSObject <AVConferencePreviewClientDelegate, TUVideoDeviceControllerProvider, TUVideoEffectsProvider> {
    TUVideoEffect * _currentVideoEffect;
    <TUVideoDeviceControllerProviderDelegate> * _delegate;
    bool  _isAVCaptureDeviceReady;
    AVConferencePreview * _preview;
}

@property (nonatomic, readonly) NSArray *availableVideoEffects;
@property (getter=isCameraBlurEnabled, nonatomic) bool cameraBlurEnabled;
@property (getter=isCinematicFramingEnabled, nonatomic) bool cinematicFramingEnabled;
@property (nonatomic, retain) TUVideoEffect *currentVideoEffect;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUVideoDeviceControllerProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAvailableDeskViewCameras;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *inputDevices;
@property (nonatomic, readonly, copy) NSString *localCameraUID;
@property (nonatomic, copy) VideoAttributes *localVideoAttributes;
@property (nonatomic, readonly) AVConferencePreview *preview;
@property (getter=isPreviewRunning, nonatomic, readonly) bool previewRunning;
@property (getter=isReactionEffectGestureEnabled, nonatomic) bool reactionEffectGestureEnabled;
@property (getter=isStudioLightEnabled, nonatomic) bool studioLightEnabled;
@property (readonly) Class superclass;

+ (void)prewarm;

- (void).cxx_destruct;
- (id)availableVideoEffects;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)cameraCinematicFramingAvailabilityDidChange:(bool)arg1;
- (void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
- (void)cameraZoomAvailabilityDidChange:(bool)arg1;
- (void)captureDevicesChanged:(id)arg1;
- (long long)currentBackgroundBlurControlMode;
- (id)currentVideoEffect;
- (void)dealloc;
- (id)delegate;
- (void)didChangeLocalCameraUID:(id)arg1;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didGetSnapshot:(id)arg1;
- (void)didPausePreview;
- (void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
- (void)didStartPreview;
- (void)didStopPreview;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)getSnapshot;
- (bool)hasAvailableDeskViewCameras;
- (id)init;
- (id)inputDevices;
- (bool)isCameraBlurEnabled;
- (bool)isCinematicFramingEnabled;
- (bool)isPreviewRunning;
- (bool)isReactionEffectGestureEnabled;
- (bool)isStudioLightEnabled;
- (id)localCameraUID;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (id)localVideoAttributes;
- (id)localVideoLayer:(bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pausePreview;
- (id)preview;
- (void)queryAVCaptureDeviceIfNeeded;
- (void)rampCameraZoomFactor:(double)arg1 withRate:(double)arg2;
- (void)setCameraBlurEnabled:(bool)arg1;
- (void)setCameraZoomFactor:(double)arg1;
- (void)setCinematicFramingEnabled:(bool)arg1;
- (void)setCurrentBackgroundBlurControlMode:(long long)arg1;
- (void)setCurrentVideoEffect:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalCameraWithUID:(id)arg1;
- (void)setLocalScreenAttributes:(id)arg1;
- (void)setLocalVideoAttributes:(id)arg1;
- (void)setLocalVideoLayer:(id)arg1 front:(bool)arg2;
- (void)setReactionEffectGestureEnabled:(bool)arg1;
- (void)setStudioLightEnabled:(bool)arg1;
- (void)startPreview;
- (void)stopPreview;
- (bool)supportsCameraBlurForDevice:(id)arg1;
- (id)thumbnailImageForVideoEffectName:(id)arg1;

@end
