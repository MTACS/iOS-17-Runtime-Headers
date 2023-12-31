
@interface SBUIController : NSObject <BCBatteryDeviceObserving, CSMagSafeAccessoryStatusProviding, CSPowerStatusProviding, PBUIWallpaperObserver, PTSettingsKeyObserver, SBAccessoryConnectionInfoProviderObserver, SBFMotionAlarmDelegate, SBFZStackParticipantDelegate, SBHomeScreenBackdropViewBaseDelegate, SBReachabilityObserver, SBWallpaperOrientationProvider, UIInteractionProgressObserver, UIWindowDelegate> {
    SBHUDController * _HUDController;
    NSMutableDictionary * _accessoriesAttachedByUUID;
    NSMutableDictionary * _accessoriesSuppressedByUUID;
    BSAbsoluteMachTimer * _accessoryAttachmentAnimationBlockingTimer;
    SBAccessoryConnectionInfoProvider * _accessoryConnectionInfoProvider;
    ATXAppDirectoryClient * _appDirectoryClient;
    float  _batteryCapacity;
    BCBatteryDeviceController * _batteryDeviceController;
    int  _batteryLoggingStartCapacity;
    bool  _chargingChimeEnabled;
    NSString * _connectedWirelessChargerId;
    NSMutableSet * _contentRequiringReasons;
    UIView * _contentView;
    SWWakingTimer * _debounceWirelessChargingTimer;
    bool  _disableAppSwitchForcePressDueToHomeButtonForce;
    bool  _disableChimeForWirelessCharging;
    bool  _disableScreenWakeForWirelessCharging;
    bool  _disallowsPointerInteraction;
    int  _firmwareUpdateStateToken;
    UIForceStageInteractionProgress * _homeButtonForceProgress;
    SBHomeScreenBackdropViewBase * _homeScreenBackdropView;
    SBWindow * _homeScreenDimmingWindow;
    SBIconController * _iconController;
    UIView * _iconsView;
    bool  _isAccessoryAnimationAllowed;
    unsigned int  _isBatteryCharging;
    unsigned int  _isBatteryCritical;
    unsigned int  _isConnectedToChargeIncapablePowerSource;
    unsigned int  _isConnectedToExternalChargingAccessory;
    unsigned int  _isConnectedToPoweredExternalChargingAccessory;
    unsigned int  _isConnectedToQiPower;
    unsigned int  _isConnectedToUnsupportedChargingAccessory;
    unsigned int  _isConnectedToWindowedAccessory;
    unsigned int  _isConnectedToWirelessInternalAccessory;
    unsigned int  _isConnectedToWirelessInternalCharger;
    unsigned int  _isConnectedToWirelessInternalChargingAccessory;
    unsigned int  _isFullyCharged;
    unsigned int  _isOnAC;
    bool  _isShowingSpotlightUnderOpaqueBackdrop;
    CSMagSafeAccessory * _lastAttachedAccessory;
    CSMagSafeAccessory * _lastDetachedAccessory;
    unsigned int  _lastVolumeDownToControl;
    SBFMotionAlarmController * _motionAlarmController;
    NSMutableDictionary * _powerSourceHasChimed;
    int  _powerStateUpdateToken;
    SBWallpaperEffectView * _reachabilityWallpaperEffectView;
    NSMapTable * _statusBarAssertionsByWindowScene;
    bool  _supportsDetailedBatteryCapacity;
    <BSInvalidatable> * _suspendProximityForAttachedWindowedAccessoryAssertion;
    SBAppSwitcherSettings * _switcherSettings;
    SBDismissOnlyAlertItem * _unsupportedChargerAlert;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleScreenCoordinatesForWindowedAccessory;
    SBVolumeControl * _volumeControl;
    <BSInvalidatable> * _wallpaperRasterizationAssertion;
    unsigned int  _wasConnectedToWirelessChargingAccessory;
    SBHomeScreenWindow * _window;
    SBWindowScene * _windowScene;
    SBFZStackParticipant * _zStackParticipant;
}

@property (nonatomic) bool chargingChimeEnabled;
@property (getter=isConnectedToExternalChargingSource, nonatomic, readonly) bool connectedToExternalChargingSource;
@property (getter=isConnectedToQiPower, nonatomic, readonly) bool connectedToQiPower;
@property (getter=isConnectedToWirelessInternalCharger, nonatomic, readonly) bool connectedToWirelessInternalCharger;
@property (getter=isConnectedToWirelessInternalChargingAccessory, nonatomic, readonly) bool connectedToWirelessInternalChargingAccessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool homeScreenAutorotatesEvenWhenIconIsDragging;
@property (nonatomic, readonly) SBIconController *iconController;
@property (nonatomic, readonly) bool isAccessoryAnimationAllowed;
@property (nonatomic, readonly) CSMagSafeAccessory *lastAttachedAccessory;
@property (nonatomic, readonly) CSMagSafeAccessory *lastDetachedAccessory;
@property (getter=isOnAC, nonatomic, readonly) bool onAC;
@property (readonly) Class superclass;
@property (nonatomic) SBWindowScene *windowScene;

