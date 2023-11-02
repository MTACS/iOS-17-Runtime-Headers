
@interface VTUIProximityTryAgainView : VTUIProximityView {
    VTUIProximityContainerView * _containerView;
    UIButton * _dismissButton;
    UILabel * _titleLabel;
    NSArray * _viewConstraints;
    VTPreferences * _vtPrefs;
    VTUIStyle * _vtStyle;
}

@property (nonatomic, retain) VTUIProximityContainerView *containerView;
@property (nonatomic, readonly) UIButton *dismissButton;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSArray *viewConstraints;
@property (nonatomic, retain) VTPreferences *vtPrefs;
@property (nonatomic, retain) VTUIStyle *vtStyle;

- (void).cxx_destruct;
- (void)_setupConstraintsToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupViews;
- (id)containerView;
- (id)dismissButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContainerView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setViewConstraints:(id)arg1;
- (void)setVtPrefs:(id)arg1;
- (void)setVtStyle:(id)arg1;
- (id)titleLabel;
- (id)viewConstraints;
- (id)vtPrefs;
- (id)vtStyle;

@end
