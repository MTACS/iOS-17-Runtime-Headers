
@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {
    float  _exposureTargetBias;
}

@property (readonly) float exposureTargetBias;

+ (id)autoExposureSettingsWithExposureTargetBias:(float)arg1;
+ (void)initialize;

- (id)_initAutoExposureSettingsWithExposureTargetBias:(float)arg1;
- (id)debugDescription;
- (id)description;
- (float)exposureTargetBias;

@end
