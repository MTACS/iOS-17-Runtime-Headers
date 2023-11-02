
@protocol VKPuckAnimatorDelegate <NSObject>

@required

- (void)projectCoordinate:(struct { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; }*)arg2;
- (struct optional<double> { union { BOOL x_1_1_1; double x_1_1_2; } x1; bool x2; })puckAnimator:(VKPuckAnimator *)arg1 getElevationWithCoordinate:(const void*)arg2;
- (void)puckAnimator:(VKPuckAnimator *)arg1 runAnimation:(VKAnimation *)arg2;
- (void)puckAnimator:(VKPuckAnimator *)arg1 updatedPosition:(const void*)arg2 course:(const void*)arg3;
- (void)puckAnimatorDidStop:(VKPuckAnimator *)arg1;

@end
