
@interface SRSVTPreferences : NSObject {
    VTPreferences * _preferences;
}

- (void).cxx_destruct;
- (id)init;
- (id)localizedTriggerPhraseForLanguageCode:(id)arg1;
- (void)setVoiceTriggerEnabled:(bool)arg1;
- (bool)voiceTriggerEnabled;

@end
