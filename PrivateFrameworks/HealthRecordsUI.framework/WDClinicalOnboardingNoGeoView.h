
@interface WDClinicalOnboardingNoGeoView : UIView {
    NSLayoutConstraint * _containerCenterYConstraint;
    UIView * _containerView;
    UIButton * _locationServicesButton;
    NSLayoutConstraint * _locationServicesButtonBaselineConstraint;
    NSLayoutConstraint * _subtitleBaselineConstraint;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSLayoutConstraint *containerCenterYConstraint;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) UIButton *locationServicesButton;
@property (nonatomic, retain) NSLayoutConstraint *locationServicesButtonBaselineConstraint;
@property (nonatomic, retain) NSLayoutConstraint *subtitleBaselineConstraint;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_tappedLocationServices:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (id)containerCenterYConstraint;
- (id)containerView;
- (id)init;
- (void)layoutSubviews;
- (id)locationServicesButton;
- (id)locationServicesButtonBaselineConstraint;
- (void)setContainerCenterYConstraint:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setLocationServicesButton:(id)arg1;
- (void)setLocationServicesButtonBaselineConstraint:(id)arg1;
- (void)setSubtitleBaselineConstraint:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleBaselineConstraint;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
