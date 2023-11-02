
@interface AssistantAudioFeedbackController : PSListController {
    PSSpecifier * _automaticSpecifier;
    PSSpecifier * _groupSpecifier;
    PSSpecifier * _preferSilentResponsesSpecifier;
    PSSpecifier * _preferSpokenResponsesSpecifier;
    long long  _useDeviceSpeakerForTTSPreference;
}

+ (id)bundle;

- (void).cxx_destruct;
- (id)_localizeTriggerString:(id)arg1;
- (void)_refreshFooterForSpecifier:(id)arg1;
- (void)_updateSpecifiersFromPreferences;
- (id)alwaysShowRecognizedSpeech;
- (id)footerVariant;
- (id)isAlwaysPrintSiriResponseEnabled:(id)arg1;
- (void)preferencesDidChange:(id)arg1;
- (void)setAlwaysPrintSiriResponseEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setAlwaysShowRecognizedSpeech:(id)arg1 forSpecifier:(id)arg2;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
