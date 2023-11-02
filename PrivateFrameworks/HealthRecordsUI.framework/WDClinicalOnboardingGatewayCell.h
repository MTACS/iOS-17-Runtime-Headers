
@interface WDClinicalOnboardingGatewayCell : WDMedicalRecordGroupableCell {
    UILabel * _detailLabel;
    NSLayoutConstraint * _featureDownloadBottomConstraint;
    UILabel * _featureDownloadTextLabel;
    UILabel * _featureDownloadTitleLabel;
    HKBorderLineView * _featureDownloadView;
    NSLayoutConstraint * _featureSharingBottomConstraint;
    UILabel * _featureSharingTextLabel;
    UILabel * _featureSharingTitleLabel;
    HKBorderLineView * _featureSharingView;
    WDBrandLogoView * _logoView;
    UIStackView * _outerSpecContainerView;
    UILabel * _subtitleLabel;
    UILabel * _tapToConnectLabel;
    NSLayoutConstraint * _tapToConnectLabelHeightConstraint;
    UILabel * _titleLabel;
    UIStackView * _verticalSpecContainerView;
}

@property (nonatomic, readonly) UILabel *detailLabel;
@property (nonatomic, readonly) NSLayoutConstraint *featureDownloadBottomConstraint;
@property (nonatomic, readonly) UILabel *featureDownloadTextLabel;
@property (nonatomic, readonly) UILabel *featureDownloadTitleLabel;
@property (nonatomic, readonly) HKBorderLineView *featureDownloadView;
@property (nonatomic, readonly) NSLayoutConstraint *featureSharingBottomConstraint;
@property (nonatomic, readonly) UILabel *featureSharingTextLabel;
@property (nonatomic, readonly) UILabel *featureSharingTitleLabel;
@property (nonatomic, readonly) HKBorderLineView *featureSharingView;
@property (nonatomic, readonly) WDBrandLogoView *logoView;
@property (nonatomic, readonly) UIStackView *outerSpecContainerView;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *tapToConnectLabel;
@property (nonatomic, readonly) NSLayoutConstraint *tapToConnectLabelHeightConstraint;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UIStackView *verticalSpecContainerView;

- (void).cxx_destruct;
- (void)_constrainStackViewContainerWithinContentView;
- (id)_contentViewMarginsGuide;
- (void)_createDetailLabel;
- (void)_createDownloadAvailableView;
- (void)_createLogoView;
- (void)_createOuterSpecContainerView;
- (void)_createSharingAvailableView;
- (void)_createSubtitleLabel;
- (void)_createTapToConnectLabel;
- (void)_createTitleLabel;
- (void)_createVerticalSpecContainerView;
- (void)_positionTapToConnectLabel;
- (void)_setAccessibilityIdentifiers;
- (void)_updateBasedOnAccessibilityCategory:(bool)arg1;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateLabelVisibility;
- (void)configureWithGateway:(id)arg1 dataProvider:(id)arg2 connected:(bool)arg3;
- (id)detailLabel;
- (id)featureDownloadBottomConstraint;
- (id)featureDownloadTextLabel;
- (id)featureDownloadTitleLabel;
- (id)featureDownloadView;
- (id)featureSharingBottomConstraint;
- (id)featureSharingTextLabel;
- (id)featureSharingTitleLabel;
- (id)featureSharingView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)logoView;
- (id)outerSpecContainerView;
- (void)prepareForReuse;
- (void)setUpConstraints;
- (void)setupSubviews;
- (id)subtitleLabel;
- (id)tapToConnectLabel;
- (id)tapToConnectLabelHeightConstraint;
- (void)tintColorDidChange;
- (id)titleLabel;
- (id)verticalSpecContainerView;

@end
