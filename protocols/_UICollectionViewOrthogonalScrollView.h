
@protocol _UICollectionViewOrthogonalScrollView <NSObject>

@required

- (struct CGPoint { double x1; double x2; })_panGestureLocationInView:(UIView *)arg1;
- (struct CGPoint { double x1; double x2; })_panGestureVelocityInView:(UIView *)arg1;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (bool)isDecelerating;
- (bool)isDragging;
- (bool)isTracking;

@end
