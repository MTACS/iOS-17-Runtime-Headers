
@interface TTSFirstPartyAudioUnit : AVSpeechSynthesisProviderAudioUnit <TTSAUMessaging> {
    TTSAUMessagingAU * _channel;
}

@property (nonatomic, retain) TTSAUMessagingAU *channel;

+ (void)registerInProcess;
+ (bool)shouldLogSensitiveSpeech;

- (void).cxx_destruct;
- (id)channel;
- (id)defaultSettingsForVoice:(id)arg1;
- (id)echo:(id)arg1;
- (id)messageChannelFor:(id)arg1;
- (id)requireFirstUnlockForVoiceLoad;
- (void)setChannel:(id)arg1;
- (id)voicesExternallyManaged;

@end
