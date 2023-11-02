
@interface HROnboardingElectrocardiogramUpdateCompleteViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate> {
    UILabel * _bodyLabel;
    NSLayoutConstraint * _contentViewBottomConstraint;
    <HROnboardingElectrocardiogramUpdateCompleteViewControllerDelegate> * _electrocardiogramDelegate;
    HRMiniTilePlatterView * _otherDevicesTile;
    HRStackedButtonView * _stackedButtonView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic) <HROnboardingElectrocardiogramUpdateCompleteViewControllerDelegate> *electrocardiogramDelegate;
@property (nonatomic, retain) HRMiniTilePlatterView *otherDevicesTile;
@property (nonatomic, retain) HRStackedButtonView *stackedButtonView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)_showDevicesInWatchAppTapped:(id)arg1;
- (id)_titleFont;
- (id)_titleFontTextStyle;
- (id)bodyLabel;
- (id)bodyString;
- (id)buttonTitleString;
- (id)contentViewBottomConstraint;
- (id)electrocardiogramDelegate;
- (id)initForOnboarding:(bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2 electrocardiogramDelegate:(id)arg3;
- (id)otherDevicesTile;
- (id)otherDevicesTileAction;
- (id)otherDevicesTileBody;
- (id)otherDevicesTileTitle;
- (id)otherDevicesWithUpdateAvailable;
- (void)setBodyLabel:(id)arg1;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setElectrocardiogramDelegate:(id)arg1;
- (void)setOtherDevicesTile:(id)arg1;
- (void)setStackedButtonView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)stackedButtonView;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (id)titleLabel;
- (id)titleString;
- (void)viewDidLoad;

@end
