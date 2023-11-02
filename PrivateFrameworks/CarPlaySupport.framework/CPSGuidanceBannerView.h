
@interface CPSGuidanceBannerView : CPSBannerView {
    CPUIBannerViewButton * _actionButton;
    UIImageView * _applicationIconImageView;
    long long  _currentInterfaceStyle;
    CPSAbridgableLabel * _guidanceDetailTextLabel;
    UIImageView * _guidanceImageView;
    CPSAbridgableLabel * _guidanceTextLabel;
    UIStackView * _labelStackView;
}

@property (nonatomic, retain) CPUIBannerViewButton *actionButton;
@property (nonatomic, retain) UIImageView *applicationIconImageView;
@property (nonatomic) long long currentInterfaceStyle;
@property (nonatomic, retain) CPSAbridgableLabel *guidanceDetailTextLabel;
@property (nonatomic, retain) UIImageView *guidanceImageView;
@property (nonatomic, retain) CPSAbridgableLabel *guidanceTextLabel;
@property (nonatomic, retain) UIStackView *labelStackView;

- (void).cxx_destruct;
- (void)_setGuidanceImageViewForImageSet:(id)arg1;
- (void)_updateBannerSelectedState;
- (void)_updateLabels;
- (id)actionButton;
- (id)applicationIconImageView;
- (long long)currentInterfaceStyle;
- (id)guidanceDetailTextLabel;
- (id)guidanceImageView;
- (id)guidanceTextLabel;
- (id)initWithBannerItem:(id)arg1;
- (id)labelStackView;
- (void)setActionButton:(id)arg1;
- (void)setApplicationIconImageView:(id)arg1;
- (void)setCurrentInterfaceStyle:(long long)arg1;
- (void)setGuidanceDetailTextLabel:(id)arg1;
- (void)setGuidanceImageView:(id)arg1;
- (void)setGuidanceTextLabel:(id)arg1;
- (void)setLabelStackView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBannerWithBannerItem:(id)arg1;

@end
