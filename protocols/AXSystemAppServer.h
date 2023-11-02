
@protocol AXSystemAppServer <NSObject>

@required

+ (<AXSystemAppServer> *)server;

- (long long)activeInterfaceOrientation;
- (void)activeInterfaceOrientation:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (bool)dismissSiri;
- (bool)isAppSwitcherVisible;
- (bool)isControlCenterVisible;
- (bool)isDockVisible;
- (bool)isLockScreenVisible;
- (void)isMediaPlayingForApp:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)isNonExclusiveSystemUIFocusableIncludingPIPWindow:(bool)arg1;
- (bool)isNotificationCenterVisible;
- (bool)isNotificationVisible;
- (bool)isNowPlayingUIVisible;
- (bool)isPasscodeLockVisible;
- (bool)isReceivingAirPlay;
- (bool)isScreenSaverVisible;
- (bool)isScreenshotWindowVisible;
- (bool)isShelfSwitcherVisible;
- (bool)isSiriTalkingOrListening;
- (bool)isSiriVisible;
- (bool)isSoftwareUpdateUIVisible;
- (bool)isStageManagerSwitcherVisible;
- (bool)isSystemSleeping;
- (int)pid;
- (void)pid:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)rebootDevice;
- (bool)showControlCenter:(bool)arg1;
- (void)toggleBackgroundSounds;
- (bool)toggleIncomingCall;
- (void)wakeUpDeviceIfNecessary;

@end
