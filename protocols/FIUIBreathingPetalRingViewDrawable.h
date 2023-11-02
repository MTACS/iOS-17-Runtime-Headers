
@protocol FIUIBreathingPetalRingViewDrawable <NSObject>

@required

- (void)importDataFromPetalRing:(id <FIUIBreathingPetalRingViewDrawable>)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 numberOfPetals:(long long)arg2 showBlurTrails:(bool)arg3 device:(id <MTLDevice>)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 petalColor:(long long)arg2 numberOfPetals:(long long)arg3 showBlurTrails:(bool)arg4 device:(id <MTLDevice>)arg5;
- (long long)numberOfPetals;
- (long long)numberOfVisiblePetals;
- (<FIUIDeepBreathingPetalRingViewDelegate> *)petalRingDelegate;
- (float)preferredFramesPerSecond;
- (struct CGPoint { double x1; double x2; })ringCenter;
- (float)ringRadius;
- (void)setBlurTrailAtIndex:(long long)arg1 center:(struct CGPoint { double x1; double x2; })arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (void)setGradientRotationAngle:(float)arg1;
- (void)setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(bool)arg2;
- (void)setPetalAtIndex:(long long)arg1 center:(struct CGPoint { double x1; double x2; })arg2 radius:(float)arg3 alpha:(float)arg4;
- (void)setPetalRingDelegate:(id <FIUIDeepBreathingPetalRingViewDelegate>)arg1;
- (void)setPreferredFramesPerSecond:(float)arg1;
- (void)setRingCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRingRadius:(float)arg1;
- (bool)showBlurTrails;
- (UIView *)view;

@end
