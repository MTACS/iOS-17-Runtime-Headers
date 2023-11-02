
@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject {
    long long  _actionLayoutAxis;
    double  _focusedSizeIncrease;
    UIView * _highlightTransformTargetView;
    bool  _highlighted;
    UIMotionEffectGroup * _installedHighlightedActionMotionEffectsGroup;
    bool  _pressed;
}

@property (nonatomic) long long actionLayoutAxis;
@property (nonatomic) double focusedSizeIncrease;
@property (nonatomic) UIView *highlightTransformTargetView;
@property (nonatomic) bool highlighted;
@property (nonatomic) bool pressed;

- (void).cxx_destruct;
- (void)_applyHighlightTransform;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_enlargedTransformForSize:(struct CGSize { double x1; double x2; })arg1 pressed:(bool)arg2;
- (void)_insertMotionEffects;
- (id)_newMotionEffectsGroupForHighlightedAction;
- (void)_removeMotionEffects;
- (long long)actionLayoutAxis;
- (double)focusedSizeIncrease;
- (id)highlightTransformTargetView;
- (bool)highlighted;
- (id)initWithHighlightTransformTargetView:(id)arg1;
- (id)motionEffectsOnAxis:(long long)arg1;
- (bool)pressed;
- (void)setActionLayoutAxis:(long long)arg1;
- (void)setFocusedSizeIncrease:(double)arg1;
- (void)setHighlightTransformTargetView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPressed:(bool)arg1;

@end
