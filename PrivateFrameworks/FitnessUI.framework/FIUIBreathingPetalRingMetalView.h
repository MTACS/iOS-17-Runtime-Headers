
@interface FIUIBreathingPetalRingMetalView : UIView <FIUIBreathingPetalRingViewDrawable> {
    MTKView * _mtkView;
    long long  _numberOfPetals;
    <FIUIDeepBreathingPetalRingViewDelegate> * _petalRingDelegate;
    FIUIBreathingPetalRingMetalRenderer * _renderer;
    bool  _showBlurTrails;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTKView *mtkView;
@property (nonatomic, readonly) long long numberOfPetals;
@property (nonatomic, readonly) long long numberOfVisiblePetals;
@property (nonatomic) <FIUIDeepBreathingPetalRingViewDelegate> *petalRingDelegate;
@property (nonatomic) float preferredFramesPerSecond;
@property (nonatomic, retain) FIUIBreathingPetalRingMetalRenderer *renderer;
@property (nonatomic) struct CGPoint { double x1; double x2; } ringCenter;
@property (nonatomic) float ringRadius;
@property (nonatomic, readonly) bool showBlurTrails;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)importDataFromPetalRing:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 numberOfPetals:(long long)arg2 showBlurTrails:(bool)arg3 device:(id)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 petalColor:(long long)arg2 numberOfPetals:(long long)arg3 showBlurTrails:(bool)arg4 device:(id)arg5;
- (void)layoutSubviews;
- (id)mtkView;
- (long long)numberOfPetals;
- (long long)numberOfVisiblePetals;
- (id)petalRingDelegate;
- (float)preferredFramesPerSecond;
- (id)renderer;
- (struct CGPoint { double x1; double x2; })ringCenter;
- (float)ringRadius;
- (void)setBlurTrailAtIndex:(long long)arg1 center:(struct CGPoint { double x1; double x2; })arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (void)setGradientRotationAngle:(float)arg1;
- (void)setMtkView:(id)arg1;
- (void)setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(bool)arg2;
- (void)setPetalAtIndex:(long long)arg1 center:(struct CGPoint { double x1; double x2; })arg2 radius:(float)arg3 alpha:(float)arg4;
- (void)setPetalRingDelegate:(id)arg1;
- (void)setPreferredFramesPerSecond:(float)arg1;
- (void)setRenderer:(id)arg1;
- (void)setRingCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRingRadius:(float)arg1;
- (bool)showBlurTrails;
- (id)view;

@end
