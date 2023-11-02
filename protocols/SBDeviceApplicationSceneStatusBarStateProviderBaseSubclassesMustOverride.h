
@protocol SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride <NSObject>

@required

- (long long)_defaultStatusBarStyle;
- (long long)_fallbackInterfaceOrientation;
- (double)_statusBarAlpha;
- (bool)_statusBarAppearsOutsideOfAJailedApp;
- (bool)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (NSDictionary *)_statusBarPartStyles;
- (long long)_statusBarStyle;
- (long long)_statusBarStyleForPartWithIdentifier:(NSString *)arg1 suppressingInherited:(bool)arg2;
- (bool)_suppressInheritedPartStyles;
- (NSSet *)backgroundActivitiesToSuppress;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarAvoidanceFrame;
- (NSString *)statusBarSceneIdentifier;

@end
