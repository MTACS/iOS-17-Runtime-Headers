
@interface UIStatusBarStyleAttributes : NSObject <NSCopying> {
    UIStatusBarForegroundStyleAttributes * _foregroundStyle;
    bool  _pulsingAnimationEnabled;
    UIStatusBarStyleRequest * _request;
}

@property (nonatomic) double foregroundAlpha;
@property (getter=isPulsingAnimationEnabled, nonatomic) bool pulsingAnimationEnabled;

- (void).cxx_destruct;
- (id)backgroundColorWithTintColor:(id)arg1;
- (id)backgroundImageName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)foregroundAlpha;
- (id)foregroundStyle;
- (double)glowAnimationDuration;
- (double)heightForMetrics:(long long)arg1;
- (double)heightForOrientation:(long long)arg1;
- (long long)idiom;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (bool)isDoubleHeight;
- (bool)isLockScreen;
- (bool)isPulsingAnimationEnabled;
- (bool)isTranslucent;
- (bool)isTransparent;
- (long long)legibilityStyle;
- (id)newForegroundStyleWithHeight:(double)arg1;
- (void)setForegroundAlpha:(double)arg1;
- (void)setPulsingAnimationEnabled:(bool)arg1;
- (bool)shouldProduceReturnEvent;
- (bool)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2;
- (bool)shouldUseVisualAltitude;
- (long long)style;
- (bool)supportsRasterization;
- (long long)tapButtonType;
- (bool)usesVerticalLayout;

@end
