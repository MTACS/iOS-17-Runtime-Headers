
@interface SBUIPasscodeViewWithLockScreenStyle : UIView {
    SBUIBackgroundView * _backgroundView;
    UIView<SBUIPasscodeLockView> * _passcodeView;
}

@property (nonatomic, readonly) UIView<SBUIPasscodeLockView> *passcodeView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 includeBlur:(bool)arg2 passcodeViewGenerator:(id /* block */)arg3;
- (void)layoutSubviews;
- (id)passcodeView;
- (void)setBlurEnabled:(bool)arg1;

@end
