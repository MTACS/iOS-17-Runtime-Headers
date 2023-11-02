
@interface AXSpeechSettingsPerVoicePreferencesController : UIViewController <TTSPerVoiceSettingsViewControllerDelegate> {
    AXSettingsResourceDownloadController * _parentController;
    TTSPerVoiceSettingsViewController * _pvsettingViewController;
    NSString * _speechSourceKey;
    NSString * _voiceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) AXSettingsResourceDownloadController *parentController;
@property (nonatomic, retain) TTSPerVoiceSettingsViewController *pvsettingViewController;
@property (nonatomic, retain) NSString *speechSourceKey;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *voiceIdentifier;

- (void).cxx_destruct;
- (id)getVoiceIdentifier;
- (id)getVoiceSettings;
- (id)parentController;
- (id)pvsettingViewController;
- (void)setParentController:(id)arg1;
- (void)setPvsettingViewController:(id)arg1;
- (void)setSpeechSourceKey:(id)arg1;
- (void)setVoiceIdentifier:(id)arg1;
- (id)speechSourceKey;
- (void)viewDidLoad;
- (id)voiceIdentifier;
- (void)voiceSettingsDidChangeForVoice:(id)arg1 settings:(id)arg2;

@end
