
@interface SiriSetup.VoiceSelectionWelcomeController : OBTableWelcomeController <SUICVoiceSelectionPresenterDelegate> {
    void continueButton;
    void currentVoiceSelection;
    void delegate;
    void orbView;
    void primaryButton;
    void voiceOptionsView;
    void voiceSelectionPresenter;
}

- (void).cxx_destruct;
- (void)chooseForMeTapped;
- (void)continueTapped;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (void)presenter:(id)arg1 didChangeVoiceSelection:(id)arg2;

@end
