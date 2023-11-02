
@interface HMCameraSettingsControl : HMCameraControl {
    _HMCameraSettingsControl * _settingsControl;
}

@property (nonatomic, readonly) HMCharacteristic *currentHorizontalTilt;
@property (nonatomic, readonly) HMCharacteristic *currentVerticalTilt;
@property (nonatomic, readonly) HMCharacteristic *digitalZoom;
@property (nonatomic, readonly) HMCharacteristic *imageMirroring;
@property (nonatomic, readonly) HMCharacteristic *imageRotation;
@property (nonatomic, readonly) HMCharacteristic *nightVision;
@property (nonatomic, readonly) HMCharacteristic *opticalZoom;
@property (nonatomic, retain) _HMCameraSettingsControl *settingsControl;
@property (nonatomic, readonly) HMCharacteristic *targetHorizontalTilt;
@property (nonatomic, readonly) HMCharacteristic *targetVerticalTilt;

- (void).cxx_destruct;
- (id)currentHorizontalTilt;
- (id)currentVerticalTilt;
- (id)digitalZoom;
- (id)imageMirroring;
- (id)imageRotation;
- (id)initWithSettingsControl:(id)arg1;
- (id)nightVision;
- (id)opticalZoom;
- (void)setSettingsControl:(id)arg1;
- (id)settingsControl;
- (id)targetHorizontalTilt;
- (id)targetVerticalTilt;

@end
