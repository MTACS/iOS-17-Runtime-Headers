
@protocol _UIFluidSliderDirectDriving <_UIFluidSliderDriving>

@required

- (<_UIFluidSliderDirectDrivingDelegate> *)delegate;
- (UIPanGestureRecognizer *)panGestureRecognizer;
- (void)setDelegate:(id <_UIFluidSliderDirectDrivingDelegate>)arg1;

@end
