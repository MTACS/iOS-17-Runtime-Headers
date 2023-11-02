
@protocol CRQuad <NSCopying, NSSecureCoding>

@required

- (double)area;
- (double)aspectRatio;
- (double)baselineAngle;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (struct CGPoint { double x1; double x2; })midPoint;
- (id)rotated180;
- (struct CGSize { double x1; double x2; })size;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;

@end
