
@protocol _UIVectorTextLayoutGlyph <NSObject>

@required

- (unsigned short)glyph;
- (UIBezierPath *)path;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })pathTransform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;

@end
