
@interface HACCLiveListenButton : HUICCCapsuleButton {
    NSString * _axHintStr;
    CCUILabeledRoundButtonViewController * _buttonVC;
    bool  _isListening;
    bool  _isLiveListenAvailable;
    HACCLiveListenLevelGroup * _levelGroup;
    HUILiveListenLevelIndicator * _levelIndicator;
    long long  _liveListenState;
    SBSStatusBarStyleOverridesAssertion * _statusBarAssertion;
}

@property (nonatomic, retain) NSString *axHintStr;
@property (nonatomic, retain) CCUILabeledRoundButtonViewController *buttonVC;
@property (nonatomic) bool isListening;
@property (nonatomic) bool isLiveListenAvailable;
@property (nonatomic, retain) HACCLiveListenLevelGroup *levelGroup;
@property (nonatomic, retain) HUILiveListenLevelIndicator *levelIndicator;
@property (nonatomic) long long liveListenState;
@property (nonatomic, retain) SBSStatusBarStyleOverridesAssertion *statusBarAssertion;

- (void).cxx_destruct;
- (void)_updateButtonView;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessoryView;
- (id)axHintStr;
- (id)buttonVC;
- (id)contentValue;
- (bool)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isListening;
- (bool)isLiveListenAvailable;
- (id)levelGroup;
- (id)levelIndicator;
- (void)liveListenAudioLevelDidChange:(double)arg1;
- (long long)liveListenState;
- (void)setAxHintStr:(id)arg1;
- (void)setButtonVC:(id)arg1;
- (void)setIsListening:(bool)arg1;
- (void)setIsLiveListenAvailable:(bool)arg1;
- (void)setLevelGroup:(id)arg1;
- (void)setLevelIndicator:(id)arg1;
- (void)setLiveListenState:(long long)arg1;
- (void)setStatusBarAssertion:(id)arg1;
- (id)statusBarAssertion;
- (void)updateStatusBarOverride;
- (void)updateUI;
- (void)updateUILiveListenRemote;
- (void)updateValue;

@end
