
@interface HROnboardingElectrocardiogramUpdateAvailabilityViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate> {
    UILabel * _bodyLabel;
    HRElectrocardiogramWatchAppInstallability * _ecgAppInstallability;
    UIView * _heroView;
    UILabel * _locationFooterLabel;
    HRElectrocardiogramCurrentLocationOnboardingDeterminer * _onboardingAvailabilityDeterminer;
    HRStackedButtonView * _stackedButtonView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) HRElectrocardiogramWatchAppInstallability *ecgAppInstallability;
@property (nonatomic, retain) UIView *heroView;
@property (nonatomic, retain) UILabel *locationFooterLabel;
@property (nonatomic, retain) HRElectrocardiogramCurrentLocationOnboardingDeterminer *onboardingAvailabilityDeterminer;
@property (nonatomic, retain) HRStackedButtonView *stackedButtonView;
@property (nonatomic, retain) UILabel *titleLabel;

+ (void)markElectrocardiogramUpdateAsViewed:(id)arg1;

- (void).cxx_destruct;
- (double)_bodyBottomToLocationTop;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (id)_footnoteFont;
- (id)_footnoteTextStyle;
- (double)_locationFooterLastBaselineToContinueButton;
- (double)_titleBottomToBodyTop;
- (id)_titleFont;
- (id)_titleFontTextStyle;
- (id)bodyLabel;
- (id)bodyString;
- (id)buttonTitleString;
- (void)continueAndCheckForUpdateAvailability:(id)arg1;
- (id)deviceNotSupportedBodyString;
- (id)ecgAppInstallability;
- (id)featureDisabledBodyString;
- (id)heroView;
- (id)initForOnboarding:(bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2;
- (id)locationFeatureIneligiblePromptBodyString;
- (id)locationFooterLabel;
- (id)locationFooterString;
- (id)locationNotFoundPromptBodyString;
- (id)locationNotFoundPromptTitleString;
- (id)onboardingAvailabilityDeterminer;
- (void)setBodyLabel:(id)arg1;
- (void)setEcgAppInstallability:(id)arg1;
- (void)setHeroView:(id)arg1;
- (void)setLocationFooterLabel:(id)arg1;
- (void)setOnboardingAvailabilityDeterminer:(id)arg1;
- (void)setStackedButtonView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)stackedButtonView;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (id)titleLabel;
- (id)titleString;
- (id)updateFeatureIneligiblePromptBodyString;
- (void)viewDidAppear:(bool)arg1;
- (id)watchOSVersionTooLowBodyString;

@end
