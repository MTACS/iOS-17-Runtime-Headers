
@protocol TSDRealignablePathSource

@required

- (void)adjustGeometryForAlignToOrigin:(TSDMutableInfoGeometry *)arg1;
- (void)alignToOrigin;
- (struct CGPath { }*)pathWithoutFlips;

@end
