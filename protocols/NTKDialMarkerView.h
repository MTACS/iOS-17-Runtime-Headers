
@protocol NTKDialMarkerView <NSObject>

@required

- (void)addToParentView:(UIView *)arg1;
- (double)alpha;
- (struct CGPoint { double x1; double x2; })position;
- (void)removeFromParent;
- (void)setAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setAlpha:(double)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;

@end
