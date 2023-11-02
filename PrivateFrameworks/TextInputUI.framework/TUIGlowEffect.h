
@interface TUIGlowEffect : NSObject <CAAnimationDelegate> {
    NSMutableDictionary * _animationStates;
    double  _blurRadius;
    CABasicAnimation * _colorAnimation;
    CALayer * _layer;
    double  _minimumRadius;
    double  _nonPulseRadius;
    struct CAFrameRateRange { 
        float minimum; 
        float maximum; 
        float preferred; 
    }  _preferredFrameRateRange;
    CABasicAnimation * _pulseAnimation;
    double  _pulseInterval;
    double  _pulseRadius;
    bool  _pulsing;
    CABasicAnimation * _radiusAnimation;
    struct CGColor { } * _tintColor;
}

@property (nonatomic) double blurRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic) double minimumRadius;
@property (nonatomic) double nonPulseRadius;
@property (nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } preferredFrameRateRange;
@property (nonatomic) double pulseInterval;
@property (nonatomic) double pulseRadius;
@property (nonatomic) bool pulsing;
@property (readonly) Class superclass;
@property (nonatomic) struct CGColor { }*tintColor;

+ (bool)adjustVisibilityForDarkMode:(bool)arg1 tintColor:(struct CGColor { }*)arg2 alpha:(double)arg3 outTintColor:(struct CGColor {}**)arg4 outAlpha:(double*)arg5;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (double)blurRadius;
- (void)dealloc;
- (id)estimateAnimationValueForKeyPath:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)layer;
- (double)minimumRadius;
- (double)nonPulseRadius;
- (struct CAFrameRateRange { float x1; float x2; float x3; })preferredFrameRateRange;
- (double)pulseInterval;
- (double)pulseRadius;
- (bool)pulsing;
- (void)recordAnimation:(id)arg1 duration:(double)arg2 fromValue:(id)arg3 toValue:(id)arg4 keyPath:(id)arg5;
- (void)setBlurRadius:(double)arg1;
- (void)setMinimumRadius:(double)arg1;
- (void)setNonPulseRadius:(double)arg1;
- (void)setNonPulseRadius:(double)arg1 animated:(bool)arg2 duration:(double)arg3;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)setPulseInterval:(double)arg1;
- (void)setPulseRadius:(double)arg1;
- (void)setPulsing:(bool)arg1;
- (void)setTintColor:(struct CGColor { }*)arg1;
- (void)setTintColor:(struct CGColor { }*)arg1 animated:(bool)arg2 duration:(double)arg3;
- (void)setTintColor:(struct CGColor { }*)arg1 animated:(bool)arg2 duration:(double)arg3 autoreverses:(bool)arg4 repeatCount:(double)arg5;
- (void)setupFilters;
- (struct CGColor { }*)tintColor;
- (void)updatePropertyForKeyPath:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 animated:(bool)arg4 duration:(double)arg5 autoreverses:(bool)arg6 repeatCount:(double)arg7;
- (void)updatePulseAnimationRadius;

@end
