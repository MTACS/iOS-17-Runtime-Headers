
@protocol _UIFluidSliderDrivable <NSObject>

@required

- (double)currentTrackLength;
- (void)fluidSliderDriver:(id <_UIFluidSliderDriving>)arg1 didGenerateUpdate:(struct { double x1; double x2; bool x3; long long x4; })arg2;
- (bool)isLocked;
- (double)presentationValue;
- (void)setValue:(double)arg1;
- (unsigned long long)stepCount;
- (double)value;

@end
