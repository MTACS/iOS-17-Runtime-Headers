
@protocol CSCoverSheetContextProviding <NSObject>

@required

- (NSString *)accessoryAnimationStatusChangedNotificationName;
- (NSString *)accessoryAttachedNotificationName;
- (NSString *)accessoryDetachedNotificationName;
- (<CSMagSafeAccessoryStatusProviding> *)accessoryStatusProvider;
- (<CSAppHostConfiguring> *)appHostConfiguring;
- (<CSApplicationInforming> *)applicationInformer;
- (<SBFAuthenticationAssertionProviding> *)authenticationAssertionProvider;
- (<CSAuthenticationManaging> *)authenticationManager;
- (<SBFAuthenticationStatusProvider> *)authenticationStatusProvider;
- (<SBUIBiometricResource> *)biometricResource;
- (<CSCarPlayStatusProviding> *)carPlayStatusProvider;
- (<SBFActionProviding> *)contentActionProvider;
- (<SBFDateProviding> *)dateProvider;
- (<CSDeviceOrientationProviding> *)deviceOrientationProvider;
- (NSArray *)dismissableOverlays;
- (<CSHomeAffordanceControlling> *)homeAffordanceController;
- (<CSOverlayProviding> *)homeScreenOverlayProvider;
- (<CSLegibilityProviding> *)legibilityProvider;
- (<SBFLockOutStatusProvider> *)lockOutStatusProvider;
- (<CSMediaControlling> *)mediaController;
- (<CSModalHomeAffordanceControlling> *)modalHomeAffordanceController;
- (<CSNotificationPresenting> *)notificationPresenter;
- (<SBFPasscodeFieldChangeObserver> *)passcodeFieldChangeObserver;
- (<CSPlatterHomeGestureManaging> *)platterHomeGestureManager;
- (NSString *)powerStatusChangeNotificationName;
- (<CSPowerStatusProviding> *)powerStatusProvider;
- (<CSProximitySensorProviding> *)proximitySensorProvider;
- (<CSReachabilityControlling> *)reachabilityController;
- (<CSResetRestoreStatusProviding> *)resetRestoreStatusProvider;
- (<CSScreenStateProviding> *)screenStateProvider;
- (<SBFScreenWakeAnimationControlling> *)screenWakeAnimationController;
- (<CSStatusBarControlling> *)statusBarController;
- (<CSSystemPointerInteractionManaging> *)systemPointerInteractionManager;
- (<CSTelephonyStatusProviding> *)telephonyStatusProvider;
- (<CSThermalStatusProviding> *)thermalStatusProvider;
- (<CSTouchEnvironmentStatusProviding> *)touchEnvironmentStatusProvider;
- (<CSTraitAwareAppHostConfiguring> *)traitsAwareAppHosting;
- (<CSUnlockRequesting> *)unlockRequester;
- (<CSUserSessionControlling> *)userSessionController;
- (<CSWallpaperLogging> *)wallpaperLogger;
- (<CSWallpaperProviding> *)wallpaperProvider;
- (<CSWallpaperSnapshotUpdating> *)wallpaperSnapshotUpdater;

@end
