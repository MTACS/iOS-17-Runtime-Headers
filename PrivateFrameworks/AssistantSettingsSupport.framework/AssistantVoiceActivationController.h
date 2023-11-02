
@interface AssistantVoiceActivationController : PSListController {
    PSConfirmationSpecifier * _confirmationSpecifier;
    <AssistantVoiceActivationDelegate> * _delegate;
    PSSpecifier * _groupSpecifier;
    unsigned long long  _selectedPhrase;
    PSSpecifier * _voiceActivationHSAndCompactSpecifier;
    PSSpecifier * _voiceActivationHSSpecifier;
    PSSpecifier * _voiceActivationOffSpecifier;
}

@property (nonatomic) <AssistantVoiceActivationDelegate> *delegate;

+ (id)bundle;

- (void).cxx_destruct;
- (bool)_isHeySiriAlwaysOn;
- (bool)_isVoiceTriggerEnabled;
- (id)_localizeTriggerString:(id)arg1;
- (void)_refreshFootersForSpecifiers;
- (id)_updateAndGetCheckedSpecifier;
- (void)_updateSelectedPhrase;
- (void)_updateSpecifiersFromPreferences;
- (id)delegate;
- (id)footerVariant;
- (void)preferencesDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setVoiceActivation:(id)arg1 forSpecifier:(id)arg2;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (id)voiceActivation:(id)arg1;

@end
