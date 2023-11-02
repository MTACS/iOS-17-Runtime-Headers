
@protocol CSDeviceUnblockPolicyEnvironmentBuilder <NSObject>

@required

- (bool)isDeviceInternetConnectionActive;
- (bool)isPasscodeGracePeriodUsable;
- (bool)isUserFindMyAccountPresent;
- (bool)isUserRequestedEraseEnabled;
- (void)setIsDeviceInternetConnectionActive:(bool)arg1;
- (void)setIsPasscodeGracePeriodUsable:(bool)arg1;
- (void)setIsUserFindMyAccountPresent:(bool)arg1;
- (void)setIsUserRequestedEraseEnabled:(bool)arg1;

@end
