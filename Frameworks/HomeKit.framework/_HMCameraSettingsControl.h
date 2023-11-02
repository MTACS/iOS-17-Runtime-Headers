
@interface _HMCameraSettingsControl : _HMCameraControl {
    HMCharacteristic * _currentHorizontalTilt;
    HMCharacteristic * _currentVerticalTilt;
    HMCharacteristic * _digitalZoom;
    HMCharacteristic * _imageMirroring;
    HMCharacteristic * _imageRotation;
    HMCharacteristic * _nightVision;
    HMCharacteristic * _opticalZoom;
    HMCharacteristic * _targetHorizontalTilt;
    HMCharacteristic * _targetVerticalTilt;
}

@property (nonatomic, retain) HMCharacteristic *currentHorizontalTilt;
@property (nonatomic, retain) HMCharacteristic *currentVerticalTilt;
@property (nonatomic, retain) HMCharacteristic *digitalZoom;
@property (nonatomic, retain) HMCharacteristic *imageMirroring;
@property (nonatomic, retain) HMCharacteristic *imageRotation;
@property (nonatomic, retain) HMCharacteristic *nightVision;
@property (nonatomic, retain) HMCharacteristic *opticalZoom;
@property (nonatomic, retain) HMCharacteristic *targetHorizontalTilt;
@property (nonatomic, retain) HMCharacteristic *targetVerticalTilt;

- (void).cxx_destruct;
- (id)currentHorizontalTilt;
- (id)currentVerticalTilt;
- (id)digitalZoom;
- (id)imageMirroring;
- (id)imageRotation;
- (id)initWithCameraProfile:(id)arg1 profileUniqueIdentifier:(id)arg2 service:(id)arg3;
- (id)nightVision;
- (id)opticalZoom;
- (void)setCurrentHorizontalTilt:(id)arg1;
- (void)setCurrentVerticalTilt:(id)arg1;
- (void)setDigitalZoom:(id)arg1;
- (void)setImageMirroring:(id)arg1;
- (void)setImageRotation:(id)arg1;
- (void)setNightVision:(id)arg1;
- (void)setOpticalZoom:(id)arg1;
- (void)setTargetHorizontalTilt:(id)arg1;
- (void)setTargetVerticalTilt:(id)arg1;
- (id)targetHorizontalTilt;
- (id)targetVerticalTilt;

@end
