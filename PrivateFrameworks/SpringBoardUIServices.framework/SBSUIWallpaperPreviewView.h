
@interface SBSUIWallpaperPreviewView : UIView <PBUIIrisWallpaperPlayerDelegate> {
    UIButton * _cancelButton;
    _SBUIWallpaperInstructionView * _cropInstructionView;
    UIViewPropertyAnimator * _cropInstructionsAnimator;
    SBFLockScreenDateView * _dateView;
    <SBSUIWallpaperPreviewViewDelegate> * _delegate;
    UIViewPropertyAnimator * _effectInstructionsAnimator;
    UILabel * _effectStateLabel;
    UIViewPropertyAnimator * _fadeOutInstructionsAnimator;
    UIView * _gradientView;
    UIButton * _irisButton;
    _UILegibilityLabel * _irisInstructionsLabel1;
    _UILegibilityLabel * _irisInstructionsLabel2;
    bool  _irisPossible;
    UIButton * _parallaxButton;
    bool  _parallaxPossible;
    UIButton * _setButton;
    PBUIWallpaperView * _wallpaperView;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) SBFLockScreenDateView *dateView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSUIWallpaperPreviewViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIButton *irisButton;
@property (nonatomic, retain) UIButton *parallaxButton;
@property (nonatomic, retain) UIButton *setButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUIWallpaperView *wallpaperView;

- (void).cxx_destruct;
- (void)_fadeOutInstructionsWithDelay:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_layoutCancelButton;
- (void)_layoutDateView;
- (void)_layoutGradientView;
- (void)_layoutIrisButton;
- (void)_layoutIrisInstructionLabels;
- (void)_layoutParallaxButton;
- (void)_layoutSetButton;
- (void)_layoutStackedButtons;
- (void)_layoutWallpaperView;
- (id)_makeButtonWithVisualEffectBlur;
- (double)_segmentedControlInset;
- (void)_userDidTapOnCancelButton:(id)arg1;
- (void)_userDidTapOnIrisButton:(id)arg1;
- (void)_userDidTapOnParallaxButton:(id)arg1;
- (void)_userDidTapOnSetButton:(id)arg1;
- (id)cancelButton;
- (id)dateView;
- (void)dealloc;
- (id)delegate;
- (void)displayInstructionsForEffect:(unsigned long long)arg1 enabled:(bool)arg2 animated:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperView:(id)arg2 disableParallax:(bool)arg3;
- (id)irisButton;
- (void)irisWallpaperPlayerPlaybackStateDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)parallaxButton;
- (id)setButton;
- (void)setCancelButton:(id)arg1;
- (void)setDateView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIrisButton:(id)arg1;
- (void)setParallaxButton:(id)arg1;
- (void)setSetButton:(id)arg1;
- (void)setWallpaperView:(id)arg1;
- (bool)shouldEnableParallax;
- (void)updateForChangedSettings:(id)arg1;
- (id)wallpaperView;

@end
