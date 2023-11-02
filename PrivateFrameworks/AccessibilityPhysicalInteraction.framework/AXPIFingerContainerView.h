
@interface AXPIFingerContainerView : UIView <_UILumaTrackingBackdropViewDelegate> {
    <AXPIFingerAppearanceDelegate> * _appearanceDelegate;
    NSArray * _fingerModels;
    NSMutableArray * _fingerViews;
    AXPIPinchChainView * _pinchChainView;
    _UILumaTrackingBackdropView * _pointerLumaMeasurementView;
    bool  _shouldAnimatePress;
    bool  _shouldSuppressFingerVisuals;
    UIView * _viewForAnimatingAlpha;
}

@property (nonatomic) <AXPIFingerAppearanceDelegate> *appearanceDelegate;
@property (nonatomic, retain) NSArray *fingerModels;
@property (nonatomic, readonly) bool isPinchChainVisible;
@property (nonatomic) bool shouldAnimatePress;
@property (nonatomic) bool shouldSuppressFingerVisuals;

- (void).cxx_destruct;
- (void)_updateFingerModelViews:(bool)arg1 startPointForAnimation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_updateLumaMeasurementViewFrame;
- (void)_updatePinchChainAppearance;
- (void)_updateSystemFiltersWithBackgroundLuminanceLevel:(unsigned long long)arg1;
- (void)animateToTapWithDuration:(double)arg1;
- (id)appearanceDelegate;
- (void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2;
- (void)cancelCircularProgressAnimation;
- (void)clearAllFingersAnimated:(bool)arg1 endPointForAnimation:(struct CGPoint { double x1; double x2; })arg2;
- (id)fingerModels;
- (unsigned long long)indexOfFingerAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPinchChainVisible;
- (void)performCircularProgressAnimationOnFingersWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForFingersAtPoints:(id)arg1;
- (void)setAppearanceDelegate:(id)arg1;
- (void)setFingerModels:(id)arg1;
- (void)setPressedState:(bool)arg1 animated:(bool)arg2;
- (void)setShouldAnimatePress:(bool)arg1;
- (void)setShouldSuppressFingerVisuals:(bool)arg1;
- (bool)shouldAnimatePress;
- (bool)shouldSuppressFingerVisuals;
- (void)showFingerModels:(id)arg1 animated:(bool)arg2 startPointForAnimation:(struct CGPoint { double x1; double x2; })arg3 shouldShowPinchChain:(bool)arg4;
- (void)updateWithFingerModel:(id)arg1 forFingerAtIndex:(unsigned long long)arg2;

@end
