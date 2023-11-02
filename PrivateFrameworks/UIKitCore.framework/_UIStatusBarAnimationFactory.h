
@interface _UIStatusBarAnimationFactory : NSObject

+ (id)fadeAnimationWithDuration:(double)arg1;
+ (id)fadeAnimationWithDuration:(double)arg1 scale:(double)arg2;
+ (id)fadeAnimationWithDuration:(double)arg1 scale:(double)arg2 offset:(struct UIOffset { double x1; double x2; })arg3;
+ (id)noAnimation;
+ (id)pulseAnimationWithDuration:(double)arg1 scale:(double)arg2;

@end
