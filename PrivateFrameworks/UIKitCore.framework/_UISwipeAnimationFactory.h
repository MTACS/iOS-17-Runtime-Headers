
@interface _UISwipeAnimationFactory : NSObject

+ (id)_animatorForDuration:(double)arg1 initialVelocity:(struct CGVector { double x1; double x2; })arg2 shouldLayoutSubviews:(bool)arg3;
+ (id)_animatorForStiffnessFactor:(double)arg1 initialVelocity:(struct CGVector { double x1; double x2; })arg2;
+ (id)animatorForCollapse;
+ (id)animatorForCollapseWithAdditivelyAnimatedViews:(id)arg1;
+ (id)animatorForGenericUpdates;
+ (id)animatorForMoveWithOccurrence:(id)arg1;
+ (id)animatorForScanlineCollapse;
+ (id)animatorForTentativeWithOccurrence:(id)arg1;
+ (id)animatorForTentativeWithOccurrence:(id)arg1 additivelyAnimatedViews:(id)arg2;

@end
