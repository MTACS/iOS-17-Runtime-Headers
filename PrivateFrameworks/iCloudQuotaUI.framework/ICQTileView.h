
@interface ICQTileView : ICQBannerView <ICQUpgradeFlowManagerDelegate> {
    UIStackView * _actionButtonsStack;
    ICQPremiumButton * _dismissButton;
    ICQAsyncImageView * _iconImageView;
    UILabel * _messageLabel;
    ICQPremiumOffer * _premiumOffer;
    ICQPremiumButton * _primaryButton;
    _ICQOpportunityBubbleReportingSpecification * _reportingDetails;
    ICQPremiumButton * _secondaryButton;
    UIView * _separator;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelDismissButtonSpacingConstraint;
    NSLayoutConstraint * _titleLabelTrailingConstraint;
}

@property (nonatomic, retain) UIStackView *actionButtonsStack;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQTileViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ICQPremiumButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICQAsyncImageView *iconImageView;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) ICQPremiumOffer *premiumOffer;
@property (nonatomic, retain) ICQPremiumButton *primaryButton;
@property (nonatomic, retain) _ICQOpportunityBubbleReportingSpecification *reportingDetails;
@property (nonatomic, retain) ICQPremiumButton *secondaryButton;
@property (nonatomic, retain) UIView *separator;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelDismissButtonSpacingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelTrailingConstraint;

+ (bool)shouldShowForPremiumOffer:(id)arg1;

- (void).cxx_destruct;
- (id)_getOffer;
- (bool)_launchFlowManagerWithLink:(id)arg1;
- (void)_registerForDarwinNotifications;
- (void)_startOnDeviceJourneyForSystemUpgrade;
- (void)_updateBannerViewConstraints;
- (void)actionButtonTapped:(id)arg1;
- (id)actionButtonsStack;
- (id)attributedText;
- (void)configureSubviews;
- (void)createActionButtons;
- (void)createActionButtonsStack;
- (void)createButtonsFromBubbleDetails:(id)arg1;
- (id)createLabelWithText:(id)arg1;
- (void)createOrUpdateImageViewFromImageDetails:(id)arg1;
- (void)createOrUpdateMessageLabelWithMessage:(id)arg1;
- (void)createOrUpdateTitleLabelWithTitle:(id)arg1;
- (void)createSeparator;
- (id)detailAttributedText;
- (id)dismissButton;
- (void)dismissButtonTapped:(id)arg1;
- (bool)handleActionFromLink:(id)arg1;
- (id)iconImageView;
- (id)initWithPremiumOffer:(id)arg1;
- (id)messageLabel;
- (id)premiumOffer;
- (id)primaryButton;
- (id)reportingDetails;
- (id)secondaryButton;
- (id)separator;
- (void)setActionButtonsStack:(id)arg1;
- (void)setDismissButton:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setPremiumOffer:(id)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setReportingDetails:(id)arg1;
- (void)setSecondaryButton:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleLabelDismissButtonSpacingConstraint:(id)arg1;
- (void)setTitleLabelTrailingConstraint:(id)arg1;
- (id)titleLabel;
- (id)titleLabelDismissButtonSpacingConstraint;
- (id)titleLabelTrailingConstraint;
- (void)updateDismissButtonWithAction:(id)arg1;
- (void)updatePrimaryButtonWithAction:(id)arg1;
- (void)updateSecondaryButtonWithAction:(id)arg1;
- (void)updateTileViewWithOffer:(id)arg1;

@end
