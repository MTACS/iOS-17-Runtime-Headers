
@interface _UIBarCustomizationChicletAnchorView : UIView {
    _UIBarCustomizationChiclet * _chiclet;
    double  _contentPadding;
    bool  _debugUIEnabled;
    bool  _jiggling;
    UIView * _positionAdaptorView;
    long long  _state;
}

@property (nonatomic, retain) _UIBarCustomizationChiclet *chiclet;
@property (nonatomic) double contentPadding;
@property (nonatomic) bool debugUIEnabled;
@property (nonatomic) bool jiggling;
@property (nonatomic, retain) UIView *positionAdaptorView;
@property (nonatomic) long long state;

+ (id)_jitterRotationAnimationWithAmount:(double)arg1;
+ (id)_jitterRotationAnimationWithStrength:(double)arg1;
+ (id)_jitterXTranslationAnimationWithAmount:(double)arg1;
+ (id)_jitterXTranslationAnimationWithStrength:(double)arg1;
+ (id)_jitterYTranslationAnimationWithAmount:(double)arg1;
+ (id)_jitterYTranslationAnimationWithStrength:(double)arg1;

- (void).cxx_destruct;
- (id)chiclet;
- (double)contentPadding;
- (bool)debugUIEnabled;
- (id)description;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (bool)isUserInteractionEnabled;
- (bool)jiggling;
- (void)layoutSubviews;
- (id)positionAdaptorView;
- (void)setChiclet:(id)arg1;
- (void)setContentPadding:(double)arg1;
- (void)setDebugUIEnabled:(bool)arg1;
- (void)setJiggling:(bool)arg1;
- (void)setPositionAdaptorView:(id)arg1;
- (void)setState:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)state;

@end
