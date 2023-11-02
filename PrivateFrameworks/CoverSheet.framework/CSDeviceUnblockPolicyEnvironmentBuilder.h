
@interface CSDeviceUnblockPolicyEnvironmentBuilder : NSObject <CSDeviceUnblockPolicyEnvironmentBuilder> {
    bool  _isDeviceInternetConnectionActive;
    bool  _isPasscodeGracePeriodUsable;
    bool  _isUserFindMyAccountPresent;
    bool  _isUserRequestedEraseEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDeviceInternetConnectionActive;
@property (nonatomic) bool isPasscodeGracePeriodUsable;
@property (nonatomic) bool isUserFindMyAccountPresent;
@property (nonatomic) bool isUserRequestedEraseEnabled;
@property (readonly) Class superclass;

- (bool)isDeviceInternetConnectionActive;
- (bool)isPasscodeGracePeriodUsable;
- (bool)isUserFindMyAccountPresent;
- (bool)isUserRequestedEraseEnabled;
- (void)setIsDeviceInternetConnectionActive:(bool)arg1;
- (void)setIsPasscodeGracePeriodUsable:(bool)arg1;
- (void)setIsUserFindMyAccountPresent:(bool)arg1;
- (void)setIsUserRequestedEraseEnabled:(bool)arg1;

@end
