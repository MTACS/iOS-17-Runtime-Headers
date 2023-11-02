
@interface TTSPerVoiceSettingsViewController : UIViewController {
    TTSPVSettingsWrapper * _wrapper;
}

@property (nonatomic) <TTSPerVoiceSettingsViewControllerDelegate> *dataDelegate;
@property (nonatomic, retain) NSString *speechSource;
@property (nonatomic, retain) TTSPVSettingsWrapper *wrapper;

- (void).cxx_destruct;
- (id)dataDelegate;
- (id)init;
- (void)reloadView;
- (void)setDataDelegate:(id)arg1;
- (void)setSpeechSource:(id)arg1;
- (void)setWrapper:(id)arg1;
- (id)speechSource;
- (void)viewDidLoad;
- (id)wrapper;

@end
