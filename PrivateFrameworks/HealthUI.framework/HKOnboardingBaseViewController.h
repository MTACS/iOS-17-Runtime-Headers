
@interface HKOnboardingBaseViewController : HKViewController {
    NSString * _cancelWithConfirmAlertAbortActionTitle;
    NSString * _cancelWithConfirmAlertContinueActionTitle;
    NSString * _cancelWithConfirmAlertTitle;
    UIView * _contentView;
    <HKOnboardingPageViewControllerDelegate> * _delegate;
    UIView * _footerView;
    long long  _leftButtonType;
    bool  _onboarding;
    long long  _rightButtonType;
    UIScrollView * _scrollView;
    NSLayoutConstraint * _scrollViewBottomConstraint;
    long long  _upgradingFromAlgorithmVersion;
}

@property (nonatomic, copy) NSString *cancelWithConfirmAlertAbortActionTitle;
@property (nonatomic, copy) NSString *cancelWithConfirmAlertContinueActionTitle;
@property (nonatomic, copy) NSString *cancelWithConfirmAlertTitle;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) <HKOnboardingPageViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIView *footerView;
@property (nonatomic) long long leftButtonType;
@property (getter=isOnboarding, nonatomic, readonly) bool onboarding;
@property (nonatomic) long long rightButtonType;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) NSLayoutConstraint *scrollViewBottomConstraint;
@property (nonatomic) long long upgradingFromAlgorithmVersion;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void).cxx_destruct;
- (void)_adjustScrollViewForFooterView;
- (id)_buttonForButtonType:(long long)arg1;
- (id)_cancelButton;
- (id)_cancelWithConfirmButton;
- (id)_closeButton;
- (void)_setUpNavigationBar;
- (id)_skipButton;
- (id)_titleFontTextStyle;
- (double)_titleTopToFirstBaselineLeading;
- (id)cancelWithConfirmAlertAbortActionTitle;
- (id)cancelWithConfirmAlertContinueActionTitle;
- (id)cancelWithConfirmAlertTitle;
- (void)cancelWithConfirmButtonTapped:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (double)contentTop;
- (id)contentView;
- (id)delegate;
- (id)footerView;
- (id)initForOnboarding:(bool)arg1;
- (id)initForOnboarding:(bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2;
- (bool)isOnboarding;
- (long long)leftButtonType;
- (void)presentAlertWithMessage:(id)arg1;
- (void)presentAlertWithMessage:(id)arg1 title:(id)arg2;
- (void)presentLearnMoreAlertWithMessage:(id)arg1 learnMoreTapped:(id /* block */)arg2;
- (void)removeFooterView;
- (long long)rightButtonType;
- (id)scrollView;
- (id)scrollViewBottomConstraint;
- (void)setCancelWithConfirmAlertAbortActionTitle:(id)arg1;
- (void)setCancelWithConfirmAlertContinueActionTitle:(id)arg1;
- (void)setCancelWithConfirmAlertTitle:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setFooterView:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)setLeftButtonType:(long long)arg1;
- (void)setRightButtonType:(long long)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollViewBottomConstraint:(id)arg1;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)setUpgradingFromAlgorithmVersion:(long long)arg1;
- (void)skipButtonTapped:(id)arg1;
- (id)titleFont;
- (double)titleTopToFirstBaseline;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUserInterfaceForStyle:(long long)arg1;
- (long long)upgradingFromAlgorithmVersion;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI

- (void)configureNavigationButtonWithTypeCancelWithConfirmForAtrialFibrillation;
- (void)configureNavigationButtonWithTypeCancelWithConfirmForElectrocardiogram;

@end
