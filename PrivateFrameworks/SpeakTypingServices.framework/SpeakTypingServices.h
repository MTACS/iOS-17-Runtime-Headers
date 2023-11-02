
@interface SpeakTypingServices : NSObject <AXUIClientDelegate> {
    AXUIClient * _speakTypingClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AXUIClient *speakTypingClient;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_clientIdentifier;
- (void)clearLastSpokenString;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)initializeServerConnection;
- (id)lastSpokenString;
- (id)lastUsedVoiceIdentifier;
- (bool)notifySpeakServicesForAttributedSpeechOutput:(id)arg1;
- (bool)notifySpeakServicesForSpeakAutoCorrections:(id)arg1 forCurrentInputMode:(id)arg2;
- (bool)notifySpeakServicesForSpeechOutput:(id)arg1 volume:(double)arg2 speakingRate:(double)arg3;
- (bool)notifySpeakServicesToFeedbackQuickTypePrediction:(id)arg1 forCurrentInputMode:(id)arg2;
- (bool)notifySpeakServicesToInitializeServerConnection;
- (bool)notifySpeakServicesToStopSpeaking;
- (bool)notifySpeakServicesToStopSpeakingAutocorrections;
- (void)setLetterFeedbackEnabled:(bool)arg1;
- (void)setPhoneticFeedbackEnabled:(bool)arg1;
- (void)setSpeakTypingClient:(id)arg1;
- (void)setVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (void)setWordFeedbackEnabled:(bool)arg1;
- (id)speakTypingClient;
- (bool)verifyTestingConnection;

@end
