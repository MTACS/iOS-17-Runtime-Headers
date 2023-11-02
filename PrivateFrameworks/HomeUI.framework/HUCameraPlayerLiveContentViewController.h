
@interface HUCameraPlayerLiveContentViewController : UIViewController <HFCameraPlaybackEngineObserver> {
    HUCameraView * _cameraView;
    double  _cornerRadius;
    HUCameraMicrophoneControl * _microphoneControl;
    HFCameraPlaybackEngine * _playbackEngine;
}

@property (nonatomic, retain) HUCameraView *cameraView;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUCameraMicrophoneControl *microphoneControl;
@property (nonatomic, readonly) HFCameraPlaybackEngine *playbackEngine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateCameraCornerRadius;
- (id)cameraView;
- (double)cornerRadius;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)microphoneControl;
- (id)playbackEngine;
- (void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2;
- (void)setCameraView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setMicrophoneControl:(id)arg1;
- (void)viewDidLoad;

@end
