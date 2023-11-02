
@interface VCAudioSessionCMS : VCAudioSession {
    struct opaqueCMSession { } * _cmSession;
}

@property (nonatomic, readonly) struct opaqueCMSession { }*cmSession;

- (bool)applyAudioSessionMediaProperties:(id)arg1;
- (void)applyAudioSessionMediaPropertiesForSystemAudio;
- (void)applyAudioSessionPropertiesWithVPOperatingMode:(unsigned int)arg1;
- (void)applyClientPid;
- (bool)applyRequestedProperties:(id)arg1 propertyOrder:(id)arg2;
- (bool)applyRequestedProperty:(id)arg1 defaultValue:(void*)arg2;
- (struct opaqueCMSession { }*)cmSession;
- (void)didBeginQuietTime;
- (void)didEndQuietTime;
- (void)handleAudioInterruption:(struct opaqueCMSession { }*)arg1 interruptionInfo:(struct __CFDictionary { }*)arg2;
- (void)handleSecureMicNotificationWithInterruptionInfo:(struct __CFDictionary { }*)arg1;
- (bool)hasStarted;
- (bool)internalSelectMicrophoneWithType:(unsigned int)arg1;
- (bool)isInputSupported;
- (void)resetOverrideRoute;
- (void)setBlockSize:(double)arg1 sampleRate:(double)arg2 force:(bool)arg3;
- (void)setClientName;
- (bool)setSampleRate:(double)arg1;
- (void)setSpeakerProperty:(id)arg1;
- (void)setVPBlockConfigurationProperties:(id)arg1;
- (void)setupInputBeamforming;
- (bool)shouldSetupSharePlayWithOperatingMode:(unsigned int)arg1 isSharePlayCapable:(bool*)arg2;
- (bool)startInternal;
- (bool)startSessionWithMediaProperties:(id)arg1 sessionRef:(unsigned int*)arg2;
- (bool)stopSession;

@end
