
@interface MTLumaDodgePillView : MTPillView <CAAnimationDelegate> {
    long long  _backgroundLuminance;
    long long  _backgroundLuminanceBias;
    <MTLumaDodgePillBackgroundLuminanceObserver> * _backgroundLumninanceObserver;
    NSMutableArray * _bounceAnimationKeys;
    unsigned int  _bounceAnimationsInFlight;
    long long  _graphicsQuality;
    _MTLumaDodgePillLowQualityEffectView * _lowQualityEffectView;
    double  _luma;
    bool  _lumaIsValid;
    MTLumaDodgePillSettings * _settings;
    long long  _style;
}

@property (nonatomic, readonly) long long backgroundLuminance;
@property (nonatomic) long long backgroundLuminanceBias;
@property (nonatomic) <MTLumaDodgePillBackgroundLuminanceObserver> *backgroundLumninanceObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long style;
@property (nonatomic, readonly) double suggestedEdgeSpacing;
@property (readonly) Class superclass;

+ (void)initialize;
+ (Class)layerClass;
+ (struct CGSize { double x1; double x2; })suggestedSizeForContentWidth:(double)arg1 withSettings:(id)arg2;
+ (bool)supportsBackgroundLuminanceObserving;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyAdditivelyWithKey:(id)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateStyle;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)backdropLayer:(id)arg1 didChangeLuma:(double)arg2;
- (long long)backgroundLuminance;
- (long long)backgroundLuminanceBias;
- (id)backgroundLumninanceObserver;
- (void)bounce;
- (void)dealloc;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 settings:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 settings:(id)arg2 graphicsQuality:(long long)arg3;
- (void)layoutSubviews;
- (void)resetBackgroundLuminanceHysteresis;
- (void)setBackgroundLuminanceBias:(long long)arg1;
- (void)setBackgroundLumninanceObserver:(id)arg1;
- (void)setStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (double)suggestedEdgeSpacing;
- (struct CGSize { double x1; double x2; })suggestedSizeForContentWidth:(double)arg1;

@end
