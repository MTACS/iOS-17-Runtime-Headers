
@interface CPSNavigationAlertView : UIView <CPSLinearFocusProviding> {
    CPSButton * _closeButton;
    CPUIFocusRingView * _focusRingView;
    bool  _hasStartedAnimating;
    UIImageView * _imageView;
    CPNavigationAlert * _navigationAlert;
    CPSNavigationAlertFocusButton * _primaryButton;
    CPSNavigationAlertProgressView * _progressView;
    NSArray * _ringConstraints;
    CPSNavigationAlertFocusButton * _secondaryButton;
    UIStackView * _stackView;
    CPSAbridgableNewlineLabel * _subtitleLabel;
    CPSAbridgableNewlineLabel * _titleLabel;
}

@property (nonatomic, retain) CPSButton *closeButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CPUIFocusRingView *focusRingView;
@property (nonatomic) bool hasStartedAnimating;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, readonly) CPNavigationAlert *navigationAlert;
@property (nonatomic, retain) CPSNavigationAlertFocusButton *primaryButton;
@property (nonatomic, retain) CPSNavigationAlertProgressView *progressView;
@property (nonatomic, retain) NSArray *ringConstraints;
@property (nonatomic, retain) CPSNavigationAlertFocusButton *secondaryButton;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) CPSAbridgableNewlineLabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) CPSAbridgableNewlineLabel *titleLabel;
@property (nonatomic, readonly) bool useRightHandDriveFocusGuide;

- (void).cxx_destruct;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (bool)_layoutHeightDependsOnWidth;
- (id)_linearFocusItems;
- (id)closeButton;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusRingView;
- (bool)hasStartedAnimating;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 navigationAlert:(id)arg2 templateDelegate:(id)arg3 buttonDelegate:(id)arg4;
- (id)navigationAlert;
- (id)preferredFocusEnvironments;
- (id)primaryButton;
- (id)progressView;
- (id)ringConstraints;
- (id)secondaryButton;
- (void)setCloseButton:(id)arg1;
- (void)setFocusRingView:(id)arg1;
- (void)setHasStartedAnimating:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setRingConstraints:(id)arg1;
- (void)setSecondaryButton:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)stackView;
- (void)startAnimating;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateNavigationAlert:(id)arg1;

@end
