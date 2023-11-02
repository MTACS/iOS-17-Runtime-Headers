
@interface PKDynamicLayerView : UIView {
    bool  _automaticallyLoadContent;
    UIImageView * _backgroundParallaxCrossDissolveView;
    PKDynamicContentView * _backgroundParallaxView;
    CAGradientLayer * _backgroundRadialGradientLayer;
    _UIParallaxMotionEffect * _bottomEffect;
    PKDynamicLayerCrossDissolveConfiguration * _crossDissolveConfiguration;
    CALayer * _dimmingLayer;
    PKDynamicLayerConfiguration * _dynamicLayerConfiguration;
    bool  _effectiveMotionEnabled;
    UIImageView * _foregroundParallaxCrossDissolveView;
    PKDynamicContentView * _foregroundParallaxView;
    CAGradientLayer * _foregroundRadialGradientLayer;
    bool  _invalidated;
    bool  _loaded;
    bool  _motionEnabled;
    PKDynamicContentView * _neutralView;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _parallaxOffset;
    PKPass * _pass;
    bool  _paused;
    UIMotionEffectGroup * _radialMaskEffects;
    UIImageView * _staticFallbackView;
    PKDynamicContentView * _staticOverlayView;
    _UIParallaxMotionEffect * _topEffect;
    PKDynamicLayerTransactionEffectConfiguration * _transactionEffectConfiguration;
    UIImage * _transactionEffectEmitterImage;
    CAEmitterLayer * _transactionEffectLayer;
    NSData * _transactionEffectShapeData;
}

@property (nonatomic) bool automaticallyLoadContent;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (getter=isMotionEnabled, nonatomic) bool motionEnabled;
@property (getter=isPaused, nonatomic) bool paused;

- (void).cxx_destruct;
- (void)_addParallaxAndMotionEffects;
- (void)_addRadialMaskEffectsToView:(id)arg1;
- (void)_configureDynamicViewsWithImageSet:(id)arg1;
- (id)_configureMotionEffectGroupForCrossDissolveConfiguration:(id)arg1;
- (void)_configureViews;
- (id)_dimmingLayerAnimationWithDuration:(double)arg1;
- (void)_removeParallaxMotionEffect;
- (void)_updateVisibility;
- (bool)automaticallyLoadContent;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pass:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pass:(id)arg2 automaticallyLoadContent:(bool)arg3;
- (void)invalidate;
- (bool)isLoaded;
- (bool)isMotionEnabled;
- (bool)isPaused;
- (void)layoutSubviews;
- (void)loadContent;
- (void)runTransactionEffect;
- (void)setAutomaticallyLoadContent:(bool)arg1;
- (void)setMotionEnabled:(bool)arg1;
- (void)setPaused:(bool)arg1;

@end
