
@protocol SAUILayoutHostingPrivate <SAUILayoutHosting>

@optional

- (double)concentricPaddingForProvidedView:(UIView *)arg1 fromViewProvider:(id <SAElementViewProviding>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interSensorRegionInContentView:(UIView *)arg1;
- (struct CGSize { double x1; double x2; })maximumAvailableSizeForProvidedLeadingView:(UIView *)arg1 fromViewProvider:(id <SAElementViewProviding>)arg2;
- (struct CGSize { double x1; double x2; })maximumAvailableSizeForProvidedMinimalView:(UIView *)arg1 fromViewProvider:(id <SAElementViewProviding>)arg2;
- (struct CGSize { double x1; double x2; })maximumAvailableSizeForProvidedTrailingView:(UIView *)arg1 fromViewProvider:(id <SAElementViewProviding>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sensorRegionInContentView:(UIView *)arg1 fromViewProvider:(id <SAElementViewProviding>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sensorRegionObstructingViewProvider:(id <SAElementViewProviding>)arg1 inContentView:(UIView *)arg2;
- (double)viewProviderSensorShadowOpacityFactor:(id <SAElementViewProviding>)arg1;
- (bool)viewProviderShouldMakeSensorShadowVisible:(id <SAElementViewProviding>)arg1;

@end
