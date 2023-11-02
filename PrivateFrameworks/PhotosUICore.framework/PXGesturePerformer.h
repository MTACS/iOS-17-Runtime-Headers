
@interface PXGesturePerformer : NSObject

+ (long long)_UIAccessibilityDirection:(long long)arg1;
+ (double)_amplitudeFactorBySpeed:(unsigned long long)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInScreenSpaceForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
+ (void)_handleResult:(id /* block */)arg1 success:(bool)arg2 error:(id)arg3;
+ (long long)_oppositeDirection:(long long)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectInWindowCoordinateSpaceFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
+ (long long)_rptDirection:(long long)arg1;
+ (id)_rptPlatformScrollViewFromPXScrollView:(id)arg1;
+ (id)_rptPlatformViewFromPXView:(id)arg1;
+ (id)_swipeParametersForScrollView:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 count:(long long)arg3 speed:(unsigned long long)arg4 direction:(long long)arg5;
+ (id)_swipeSpeedFactor:(unsigned long long)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewFrameInScreenSpace:(id)arg1;
+ (bool)isAvailable;
+ (void)performOscillatingInScrollView:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 speed:(unsigned long long)arg3 direction:(long long)arg4 completionHandler:(id /* block */)arg5;
+ (void)performSwipingInScrollView:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 count:(long long)arg3 speed:(unsigned long long)arg4 direction:(long long)arg5 roundTrip:(bool)arg6 completionHandler:(id /* block */)arg7;

@end
