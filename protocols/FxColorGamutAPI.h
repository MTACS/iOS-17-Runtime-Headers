
@protocol FxColorGamutAPI

@required

- (FxMatrix44 *)colorMatrixFromDesiredRGBToYCbCrAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (FxMatrix44 *)colorMatrixFromYCbCrToDesiredRGBAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (unsigned long long)colorPrimaries;

@end
