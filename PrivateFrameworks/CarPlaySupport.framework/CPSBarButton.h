
@interface CPSBarButton : CPSButton {
    NSLayoutConstraint * _backIndicatorHeightConstraint;
    UIImage * _backIndicatorImage;
    UIImageView * _backIndicatorImageView;
    UIView * _backgroundView;
    CPBarButton * _cyBarButton;
    bool  _showBackIndicator;
    bool  _usesSystemComposeGlyph;
}

@property (nonatomic, retain) NSLayoutConstraint *backIndicatorHeightConstraint;
@property (nonatomic, retain) UIImage *backIndicatorImage;
@property (nonatomic, retain) UIImageView *backIndicatorImageView;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) CPBarButton *cyBarButton;
@property (nonatomic) bool showBackIndicator;
@property (nonatomic) bool usesSystemComposeGlyph;

+ (id)buttonWithCPBarButton:(id)arg1 showBackIndicator:(bool)arg2;

- (void).cxx_destruct;
- (id)_externalUnfocusedBorderColor;
- (void)_resetAlpha;
- (void)_setupBackButtonImagesIfNeccessary;
- (bool)_showsRoundedBackground;
- (void)_updateBackIndicatorImageView;
- (void)_updateButtonImage:(id)arg1;
- (id)backIndicatorHeightConstraint;
- (id)backIndicatorImage;
- (id)backIndicatorImageView;
- (id)backgroundView;
- (id)cyBarButton;
- (void)didAddSubview:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setBackIndicatorHeightConstraint:(id)arg1;
- (void)setBackIndicatorImage:(id)arg1;
- (void)setBackIndicatorImageView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCyBarButton:(id)arg1;
- (void)setShowBackIndicator:(bool)arg1;
- (void)setUsesSystemComposeGlyph:(bool)arg1;
- (bool)showBackIndicator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)usesSystemComposeGlyph;

@end
