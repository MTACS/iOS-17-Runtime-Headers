
@interface VTUIVoiceSelectionProximityView : VTUIProximityView <VTUIVoiceSelectionContaining> {
    bool  _allowsRandomVoiceSelection;
    UIButton * _chooseRandomVoiceButton;
    NSArray * _constraints;
    VTUIProximityContainerView * _containerView;
    UIView * _contentView;
    UIButton * _continueButton;
    UIButton * _dismissButton;
    UIView * _footerView;
    bool  _isHidingCompactBackgroundCardView;
    UIImageView * _orbImage;
    long long  _selectionStyle;
    UILabel * _titleLabel;
    VTUIStyle * _vtStyle;
}

@property (nonatomic, retain) UIButton *chooseRandomVoiceButton;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) UIButton *continueButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupConstraintsToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupContentWithTitle:(id)arg1;
- (id)chooseRandomVoiceButton;
- (id)constraints;
- (id)continueButton;
- (id)dismissButton;
- (id)initWithTitle:(id)arg1 allowsRandomVoiceSelection:(bool)arg2 forSelectionStyle:(long long)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setChooseRandomVoiceButton:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setDismissButton:(id)arg1;
- (void)setShouldHideCompactBackgroundCardView:(bool)arg1;
- (id)viewConstraints;

@end
