
@interface CAMPortraitModeInstructionLabel : CAMInstructionLabel {
    long long  _devicePosition;
    long long  _flashMode;
    bool  _flashSupported;
    long long  _lightingType;
    long long  _lowLightMode;
    long long  _lowLightStatus;
    unsigned long long  _numberOfPeopleFound;
    long long  _shallowDepthOfFieldStatus;
}

@property (nonatomic) long long devicePosition;
@property (nonatomic) long long flashMode;
@property (getter=isFlashSupported, nonatomic) bool flashSupported;
@property (nonatomic) long long lightingType;
@property (nonatomic) long long lowLightMode;
@property (nonatomic) long long lowLightStatus;
@property (nonatomic) unsigned long long numberOfPeopleFound;
@property (nonatomic) long long shallowDepthOfFieldStatus;

+ (id)_textForShallowDepthOfFieldStatus:(long long)arg1 numberOfPeopleFound:(unsigned long long)arg2 flashSupported:(bool)arg3 flashMode:(long long)arg4 devicePosition:(long long)arg5 lightingType:(long long)arg6 lowlightMode:(long long)arg7 lowLightStatus:(long long)arg8;
+ (bool)shouldDisplayInstructionForShallowDepthOfFieldStatus:(long long)arg1;

- (void)_updateTextWithPriorStatus:(long long)arg1;
- (long long)devicePosition;
- (long long)flashMode;
- (bool)isFlashSupported;
- (long long)lightingType;
- (long long)lowLightMode;
- (long long)lowLightStatus;
- (unsigned long long)numberOfPeopleFound;
- (void)setDevicePosition:(long long)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setFlashSupported:(bool)arg1;
- (void)setLightingType:(long long)arg1;
- (void)setLowLightMode:(long long)arg1;
- (void)setLowLightStatus:(long long)arg1;
- (void)setNumberOfPeopleFound:(unsigned long long)arg1;
- (void)setShallowDepthOfFieldStatus:(long long)arg1;
- (long long)shallowDepthOfFieldStatus;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
