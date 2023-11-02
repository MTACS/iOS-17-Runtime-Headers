
@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>

@property (setter=_setDebugValidationOrientationMaskEnabled:, nonatomic) bool _debugValidationOrientationMaskEnabled;
@property (nonatomic) long long accessibilityContrast;
@property (nonatomic) double angleFromHostReferenceUprightDirection;
@property (nonatomic) unsigned long long artworkSubtype;
@property (nonatomic) bool canShowAlerts;
@property (nonatomic, retain) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) unsigned long long deactivationReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) bool deviceOrientationEventsEnabled;
@property (nonatomic) bool enhancedWindowingEnabled;
@property (nonatomic) bool forcedStatusBarForegroundTransparent;
@property (nonatomic, retain) NSNumber *forcedStatusBarStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic) double homeAffordanceOverlayAllowance;
@property (nonatomic) unsigned int hostContextIdentifierForSnapshotting;
@property (nonatomic) unsigned long long hostReferenceAngleMode;
@property (nonatomic) bool idleModeEnabled;
@property (nonatomic) bool inLiveResize;
@property (nonatomic, retain) <BSInterfaceOrientationMapResolving><BSXPCSecureCoding> *interfaceOrientationMapResolver;
@property (nonatomic) long long interfaceOrientationMode;
@property (nonatomic) bool isCapturingContentForAdditionalRenderingDestination;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsets;
@property (nonatomic, retain) NSString *persistenceIdentifier;
@property (nonatomic) bool pg_hasVisiblePIPContent;
@property (nonatomic) long long pointerLockStatus;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeLeft;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeRight;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortrait;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortraitUpsideDown;
@property (nonatomic) unsigned long long scenePresenterRenderIdentifierForSnapshotting;
@property (nonatomic) bool screenBoundsIgnoresSceneOrientation;
@property (nonatomic) long long screenReferenceDisplayModeStatus;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } statusBarAvoidanceFrame;
@property (nonatomic) bool statusBarDisabled;
@property (nonatomic) double statusBarHeight;
@property (nonatomic) long long statusBarParts;
@property (nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (nonatomic) double systemMinimumMargin;
@property (nonatomic, retain) NSSet *targetOfEventDeferringEnvironments;
@property (nonatomic) bool underLock;
@property (nonatomic) long long userInterfaceStyle;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)_debugValidationOrientationMaskEnabled;
- (void)_setDebugValidationOrientationMaskEnabled:(bool)arg1;
- (long long)accessibilityContrast;
- (double)angleFromHostReferenceUprightDirection;
- (unsigned long long)artworkSubtype;
- (bool)canShowAlerts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cornerRadiusConfiguration;
- (unsigned long long)deactivationReasons;
- (double)defaultStatusBarHeightForOrientation:(long long)arg1;
- (long long)deviceOrientation;
- (bool)deviceOrientationEventsEnabled;
- (bool)enhancedWindowingEnabled;
- (bool)forcedStatusBarForegroundTransparent;
- (id)forcedStatusBarStyle;
- (double)homeAffordanceOverlayAllowance;
- (unsigned int)hostContextIdentifierForSnapshotting;
- (unsigned long long)hostReferenceAngleMode;
- (bool)idleModeEnabled;
- (bool)inLiveResize;
- (id)interfaceOrientationMapResolver;
- (long long)interfaceOrientationMode;
- (bool)isCapturingContentForAdditionalRenderingDestination;
- (bool)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (id)persistenceIdentifier;
- (long long)pointerLockStatus;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeLeft;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeRight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortrait;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortraitUpsideDown;
- (unsigned long long)scenePresenterRenderIdentifierForSnapshotting;
- (bool)screenBoundsIgnoresSceneOrientation;
- (long long)screenReferenceDisplayModeStatus;
- (void)setAccessibilityContrast:(long long)arg1;
- (void)setAngleFromHostReferenceUprightDirection:(double)arg1;
- (void)setArtworkSubtype:(unsigned long long)arg1;
- (void)setCanShowAlerts:(bool)arg1;
- (void)setCornerRadiusConfiguration:(id)arg1;
- (void)setDeactivationReasons:(unsigned long long)arg1;
- (void)setDefaultStatusBarHeight:(double)arg1 forOrientation:(long long)arg2;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setDeviceOrientationEventsEnabled:(bool)arg1;
- (void)setEnhancedWindowingEnabled:(bool)arg1;
- (void)setForcedStatusBarForegroundTransparent:(bool)arg1;
- (void)setForcedStatusBarStyle:(id)arg1;
- (void)setHomeAffordanceOverlayAllowance:(double)arg1;
- (void)setHostContextIdentifierForSnapshotting:(unsigned int)arg1;
- (void)setHostReferenceAngleMode:(unsigned long long)arg1;
- (void)setIdleModeEnabled:(bool)arg1;
- (void)setInLiveResize:(bool)arg1;
- (void)setInterfaceOrientationMapResolver:(id)arg1;
- (void)setInterfaceOrientationMode:(long long)arg1;
- (void)setIsCapturingContentForAdditionalRenderingDestination:(bool)arg1;
- (void)setPeripheryInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPersistenceIdentifier:(id)arg1;
- (void)setPointerLockStatus:(long long)arg1;
- (void)setSafeAreaInsetsLandscapeLeft:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSafeAreaInsetsLandscapeRight:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSafeAreaInsetsPortrait:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSafeAreaInsetsPortraitUpsideDown:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScenePresenterRenderIdentifierForSnapshotting:(unsigned long long)arg1;
- (void)setScreenBoundsIgnoresSceneOrientation:(bool)arg1;
- (void)setScreenReferenceDisplayModeStatus:(long long)arg1;
- (void)setStatusBarAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStatusBarDisabled:(bool)arg1;
- (void)setStatusBarHeight:(double)arg1;
- (void)setStatusBarParts:(long long)arg1;
- (void)setStatusBarStyleOverridesToSuppress:(unsigned long long)arg1;
- (void)setSystemMinimumMargin:(double)arg1;
- (void)setTargetOfEventDeferringEnvironments:(id)arg1;
- (void)setUnderLock:(bool)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarAvoidanceFrame;
- (bool)statusBarDisabled;
- (double)statusBarHeight;
- (long long)statusBarParts;
- (unsigned long long)statusBarStyleOverridesToSuppress;
- (double)systemMinimumMargin;
- (id)targetOfEventDeferringEnvironments;
- (bool)underLock;
- (long long)userInterfaceStyle;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

- (bool)pg_hasVisiblePIPContent;
- (void)setPg_hasVisiblePIPContent:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (bool)sb_isEligbleForDeviceOrientationUpdates;

@end
