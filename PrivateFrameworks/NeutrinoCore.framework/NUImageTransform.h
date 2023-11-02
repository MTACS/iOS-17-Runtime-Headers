
@interface NUImageTransform : NUGeometryTransform

- (id)description;
- (unsigned long long)hash;
- (id)inverseTransform;
- (bool)isEqual:(id)arg1;
- (bool)isIdentityImageTransform;
- (id)transformByRotateX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)transformByRotateZ:(double)arg1;
- (id)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (id)transformByTranslateX:(double)arg1 translateY:(double)arg2;
- (struct CGPoint { double x1; double x2; })transformPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
