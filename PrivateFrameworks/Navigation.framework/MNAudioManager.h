
@interface MNAudioManager : NSObject <MNAudioHardwareEngineObserver> {
    MNAudioHardwareEngine * _audioEngine;
    MNObserverHashTable * _observers;
    MNUserOptions * _options;
    int  _transportType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) unsigned long long voiceGuidanceLevel;

- (void).cxx_destruct;
- (void)_changeVoiceGuidanceLevel:(unsigned long long)arg1 forTransportType:(int)arg2;
- (bool)_deviceIsMuted;
- (bool)_deviceSettingsAllowSpeech;
- (void)_pushAudioSystemOptionsFromUserOptions:(id)arg1;
- (int)_supportedTransportTypeForTransportType:(int)arg1;
- (void)addObserver:(id)arg1;
- (void)audioHardwareEngine:(id)arg1 didActivateAudioSession:(bool)arg2;
- (void)audioHardwareEngine:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)changeTransportType:(int)arg1;
- (void)changeVoiceGuidanceLevel:(unsigned long long)arg1 forTransportType:(int)arg2;
- (void)clearAllAnnouncements;
- (void)dealloc;
- (void)didChangeUserOptionsFrom:(id)arg1 to:(id)arg2;
- (double)durationOf:(id)arg1;
- (id)initWithTransportType:(int)arg1 andVoiceGuidanceLevel:(unsigned long long)arg2 andVoiceLanguage:(id)arg3;
- (bool)isSpeaking;
- (void)removeObserver:(id)arg1;
- (void)speak:(id)arg1 withVoiceGuidanceLevel:(unsigned long long)arg2 andCondition:(unsigned long long)arg3 usingShortPrompt:(unsigned long long)arg4 thenCallCompletion:(id /* block */)arg5;
- (void)stopSpeaking;
- (int)transportType;
- (bool)vibrateForShortPrompt:(unsigned long long)arg1;
- (bool)voiceGuidanceEnabled;
- (unsigned long long)voiceGuidanceLevel;

@end
