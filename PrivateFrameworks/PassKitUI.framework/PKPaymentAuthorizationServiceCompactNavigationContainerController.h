
@interface PKPaymentAuthorizationServiceCompactNavigationContainerController : PKCompactNavigationContainerController {
    bool  _attemptedSecondaryViewCreation;
    LAUIHorizontalArrowView * _cameraArrowView;
    bool  _cameraOrientationSupported;
    LAUIPhysicalButtonView * _physicalButtonView;
    unsigned char  _rotationCount;
    bool  _showCameraIndicator;
    bool  _showPhysicalButtonIndicator;
}

@property (nonatomic, readonly) LAUIPhysicalButtonView *physicalButtonView;
@property (nonatomic) bool showCameraIndicator;
@property (nonatomic) bool showPhysicalButtonIndicator;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_createSecondaryViewsIfNecessary;
- (bool)_effectiveShowCameraIndicator;
- (bool)_effectiveShowPhysicalButtonIndicator;
- (int)_preferredStatusBarVisibility;
- (void)loadView;
- (id)physicalButtonView;
- (void)setShowCameraIndicator:(bool)arg1;
- (void)setShowPhysicalButtonIndicator:(bool)arg1;
- (bool)showCameraIndicator;
- (bool)showPhysicalButtonIndicator;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
