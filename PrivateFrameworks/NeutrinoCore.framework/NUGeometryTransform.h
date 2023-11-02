
@interface NUGeometryTransform : NSObject

- (id)description;
- (unsigned long long)hash;
- (id)inverseTransform;
- (bool)isEqual:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transformMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct CGPoint { double x1; double x2; })transformPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transformRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })transformTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
