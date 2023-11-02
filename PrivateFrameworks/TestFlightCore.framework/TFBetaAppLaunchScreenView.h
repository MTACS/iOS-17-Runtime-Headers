
@interface TFBetaAppLaunchScreenView : UIView {
    UILabel * _bodyTextLabel;
    UILabel * _bodyTitleLabel;
    UIVisualEffectView * _buttonBackgroundEffectView;
    TFDeviceInstructionView * _instructionView;
    TFAppLockupView * _lockupView;
    UIButton * _primaryButton;
    UIScrollView * _scrollView;
    UIButton * _secondaryButton;
    UIView * _snapshot;
    TFBetaAppLaunchScreenViewSpecification * _specification;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UILabel *bodyTextLabel;
@property (nonatomic, readonly) UILabel *bodyTitleLabel;
@property (nonatomic, readonly) UIVisualEffectView *buttonBackgroundEffectView;
@property (nonatomic, readonly) TFDeviceInstructionView *instructionView;
@property (nonatomic, readonly) TFAppLockupView *lockupView;
@property (nonatomic, readonly) UIButton *primaryButton;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) UIButton *secondaryButton;
@property (nonatomic, retain) UIView *snapshot;
@property (nonatomic, retain) TFBetaAppLaunchScreenViewSpecification *specification;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_layoutButtonModuleWithLayoutMetrics:(id)arg1;
- (void)_layoutScrollViewWithLayoutMetrics:(id)arg1 accomodatingPinnedBottomView:(id)arg2;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (id)bodyTextLabel;
- (id)bodyTitleLabel;
- (id)buttonBackgroundEffectView;
- (void)cleanupSnapshot;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)instructionView;
- (void)layoutSubviews;
- (id)lockupView;
- (void)prepareForState:(unsigned long long)arg1;
- (id)primaryButton;
- (id)scrollView;
- (id)secondaryButton;
- (void)setBodyTitle:(id)arg1 bodyText:(id)arg2;
- (void)setDeviceImage:(id)arg1 withOrientation:(long long)arg2;
- (void)setDeviceImageOrientation:(long long)arg1;
- (void)setDeviceImageVisibility:(bool)arg1;
- (void)setLockup:(id)arg1;
- (void)setPrimaryButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setSecondaryButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setSnapshot:(id)arg1;
- (void)setSpecification:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)snapshot;
- (void)snapshotCurrentView;
- (id)specification;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
