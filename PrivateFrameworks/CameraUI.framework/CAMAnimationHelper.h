
@interface CAMAnimationHelper : NSObject

+ (id)_animationWithKeyPath:(id)arg1;
+ (void)animateLayer:(id)arg1 forButtonHighlighted:(bool)arg2 layoutStyle:(long long)arg3;
+ (void)animateLayer:(id)arg1 toFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromCurrentState:(bool)arg3;
+ (void)configurePowerSensitiveAnimation:(id)arg1;
+ (double)highlightScaleForLayoutStyle:(long long)arg1;
+ (id)highlightTransformAnimation;
+ (void)setLayer:(id)arg1 highlighted:(bool)arg2 inverted:(bool)arg3 animated:(bool)arg4 layoutStyle:(long long)arg5;

@end
