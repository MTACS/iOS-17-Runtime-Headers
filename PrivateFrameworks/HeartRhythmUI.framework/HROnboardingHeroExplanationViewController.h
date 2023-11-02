
@interface HROnboardingHeroExplanationViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate> {
    UILabel * _bodyLabel;
    NSLayoutConstraint * _contentViewBottomConstraint;
    UIView * _heroView;
    HRStackedButtonView * _stackedButtonView;
    long long  _textAlignment;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, readonly) NSString *bodyString;
@property (nonatomic, readonly) NSString *buttonTitleString;
@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic, retain) UIView *heroView;
@property (nonatomic, retain) HRStackedButtonView *stackedButtonView;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, readonly) NSString *titleString;

- (void).cxx_destruct;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (void)_setUpButtonFooterView;
- (id)_titleFont;
- (id)_titleFontTextStyle;
- (double)_titleLastBaselineToBodyTop;
- (double)_titleTopToFirstBaseline;
- (double)_titleTopToFirstBaselineLeading;
- (long long)accessibilityGroupID;
- (id)bodyLabel;
- (id)bodyString;
- (id)buttonTitleString;
- (id)contentViewBottomConstraint;
- (id)createHeroView;
- (id)heroView;
- (void)setBodyLabel:(id)arg1;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setHeroView:(id)arg1;
- (void)setStackedButtonView:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)stackedButtonView;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (long long)stackedButtonViewLastButtonMode;
- (long long)textAlignment;
- (id)titleLabel;
- (id)titleString;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
