
@interface AXClarityBoardServer : AXServer <AXSystemAppServer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isAvailable;
+ (id)server;

- (int)_actionResultKey;
- (long long)_boolFromReply:(id)arg1;
- (void)_didConnectToClient;
- (long long)_integerFromReply:(id)arg1;
- (int)_pidFromReply:(id)arg1;
- (id)_serviceName;
- (void)_wasDisconnectedFromClient;
- (long long)activeInterfaceOrientation;
- (void)activeInterfaceOrientation:(id /* block */)arg1;
- (bool)dismissSiri;
- (bool)isAppSwitcherVisible;
- (bool)isControlCenterVisible;
- (bool)isDockVisible;
- (bool)isLockScreenVisible;
- (void)isMediaPlayingForApp:(id)arg1 completionHandler:(id /* block */)arg2;
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
- (void)pid:(id /* block */)arg1;
- (void)rebootDevice;
- (void)registerActionHandler:(id /* block */)arg1 withIdentifierCallback:(id /* block */)arg2;
- (void)removeActionHandler:(id)arg1;
- (bool)showControlCenter:(bool)arg1;
- (void)toggleBackgroundSounds;
- (bool)toggleIncomingCall;
- (void)wakeUpDeviceIfNecessary;

@end
