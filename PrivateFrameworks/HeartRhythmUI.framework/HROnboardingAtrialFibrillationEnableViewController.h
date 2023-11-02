
@interface HROnboardingAtrialFibrillationEnableViewController : HKOnboardingBaseViewController <HKAdaptiveModalPresented, HRStackedButtonViewDelegate> {
    UILabel * _bodyLabel;
    NSLayoutConstraint * _contentViewBottomConstraint;
    UILabel * _footnoteLabel;
    UIView * _heroView;
    HRStackedButtonView * _stackedButtonView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic, retain) UILabel *footnoteLabel;
@property (nonatomic, retain) UIView *heroView;
@property (nonatomic, retain) HRStackedButtonView *stackedButtonView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (id)_footnoteFont;
- (id)_footnoteFontTextStyle;
- (double)_footnoteToButton;
- (id)_titleFont;
- (id)_titleFontTextStyle;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (id)axidForElementWithString:(id)arg1;
- (id)bodyLabel;
- (id)contentViewBottomConstraint;
- (id)createHeroView;
- (id)footnoteLabel;
- (id)heroView;
- (id)initForOnboarding:(bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2;
- (void)setBodyLabel:(id)arg1;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setFootnoteLabel:(id)arg1;
- (void)setHeroView:(id)arg1;
- (void)setStackedButtonView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)stackedButtonView;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (id)titleLabel;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;

@end
