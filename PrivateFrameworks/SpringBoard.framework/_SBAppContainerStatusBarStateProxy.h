
@interface _SBAppContainerStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy {
    SBAppContainerViewController * _appVCBackReference;
}

@property (nonatomic) SBAppContainerViewController *appVCBackReference;

- (void).cxx_destruct;
- (long long)_fallbackInterfaceOrientation;
- (double)_statusBarAlpha;
- (bool)_statusBarAppearsOutsideOfAJailedApp;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (long long)_statusBarStyle;
- (long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(bool)arg2;
- (id)appVCBackReference;
- (long long)overrideStatusBarStyle;
- (void)setAppVCBackReference:(id)arg1;

@end
