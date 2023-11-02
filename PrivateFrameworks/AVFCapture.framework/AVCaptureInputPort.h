
@interface AVCaptureInputPort : NSObject {
    AVCaptureInputPortInternal * _internal;
}

@property (nonatomic, readonly) struct OpaqueCMClock { }*clock;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (nonatomic, readonly) AVCaptureInput *input;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) long long sourceDevicePosition;
@property (nonatomic, readonly) NSString *sourceDeviceType;

+ (bool)automaticallyNotifiesObserversOfClock;
+ (void)initialize;
+ (id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(bool)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(long long)arg6;

- (id)_initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(bool)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(long long)arg6;
- (void)_setClock:(struct OpaqueCMClock { }*)arg1;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (void)_updateBackgroundBlurUnavailableReasonsWithDevice:(id)arg1 deviceInput:(id)arg2;
- (void)_updateCenterStageUnavailableReasonsWithDevice:(id)arg1 deviceInput:(id)arg2;
- (void)_updateReactionEffectsUnavailableReasonsWithDevice:(id)arg1 deviceInput:(id)arg2;
- (void)_updateStudioLightingUnavailableReasonsWithDevice:(id)arg1 deviceInput:(id)arg2;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (id)description;
- (id)figCaptureSourceConfigurationForSessionPreset:(id)arg1;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (id)input;
- (bool)isEnabled;
- (id)mediaType;
- (void)setEnabled:(bool)arg1;
- (void)setOwner:(id)arg1;
- (long long)sourceDevicePosition;
- (id)sourceDeviceType;
- (id)sourceID;
- (bool)sourcesFromConstituentDevice;
- (id)valueForUndefinedKey:(id)arg1;

@end
