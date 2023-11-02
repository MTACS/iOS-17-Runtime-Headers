
@interface SBIsolatedSceneOrientationFollowingContainerView : UIView <SBDeviceApplicationSceneOverlayView> {
    long long  _hostOrientation;
    NSHashTable * _observers;
    bool  _shouldLayoutOverlayImmediatelyForContainerGeometryChange;
    SBIsolatedSceneOrientationFollowingWrapperViewController * _wrapperViewController;
}

@property (nonatomic) long long hostOrientation;
@property (nonatomic, readonly) bool needsCounterRotation;
@property (nonatomic) bool shouldLayoutOverlayImmediatelyForContainerGeometryChange;
@property (nonatomic, readonly) SBIsolatedSceneOrientationFollowingWrapperViewController *wrapperViewController;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (long long)hostOrientation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wrapperViewController:(id)arg2;
- (bool)needsCounterRotation;
- (void)notifyObserversViewRotatedToOrientation:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHostOrientation:(long long)arg1;
- (void)setShouldLayoutOverlayImmediatelyForContainerGeometryChange:(bool)arg1;
- (bool)shouldLayoutOverlayImmediatelyForContainerGeometryChange;
- (id)wrapperViewController;

@end
