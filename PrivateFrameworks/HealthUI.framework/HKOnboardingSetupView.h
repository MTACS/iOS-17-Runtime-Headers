
@interface HKOnboardingSetupView : UIView {
    UILabel * _bodyLabel;
    <HKOnboardingSetupViewDelegate> * _delegate;
    UIView * _heroView;
    UIButton * _onboardingButton;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) long long accessibilityGroupID;
@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, readonly) NSString *bodyString;
@property (nonatomic, readonly) NSString *buttonTitleString;
@property (nonatomic) <HKOnboardingSetupViewDelegate> *delegate;
@property (nonatomic, retain) UIView *heroView;
@property (nonatomic, retain) UIButton *onboardingButton;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, readonly) NSString *titleString;

- (void).cxx_destruct;
- (void)_didTapOnboardingButton;
- (void)_setUpConstraints;
- (long long)accessibilityGroupID;
- (id)bodyLabel;
- (id)bodyString;
- (id)buttonTitleString;
- (id)createHeroView;
- (id)delegate;
- (id)heroView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)onboardingButton;
- (void)setBodyLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeroView:(id)arg1;
- (void)setOnboardingButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (id)titleString;

@end
