
@protocol UIApplicationSceneClientSettings <NSObject>

@required

- (unsigned long long)_debugValidationOrientationMask;
- (NSData *)activationConditionsData;
- (NSArray *)audioCategoriesDisablingVolumeHUD;
- (long long)backgroundStyle;
- (double)brightnessLevel;
- (NSString *)canvasTitle;
- (long long)compatibilityMode;
- (bool)containsSearchView;
- (double)controlCenterAmbiguousActivationMargin;
- (long long)controlCenterRevealMode;
- (double)defaultPNGExpirationTime;
- (NSString *)defaultPNGName;
- (bool)defaultStatusBarHidden;
- (long long)defaultStatusBarStyle;
- (bool)deviceOrientationEventsEnabled;
- (bool)disablesMirroring;
- (bool)discardSessionOnUserDisconnect;
- (FBSDisplayConfigurationRequest *)displayConfigurationRequest;
- (long long)editingInteractionConfiguration;
- (bool)homeIndicatorAutoHidden;
- (bool)idleModeVisualEffectsEnabled;
- (bool)idleTimerDisabled;
- (long long)interfaceOrientation;
- (bool)interfaceOrientationChangesDisabled;
- (bool)isReachabilitySupported;
- (bool)isStatusBarForegroundTransparent;
- (NSArray *)multitaskingDragExclusionRects;
- (long long)notificationCenterRevealMode;
- (_UIPhysicalButtonConfigurationSet *)physicalButtonConfigurations;
- (long long)playbackControlsState;
- (long long)preferredPointerLockStatus;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })primaryWindowOverlayInsets;
- (unsigned long long)proximityDetectionModes;
- (FBSDisplayMode *)requestedDisplayMode;
- (long long)sceneActivationBias;
- (unsigned long long)screenEdgesDeferringSystemGestures;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenFocusedFrame;
- (double)statusBarAlpha;
- (unsigned int)statusBarContextID;
- (bool)statusBarHidden;
- (long long)statusBarModernStyle;
- (NSDictionary *)statusBarPartStyles;
- (long long)statusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)systemInputActive;
- (long long)userInterfaceStyle;
- (unsigned long long)visibleMiniAlertCount;
- (bool)wantsExclusiveForeground;
- (long long)whitePointAdaptivityStyle;

@end
