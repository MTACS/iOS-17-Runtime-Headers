
@interface CPSClipLoadingView : UIView {
    bool  _animationHasStarted;
    CABackdropLayer * _backdropLayer;
    UIView * _backdropView;
    UIView * _clipNameBackdropView;
    UIView * _clipNameContainerView;
    UILabel * _clipNameLabel;
    UIView * _clipNameProgressView;
    CPSVibrantLabel * _clipUnavailableLabel;
    id /* block */  _deferredActions;
    UIView * _errorContainerView;
    CAGradientLayer * _gradientLayer;
    UIView * _gradientView;
    UIImageView * _heroImageView;
    UIView * _labelContainerView;
    bool  _labelsNeedUpdate;
    bool  _loadingHasFailed;
    float  _loadingProgress;
    NSString * _name;
    UILabel * _poweredByLabel;
    bool  _poweredByThirdParty;
    long long  _progressChangeAnimationCount;
    NSString * _provider;
    id /* block */  _reloadHandler;
    CPSButton * _retryButton;
}

@property (nonatomic, readonly) UIImage *backgroundImage;
@property (nonatomic, readonly) float loadingProgress;
@property (nonatomic, copy) NSString *name;
@property (getter=isPoweredByThirdParty, nonatomic) bool poweredByThirdParty;
@property (nonatomic, copy) NSString *provider;

- (void).cxx_destruct;
- (id)_animationForTranslationY:(double)arg1;
- (id)_backdropEffectRemovalAnimationForKeyPath:(id)arg1;
- (id)_basicAnimationToDecreaseOpacity;
- (bool)_loadingIsComplete;
- (void)_reloadTapped:(id)arg1;
- (void)_revealBackgroundAndLabels;
- (void)_showCompletionAnimation:(id /* block */)arg1;
- (id)_springAnimationToDecreaseOpacity;
- (void)_startAnimationIfNeeded;
- (id)_textScaleUpSpringAnimation;
- (void)_updateConicGradientRotation;
- (void)_updateLoadingProgress;
- (id)backgroundImage;
- (void)finishLoadingWithCompletion:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPoweredByThirdParty;
- (void)layoutSubviews;
- (float)loadingProgress;
- (id)name;
- (id)provider;
- (void)setBackgroundImage:(id)arg1 animated:(bool)arg2;
- (void)setLoadingHasFailed:(bool)arg1 animated:(bool)arg2 reason:(id)arg3 reloadHandler:(id /* block */)arg4;
- (void)setLoadingProgress:(float)arg1 completion:(id /* block */)arg2;
- (void)setName:(id)arg1;
- (void)setPoweredByThirdParty:(bool)arg1;
- (void)setProvider:(id)arg1;

@end