+ (id)_effectiveStatusBarSettingsForSnapshot:(id)arg1 sceneHandle:(id)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformAndFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forLaunchImageHostViewWithOrientation:(long long)arg2 statusBarHeight:(double)arg3 inJailRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForStatusBarWithOrientation:(long long)arg1 scaleFactor:(double)arg2;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarFrameForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 statusBarStyleRequest:(id)arg4 withinBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 inReferenceSpace:(bool)arg6;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarFrameForSnapshotFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orientation:(long long)arg2 statusBarStyleRequest:(id)arg3 hidden:(bool)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarFrameForSnapshotFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 remainderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 orientation:(long long)arg3 statusBarStyleRequest:(id)arg4 hidden:(bool)arg5;
+ (id)zoomViewForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 snapshot:(id)arg4 snapshotSize:(struct CGSize { double x1; double x2; })arg5 statusBarDescriptor:(id)arg6 decodeImage:(bool)arg7 hasOrientationMismatchForClassicApp:(bool)arg8 customContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg9;

- (void).cxx_destruct;
- (void)ACPowerChanged;
- (void)_accessibilityWillBeginAppSwitcherRevealAnimation;
- (void)_accessoryEndpointAttached:(id)arg1;
- (void)_accessoryEndpointDetached:(id)arg1;
- (void)_activateApplicationFromAccessibility:(id)arg1;
- (void)_activateWorkspaceEntity:(id)arg1 fromIcon:(id)arg2 location:(id)arg3 validator:(id /* block */)arg4;
- (void)_animationBlockingTimerFired;
- (void)_backgroundContrastDidChange:(id)arg1;
- (bool)_blocksAnimationForAccessoryType:(long long)arg1;
- (void)_cancelDebounceWirelessChargingTimer;
- (void)_closeOpenFolderIfNecessary;
- (id)_currentHomeScreenLegibilitySettings;
- (void)_debounceWirelessChargingTimerFired;
- (void)_deviceUILocked;
- (void)_disableWirelessChargingChimeAndScreenWakeForDuration:(double)arg1;
- (void)_disableWirelessChargingChimeAndScreenWakeForDuration:(double)arg1 withMotionAlarm:(bool)arg2;
- (void)_dismissAccessory:(id)arg1 playChime:(bool)arg2;
- (void)_enumeratePowerSourcesWithBlock:(id /* block */)arg1;
- (void)_hideKeyboard;
- (bool)_isAppropriateToReactToAccessoryEvent;
- (bool)_isConnectedToWirelessCharging;
- (id)_legibilitySettings;
- (void)_playAccessoryChimeIfAppropriateForAccessory:(id)arg1 attaching:(bool)arg2 withDelay:(double)arg3;
- (bool)_powerSourceWantsToPlayChime;
- (void)_preferredContentSizeDidChange:(id)arg1;
- (void)_reduceMotionStatusDidChange:(id)arg1;
- (void)_removeReachabilityEffectViewIfNecessary;
- (void)_removeSuppressedAccessory:(id)arg1;
- (void)_resetWirelessChargingState;
- (void)_setAccessoryAttachmentAnimationBlockingTimerWithDuration:(double)arg1;
- (void)_setConnectedToWindowedAccessory:(bool)arg1;
- (void)_setDebounceWirelessChargingTimerWithDuration:(double)arg1;
- (void)_setupHomeScreenContentBackdropView;
- (void)_setupHomeScreenDimmingWindow;
- (bool)_shouldInitiateAnimationForAccessory:(id)arg1;
- (bool)_shouldShowAnimationForAccessory:(id)arg1;
- (void)_storeSuppressedAccessory:(id)arg1;
- (void)_switchToHomeScreenWallpaperAnimated:(bool)arg1;
- (bool)_treatsAccessoryAsSupported:(id)arg1;
- (void)_updateLegibility;
- (void)_updateRequireWallpaperRasterization;
- (void)_willRevealOrHideContentView;
- (void)accessoryConnectionInfoProvider:(id)arg1 accessoryEndpointAttached:(id)arg2 transportType:(int)arg3 protocol:(int)arg4 properties:(id)arg5 forConnection:(id)arg6;
- (void)accessoryConnectionInfoProvider:(id)arg1 accessoryEndpointDetached:(id)arg2 forConnection:(id)arg3;
- (void)accessoryConnectionInfoProvider:(id)arg1 accessoryEndpointInfoPropertyChanged:(id)arg2 properties:(id)arg3 forConnection:(id)arg4;
- (void)activateApplication:(id)arg1 fromIcon:(id)arg2 location:(id)arg3 activationSettings:(id)arg4 actions:(id)arg5;
- (float)batteryCapacity;
- (int)batteryCapacityAsPercentage;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringContentForReason:(id)arg1;
- (void)beginRequiringContentForReason:(id)arg1 options:(unsigned long long)arg2;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)cancelInProcessAnimations;
- (void)cancelVolumeEvent;
- (bool)chargingChimeEnabled;
- (void)connectedDevicesDidChange:(id)arg1;
- (id)connectedWirelessChargerIdentifier;
- (id)contentView;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didDetectDeviceMotion;
- (void)disableAnimationForNextIconRotation;
- (bool)disableAppSwitchForcePressDueToHomeButtonForce;
- (bool)dissmissAlertItemsAndSheetsIfPossible;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)endRequiringContentForReason:(id)arg1;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (void)getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1 forWindow:(id)arg2;
- (void)handleDidEndReachabilityAnimation;
- (bool)handleHomeButtonDoublePressDown;
- (bool)handleHomeButtonSinglePressUpForWindowScene:(id)arg1;
- (bool)handleHomeButtonSinglePressUpForWindowScene:(id)arg1 withSourceType:(unsigned long long)arg2;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(bool)arg2;
- (void)handleWillBeginReachabilityAnimation;
- (bool)hasVisibleAlertItemOrSheet:(out bool*)arg1;
- (unsigned char)headsetBatteryCapacity;
- (bool)homeScreenAutorotatesEvenWhenIconIsDragging;
- (void)homeScreenBackdropView:(id)arg1 opaquenessDidChange:(bool)arg2;
- (id)iconController;
- (id)init;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (long long)interfaceOrientationForWallpaperController:(id)arg1;
- (bool)isAccessoryAnimationAllowed;
- (bool)isBackdropVisible;
- (bool)isBatteryCharging;
- (bool)isConnectedToChargeIncapablePowerSource;
- (bool)isConnectedToExternalChargingSource;
- (bool)isConnectedToQiPower;
- (bool)isConnectedToUnsupportedChargingAccessory;
- (bool)isConnectedToWindowedAccessory;
- (bool)isConnectedToWirelessInternalAccessory;
- (bool)isConnectedToWirelessInternalCharger;
- (bool)isConnectedToWirelessInternalChargingAccessory;
- (bool)isFullyCharged;
- (bool)isHeadsetBatteryCharging;
- (bool)isHeadsetDocked;
- (bool)isIconListViewTornDown;
- (bool)isOnAC;
- (id)lastAttachedAccessory;
- (id)lastDetachedAccessory;
- (void)noteStatusBarHeightChanged:(id)arg1;
- (void)nudgeIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)playChargingChimeIfAppropriate;
- (void)possiblyWakeForPowerStatusChangeWithUnlockSource:(int)arg1;
- (void)removeDetachedAccessory:(id)arg1;
- (void)restoreContent;
- (void)restoreContentAndUnscatterIconsAnimated:(bool)arg1;
- (void)restoreContentAndUnscatterIconsAnimated:(bool)arg1 afterDelay:(double)arg2 withCompletion:(id /* block */)arg3;
- (void)restoreContentAndUnscatterIconsAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)restoreContentWithOptions:(unsigned long long)arg1;
- (id)scalingView;
- (void)setAllowIconRotation:(bool)arg1 forReason:(id)arg2;
- (void)setChargingChimeEnabled:(bool)arg1;
- (void)setHomeScreenAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)setHomeScreenAutorotatesEvenWhenIconIsDragging:(bool)arg1;
- (void)setHomeScreenBackdropBlurMaterialRecipeName:(id)arg1 behaviorMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)setHomeScreenBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)setHomeScreenDimmingAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)setHomeScreenScale:(double)arg1 behaviorMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)setIsAccessoryAnimationAllowed:(bool)arg1;
- (void)setIsConnectedToUnsupportedChargingAccessory:(bool)arg1;
- (void)setLastAttachedAccessory:(id)arg1;
- (void)setLastDetachedAccessory:(id)arg1;
- (void)setLockScreenScale:(double)arg1 withDuration:(double)arg2 behaviorMode:(long long)arg3 completion:(id /* block */)arg4;
- (void)setPointerInteractionsEnabled:(bool)arg1;
- (void)setWindowScene:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)storeAttachedAccessory:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsDetailedBatteryCapacity;
- (void)suppressChimeForConnectedPowerSources;
- (void)tearDownIconListAndBar;
- (long long)transitionSourceForIcon:(id)arg1 iconLocation:(id)arg2;
- (void)updateBatteryState:(id)arg1;
- (void)updateStatusBarLegibilityForWindowScene:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleScreenCoordinatesForWindowedAccessory;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (id)window;
- (id)windowScene;
- (void)windowedAccessoryDismissed;
- (void)windowedAccessoryPresented;
- (id)workflowClientFromWebClip:(id)arg1 appToLaunch:(id)arg2;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
