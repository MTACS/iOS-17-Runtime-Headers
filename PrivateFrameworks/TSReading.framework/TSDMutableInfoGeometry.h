
@interface TSDMutableInfoGeometry : TSDInfoGeometry

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAngle:(double)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHeightValid:(bool)arg1;
- (void)setHorizontalFlip:(bool)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTransformedBoundsOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVerticalFlip:(bool)arg1;
- (void)setWidthValid:(bool)arg1;

@end
