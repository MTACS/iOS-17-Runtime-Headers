
@interface VTUIVoiceSelectionView : VTUIEnrollmentBaseView <VTUIVoiceSelectionContaining> {
    bool  _allowsRandomSelection;
    UIButton * _chooseRandomVoiceButton;
    UIButton * _continueButton;
    UIButton * _dismissButton;
    UIView * _footerView;
    bool  _shouldShowContinueButton;
}

@property (nonatomic, retain) UIButton *chooseRandomVoiceButton;
@property (nonatomic, retain) UIButton *continueButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupButtons;
- (id)chooseRandomVoiceButton;
- (id)continueButton;
- (id)dismissButton;
- (id)footerView;
- (id)initWithAllowsRandomVoiceSelection:(bool)arg1 showContinueButton:(bool)arg2;
- (void)setChooseRandomVoiceButton:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setDismissButton:(id)arg1;
- (void)tintColorDidChange;

@end
