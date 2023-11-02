
@interface _UIFeedbackData : NSObject <_UIFeedbackData> {
    _UIFeedbackParameters * _audioParameters;
    bool  _canReuseCoreHapticsPlayer;
    bool  _disableEventUseVolumeEnvelope;
    double  _effectiveDelay;
    double  _effectiveDuration;
    unsigned long long  _effectiveEnabledFeedbackTypes;
    unsigned long long  _effectiveEventType;
    unsigned int  _effectiveSystemSoundID;
    unsigned long long  _fileFeedbackType;
    NSURL * _fileURL;
    _UIFeedbackParameters * _hapticParameters;
    float  _intensity;
    bool  _isTransientHaptic;
    CHHapticPattern * _pattern;
    float  _sharpness;
}

@property (setter=_setAudioParameters:, nonatomic, retain) _UIFeedbackParameters *audioParameters;
@property (setter=_setCanReuseCoreHapticsPlayer:, nonatomic) bool canReuseCoreHapticsPlayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setDisableEventUseVolumeEnvelope:, nonatomic) bool disableEventUseVolumeEnvelope;
@property (setter=_setEffectiveDelay:, nonatomic) double effectiveDelay;
@property (setter=_setEffectiveDuration:, nonatomic) double effectiveDuration;
@property (setter=_setEffectiveEnabledFeedbackTypes:, nonatomic) unsigned long long effectiveEnabledFeedbackTypes;
@property (setter=_setEffectiveEventType:, nonatomic) unsigned long long effectiveEventType;
@property (setter=_setEffectiveSystemSoundID:, nonatomic) unsigned int effectiveSystemSoundID;
@property (setter=_setFileFeedbackType:, nonatomic) unsigned long long fileFeedbackType;
@property (setter=_setFileURL:, nonatomic, retain) NSURL *fileURL;
@property (setter=_setHapticParameters:, nonatomic, retain) _UIFeedbackParameters *hapticParameters;
@property (readonly) unsigned long long hash;
@property (setter=_setIntensity:, nonatomic) float intensity;
@property (setter=_setIsTransientHaptic:, nonatomic) bool isTransientHaptic;
@property (setter=_setPattern:, nonatomic, retain) CHHapticPattern *pattern;
@property (setter=_setSharpness:, nonatomic) float sharpness;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setAudioParameters:(id)arg1;
- (void)_setCanReuseCoreHapticsPlayer:(bool)arg1;
- (void)_setDisableEventUseVolumeEnvelope:(bool)arg1;
- (void)_setEffectiveDelay:(double)arg1;
- (void)_setEffectiveDuration:(double)arg1;
- (void)_setEffectiveEnabledFeedbackTypes:(unsigned long long)arg1;
- (void)_setEffectiveEventType:(unsigned long long)arg1;
- (void)_setEffectiveSystemSoundID:(unsigned int)arg1;
- (void)_setFileFeedbackType:(unsigned long long)arg1;
- (void)_setFileURL:(id)arg1;
- (void)_setHapticParameters:(id)arg1;
- (void)_setIntensity:(float)arg1;
- (void)_setIsTransientHaptic:(bool)arg1;
- (void)_setPattern:(id)arg1;
- (void)_setSharpness:(float)arg1;
- (id)audioParameters;
- (bool)canReuseCoreHapticsPlayer;
- (bool)disableEventUseVolumeEnvelope;
- (double)effectiveDelay;
- (double)effectiveDuration;
- (unsigned long long)effectiveEnabledFeedbackTypes;
- (unsigned long long)effectiveEventType;
- (unsigned int)effectiveSystemSoundID;
- (unsigned long long)fileFeedbackType;
- (id)fileURL;
- (id)hapticParameters;
- (float)intensity;
- (bool)isTransientHaptic;
- (id)pattern;
- (float)sharpness;

@end
