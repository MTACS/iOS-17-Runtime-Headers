
@interface VTUIProximityEnrollmentSuccessView : VTUIProximityView {
    VTUIProximityContainerView * _containerView;
    VTUIButton * _continueButton;
    UIButton * _dismissButton;
    NSString * _languageCode;
    UIImageView * _orbImage;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    NSArray * _viewConstraints;
    VTUIStyle * _vtStyle;
}

@property (nonatomic, readonly) VTUIButton *continueButton;
@property (nonatomic, retain) UIButton *dismissButton;
@property (nonatomic, retain) NSArray *viewConstraints;

- (void).cxx_destruct;
- (void)_setupConstraintsToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupContent;
- (void)_setupPhoneLandscapeConstraints;
- (void)_setupPortraitConstraints;
- (id)continueButton;
- (id)dismissButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDismissButton:(id)arg1;
- (void)setViewConstraints:(id)arg1;
- (id)viewConstraints;

@end
