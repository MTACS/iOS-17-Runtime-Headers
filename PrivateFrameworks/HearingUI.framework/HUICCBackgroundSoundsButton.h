
@interface HUICCBackgroundSoundsButton : HUICCCapsuleButton {
    NSString * _axHintStr;
    CCUILabeledRoundButtonViewController * _buttonVC;
}

@property (nonatomic, retain) NSString *axHintStr;
@property (nonatomic, retain) CCUILabeledRoundButtonViewController *buttonVC;

- (void).cxx_destruct;
- (void)_updateButtonView;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (id)axHintStr;
- (id)buttonVC;
- (id)contentValue;
- (bool)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAxHintStr:(id)arg1;
- (void)setButtonVC:(id)arg1;
- (bool)shouldIncludeIconViewInFooterViews;
- (void)updateValue;

@end
