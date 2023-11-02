
@protocol _UIFluidSliderDriving <NSObject>

@required

- (void)cancel;
- (<_UIFluidSliderDrivable> *)drivable;
- (bool)enabled;
- (NSString *)name;
- (void)setDrivable:(id <_UIFluidSliderDrivable>)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setStretchAmount:(double)arg1;
- (void)setTrackAxis:(unsigned long long)arg1;
- (void)setView:(UIView *)arg1;
- (void)stop;
- (double)stretchAmount;
- (unsigned long long)trackAxis;
- (UIView *)view;

@end
