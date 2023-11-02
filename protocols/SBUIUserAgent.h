
@protocol SBUIUserAgent <NSObject>

@required

- (void)activateModalBulletinAlert:(SBAlertItem *)arg1;
- (void)activateRemoteAlertService:(NSString *)arg1 options:(NSDictionary *)arg2;
- (long long)activeInterfaceOrientation;
- (void)addActiveInterfaceOrientationObserver:(id <SBUIActiveOrientationObserver>)arg1;
- (bool)applicationInstalledForDisplayID:(NSString *)arg1;
- (bool)canLaunchFromSource:(int)arg1 withURL:(NSURL *)arg2 bundleID:(NSString *)arg3;
- (bool)deviceIsBlocked;
- (bool)deviceIsLocked;
- (bool)deviceIsPasscodeLocked;
- (bool)deviceIsPasscodeLockedRemotely;
- (bool)deviceIsTethered;
- (void)disableLockScreenBundleNamed:(NSString *)arg1 deactivationContext:(NSDictionary *)arg2;
- (void)enableLockScreenBundleNamed:(NSString *)arg1 activationContext:(NSDictionary *)arg2;
- (NSString *)folderNameForDisplayID:(NSString *)arg1;
- (NSString *)foregroundApplicationDisplayID;
- (bool)isApplicationForegroundObscured:(NSString *)arg1;
- (bool)isApplicationRestrictedOrHidden:(NSString *)arg1;
- (bool)isIdleTimerDisabledForReason:(NSString *)arg1;
- (bool)isInternalInstall;
- (bool)isNamedRemoteAlertServiceActive:(NSString *)arg1 controllerClassName:(NSString *)arg2;
- (bool)isScreenOn;
- (bool)launchApplicationFromSource:(int)arg1 withDisplayID:(NSString *)arg2 options:(NSDictionary *)arg3;
- (bool)launchApplicationFromSource:(int)arg1 withURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (NSString *)localizedDisplayNameForDisplayID:(NSString *)arg1;
- (void)lockAndDimDevice;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(bool)arg1;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(bool)arg1 andDimScreen:(bool)arg2;
- (bool)lockScreenIsShowing;
- (int)networkUsageTypeForAppWithDisplayID:(NSString *)arg1;
- (bool)openURL:(NSURL *)arg1 allowUnlock:(bool)arg2 animated:(bool)arg3;
- (void)removeActiveInterfaceOrientationObserver:(id <SBUIActiveOrientationObserver>)arg1;
- (void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(NSString *)arg2;
- (void)setIdleText:(NSString *)arg1;
- (void)setIdleTimerDisabled:(bool)arg1 forReason:(NSString *)arg2;
- (void)setMinimumBacklightLevel:(float)arg1 animated:(bool)arg2;
- (bool)springBoardIsActive;
- (NSString *)topSuspendedEventsOnlyDisplayID;
- (void)undimScreen;
- (void)updateInterfaceOrientationIfNecessary;
- (struct __CFRunLoop { }*)wifiRunLoopRef;

@end
