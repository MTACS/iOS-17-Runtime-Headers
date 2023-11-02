
@interface NTKAltitudeColorCurve : NTKCubicColorCurve

- (id)colorForAltitude:(struct { float x1; float x2; float x3; })arg1;
- (void)rgbfColorForAltitude:(struct { float x1; float x2; float x3; })arg1;

@end
