
@protocol _UISwipeViewManipulator <NSObject>

@required

- (void)moveSwipedView:(UIView *)arg1 atIndexPath:(NSIndexPath *)arg2 withSwipeInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg3 animator:(UIViewPropertyAnimator *)arg4;

@optional

- (void)removeAnimationsFromSwipedView:(UIView *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })restingFrameForSwipedView:(UIView *)arg1 atIndexPath:(NSIndexPath *)arg2;

@end
