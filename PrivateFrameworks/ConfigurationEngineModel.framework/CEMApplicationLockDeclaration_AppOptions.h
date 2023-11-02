
@interface CEMApplicationLockDeclaration_AppOptions : CEMPayloadBase {
    NSNumber * _payloadDisableAutoLock;
    NSNumber * _payloadDisableDeviceRotation;
    NSNumber * _payloadDisableRingerSwitch;
    NSNumber * _payloadDisableSleepWakeButton;
    NSNumber * _payloadDisableTouch;
    NSNumber * _payloadDisableVolumeButtons;
    NSNumber * _payloadEnableAssistiveTouch;
    NSNumber * _payloadEnableInvertColors;
    NSNumber * _payloadEnableMonoAudio;
    NSNumber * _payloadEnableSpeakSelection;
    NSNumber * _payloadEnableVoiceOver;
    NSNumber * _payloadEnableZoom;
}

@property (nonatomic, copy) NSNumber *payloadDisableAutoLock;
@property (nonatomic, copy) NSNumber *payloadDisableDeviceRotation;
@property (nonatomic, copy) NSNumber *payloadDisableRingerSwitch;
@property (nonatomic, copy) NSNumber *payloadDisableSleepWakeButton;
@property (nonatomic, copy) NSNumber *payloadDisableTouch;
@property (nonatomic, copy) NSNumber *payloadDisableVolumeButtons;
@property (nonatomic, copy) NSNumber *payloadEnableAssistiveTouch;
@property (nonatomic, copy) NSNumber *payloadEnableInvertColors;
@property (nonatomic, copy) NSNumber *payloadEnableMonoAudio;
@property (nonatomic, copy) NSNumber *payloadEnableSpeakSelection;
@property (nonatomic, copy) NSNumber *payloadEnableVoiceOver;
@property (nonatomic, copy) NSNumber *payloadEnableZoom;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithDisableTouch:(id)arg1 withDisableDeviceRotation:(id)arg2 withDisableVolumeButtons:(id)arg3 withDisableRingerSwitch:(id)arg4 withDisableSleepWakeButton:(id)arg5 withDisableAutoLock:(id)arg6 withEnableVoiceOver:(id)arg7 withEnableZoom:(id)arg8 withEnableInvertColors:(id)arg9 withEnableAssistiveTouch:(id)arg10 withEnableSpeakSelection:(id)arg11 withEnableMonoAudio:(id)arg12;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDisableAutoLock;
- (id)payloadDisableDeviceRotation;
- (id)payloadDisableRingerSwitch;
- (id)payloadDisableSleepWakeButton;
- (id)payloadDisableTouch;
- (id)payloadDisableVolumeButtons;
- (id)payloadEnableAssistiveTouch;
- (id)payloadEnableInvertColors;
- (id)payloadEnableMonoAudio;
- (id)payloadEnableSpeakSelection;
- (id)payloadEnableVoiceOver;
- (id)payloadEnableZoom;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDisableAutoLock:(id)arg1;
- (void)setPayloadDisableDeviceRotation:(id)arg1;
- (void)setPayloadDisableRingerSwitch:(id)arg1;
- (void)setPayloadDisableSleepWakeButton:(id)arg1;
- (void)setPayloadDisableTouch:(id)arg1;
- (void)setPayloadDisableVolumeButtons:(id)arg1;
- (void)setPayloadEnableAssistiveTouch:(id)arg1;
- (void)setPayloadEnableInvertColors:(id)arg1;
- (void)setPayloadEnableMonoAudio:(id)arg1;
- (void)setPayloadEnableSpeakSelection:(id)arg1;
- (void)setPayloadEnableVoiceOver:(id)arg1;
- (void)setPayloadEnableZoom:(id)arg1;

@end
