
@interface VCAudioSessionAVAS : VCAudioSession {
    AVAudioSession * _avAudioSession;
    NSDictionary * _cmSessionToAVAudioSessionMapping;
    double  _externalAudioLatency;
    NSSet * _genericSessionProperties;
}

@property (nonatomic) double externalAudioLatency;

- (bool)applyAudioSessionMediaProperties:(id)arg1;
- (void)applyAudioSessionMediaPropertiesForSystemAudio;
- (void)applyAudioSessionProperties;
- (void)applyClientPid;
- (bool)applyRequestedProperties:(id)arg1 propertyOrder:(id)arg2;
- (bool)applyRequestedProperty:(id)arg1 defaultValue:(void*)arg2;
- (unsigned long long)avAudioSessionAllowedRouteTypesFromCMSession:(id)arg1;
- (id)avAudioSessionKeyFromCMSessionKey:(id)arg1;
- (void)dealloc;
- (void)destroyAudioSession;
- (double)externalAudioLatency;
- (void)handleAudioSessionAvailableSampleRateChange:(id)arg1;
- (void)handleAudioSessionInterruption:(id)arg1;
- (void)handleAudioSessionMediaServicesWereLostNotification:(id)arg1;
- (void)handleAudioSessionMediaServicesWereResetNotification:(id)arg1;
- (void)handleAudioSessionRouteChangeNotification:(id)arg1;
- (void)handleSecureMicNotificationWithInterruptionInfo:(id)arg1;
- (bool)hasStarted;
- (id)initWithMode:(int)arg1;
- (bool)internalSelectMicrophoneWithType:(unsigned int)arg1;
- (bool)isInputAvailable;
- (bool)isInputSupported;
- (void)resetOverrideRoute;
- (void)setBlockSize:(double)arg1 sampleRate:(double)arg2 force:(bool)arg3;
- (void)setExternalAudioLatency:(double)arg1;
- (bool)setSampleRate:(double)arg1;
- (bool)setSessionProperty:(id)arg1 value:(id)arg2;
- (void)setSpeakerProperty:(id)arg1;
- (void)setVPBlockConfigurationProperties:(id)arg1;
- (void)setupInputBeamforming;
- (bool)shouldSetupSharePlayWithOperatingMode:(unsigned int)arg1 isSharePlayCapable:(bool*)arg2;
- (bool)startInternal;
- (bool)startSessionWithMediaProperties:(id)arg1 sessionRef:(unsigned int*)arg2;
- (bool)stopSession;

@end
