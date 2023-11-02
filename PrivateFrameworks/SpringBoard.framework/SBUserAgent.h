
@interface SBUserAgent : NSObject <SBUIUserAgent_Internal> {
    <BSInvalidatable> * _bannerSuppressionAssertion;
    NSMutableDictionary * _idleTimerDisableAssertions;
    SBIdleTimerPolicyAggregator * _idleTimerPolicyAggregator;
}

@property (setter=_setIdleTimerPolicyAggregator:, nonatomic, retain) SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupFromBannerLaunch;
- (id)_idleTimerPolicyAggregator;
- (bool)_launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(bool)arg4 animate:(bool)arg5;
- (bool)_openApplication:(id)arg1 withURL:(id)arg2 fromSource:(int)arg3 animated:(bool)arg4 options:(id)arg5;
- (id)_safeValue:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3;
- (void)_setIdleTimerPolicyAggregator:(id)arg1;
- (void)activateModalBulletinAlert:(id)arg1;
- (void)activateRemoteAlertService:(id)arg1 options:(id)arg2;
- (long long)activeInterfaceOrientation;
- (void)addActiveInterfaceOrientationObserver:(id)arg1;
- (bool)applicationInstalledForDisplayID:(id)arg1;
- (bool)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3;
- (bool)deviceIsBlocked;
- (bool)deviceIsLocked;
- (bool)deviceIsPasscodeLocked;
- (bool)deviceIsPasscodeLockedRemotely;
- (bool)deviceIsTethered;
- (void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2;
- (void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2;
- (id)folderNameForDisplayID:(id)arg1;
- (id)foregroundApplicationDisplayID;
- (id)init;
- (bool)isApplicationForegroundObscured:(id)arg1;
- (bool)isApplicationRestrictedOrHidden:(id)arg1;
- (bool)isIdleTimerDisabledForReason:(id)arg1;
- (bool)isInternalInstall;
- (bool)isNamedRemoteAlertServiceActive:(id)arg1 controllerClassName:(id)arg2;
- (bool)isScreenOn;
- (bool)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3;
- (bool)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3;
- (bool)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(bool)arg4;
- (id)localizedDisplayNameForDisplayID:(id)arg1;
- (void)lockAndDimDevice;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(bool)arg1;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(bool)arg1 andDimScreen:(bool)arg2;
- (bool)lockScreenIsShowing;
- (int)networkUsageTypeForAppWithDisplayID:(id)arg1;
- (bool)openURL:(id)arg1 allowUnlock:(bool)arg2 animated:(bool)arg3;
- (void)removeActiveInterfaceOrientationObserver:(id)arg1;
- (void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2;
- (void)setIdleText:(id)arg1;
- (void)setIdleTimerDisabled:(bool)arg1 forReason:(id)arg2;
- (void)setMinimumBacklightLevel:(float)arg1 animated:(bool)arg2;
- (bool)springBoardIsActive;
- (id)topSuspendedEventsOnlyDisplayID;
- (void)undimScreen;
- (void)updateInterfaceOrientationIfNecessary;
- (struct __CFRunLoop { }*)wifiRunLoopRef;

@end
