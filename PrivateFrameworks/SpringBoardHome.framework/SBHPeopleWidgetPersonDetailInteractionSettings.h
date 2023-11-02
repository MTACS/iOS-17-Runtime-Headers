
@interface SBHPeopleWidgetPersonDetailInteractionSettings : PTSettings {
    double  _cardCornerRadius;
    double  _cardHeightLandscape;
    double  _cardHeightPortrait;
    double  _cardStyleDarkeningTintAlpha;
    double  _cardStyleHomeScreenAlpha;
    double  _cardStyleHomeScreenScale;
    double  _cardWidth;
    SBFFluidBehaviorSettings * _fadeOutAnimationSettings;
    double  _fractionBetweenSourceAndContainerX;
    double  _fractionBetweenSourceAndContainerY;
    double  _fullScreenDarkeningTintAlpha;
    double  _fullScreenHomeScreenAlpha;
    double  _fullScreenHomeScreenScale;
    double  _percentMargin;
    bool  _usesCardStyle;
    SBFFluidBehaviorSettings * _zoomAnimationSettings;
}

@property (nonatomic) double cardCornerRadius;
@property (nonatomic) double cardHeightLandscape;
@property (nonatomic) double cardHeightPortrait;
@property (nonatomic) double cardStyleDarkeningTintAlpha;
@property (nonatomic) double cardStyleHomeScreenAlpha;
@property (nonatomic) double cardStyleHomeScreenScale;
@property (nonatomic) double cardWidth;
@property (nonatomic, retain) SBFFluidBehaviorSettings *fadeOutAnimationSettings;
@property (nonatomic) double fractionBetweenSourceAndContainerX;
@property (nonatomic) double fractionBetweenSourceAndContainerY;
@property (nonatomic) double fullScreenDarkeningTintAlpha;
@property (nonatomic) double fullScreenHomeScreenAlpha;
@property (nonatomic) double fullScreenHomeScreenScale;
@property (nonatomic) double percentMargin;
@property (nonatomic) bool usesCardStyle;
@property (nonatomic, retain) SBFFluidBehaviorSettings *zoomAnimationSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)cardCornerRadius;
- (double)cardHeightLandscape;
- (double)cardHeightPortrait;
- (double)cardStyleDarkeningTintAlpha;
- (double)cardStyleHomeScreenAlpha;
- (double)cardStyleHomeScreenScale;
- (double)cardWidth;
- (id)fadeOutAnimationSettings;
- (double)fractionBetweenSourceAndContainerX;
- (double)fractionBetweenSourceAndContainerY;
- (double)fullScreenDarkeningTintAlpha;
- (double)fullScreenHomeScreenAlpha;
- (double)fullScreenHomeScreenScale;
- (double)percentMargin;
- (void)setCardCornerRadius:(double)arg1;
- (void)setCardHeightLandscape:(double)arg1;
- (void)setCardHeightPortrait:(double)arg1;
- (void)setCardStyleDarkeningTintAlpha:(double)arg1;
- (void)setCardStyleHomeScreenAlpha:(double)arg1;
- (void)setCardStyleHomeScreenScale:(double)arg1;
- (void)setCardWidth:(double)arg1;
- (void)setDefaultValues;
- (void)setFadeOutAnimationSettings:(id)arg1;
- (void)setFractionBetweenSourceAndContainerX:(double)arg1;
- (void)setFractionBetweenSourceAndContainerY:(double)arg1;
- (void)setFullScreenDarkeningTintAlpha:(double)arg1;
- (void)setFullScreenHomeScreenAlpha:(double)arg1;
- (void)setFullScreenHomeScreenScale:(double)arg1;
- (void)setPercentMargin:(double)arg1;
- (void)setUsesCardStyle:(bool)arg1;
- (void)setZoomAnimationSettings:(id)arg1;
- (bool)usesCardStyle;
- (id)zoomAnimationSettings;

@end
