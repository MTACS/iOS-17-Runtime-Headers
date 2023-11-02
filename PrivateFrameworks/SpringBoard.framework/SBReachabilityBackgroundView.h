
@interface SBReachabilityBackgroundView : UIView <SBHomeGrabberDelegate> {
    SBWallpaperEffectView * _bottomWallpaperEffectView;
    CAShapeLayer * _chevronLayer;
    UIViewFloatAnimatableProperty * _chevronShapeAnimatableProperty;
    double  _containerViewYOffset;
    UIView * _hitTestBlockerView;
    double  _homeGrabberAdditionalOffset;
    SBHomeGrabberView * _homeGrabberView;
    SBWallpaperEffectView * _topWallpaperEffectView;
    UIView * _wallpaperContainerView;
    long long  _wallpaperVariant;
}

@property (nonatomic) double chevronAlpha;
@property (nonatomic) double containerViewYOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double homeGrabberAdditionalOffset;
@property (nonatomic) double homeGrabberAlpha;
@property (readonly) Class superclass;
@property (nonatomic) long long wallpaperVariant;

- (void).cxx_destruct;
- (double)_displayCornerRadius;
- (id)_newWallpaperEffectViewForVariant:(long long)arg1;
- (void)_setupChevron;
- (void)_setupCornerContentsImageForWallpaperEffectView:(id)arg1;
- (void)_setupHitTestBlockerView;
- (void)_setupHomeGrabberView;
- (void)_updateChevronPathForUpFraction:(double)arg1;
- (void)_updateWallpaperEffectViewAnimated:(bool)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (double)chevronAlpha;
- (double)containerViewYOffset;
- (double)homeGrabberAdditionalOffset;
- (double)homeGrabberAlpha;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperVariant:(long long)arg2;
- (void)layoutSubviews;
- (void)setChevronAlpha:(double)arg1;
- (void)setContainerViewYOffset:(double)arg1;
- (void)setHomeGrabberAdditionalOffset:(double)arg1;
- (void)setHomeGrabberAlpha:(double)arg1;
- (void)setWallpaperVariant:(long long)arg1;
- (bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (long long)wallpaperVariant;

@end
