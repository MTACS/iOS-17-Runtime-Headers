
@interface SiriSharedUIDeviceMotionEffectView : UIView {
    long long  _cachedInterfaceOrientation;
    CADisplayLink * _displayLink;
    UIImageView * _effectImageView;
    bool  _forcefullyUpdateImageViewFrame;
    double  _initialOffsetRadians;
    CMMotionManager * _motionManager;
    double  _rotationIncrementalRateRadians;
    bool  _shouldUpdateOffsetRadians;
}

- (void).cxx_destruct;
- (void)_cleanUpIfNeeded;
- (void)_configureDeviceMotionIfNeeded;
- (long long)_currentInterfaceOrientation;
- (id)_currentWindowScene;
- (void)_displayLinkFired:(id)arg1;
- (void)_motionManagerDidReceiveMotion:(id)arg1;
- (bool)_supportsContentViewTransforms;
- (bool)_supportsDeviceMotion;
- (void)_updateEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (bool)isViewHighContrast;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMaskingForView:(id)arg1;
- (long long)viewAppearanceStyle;
- (void)viewWillBeUpdated;

@end
