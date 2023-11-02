
@interface CSDeviceUnblockPolicyEnvironment : NSObject <NSCopying> {
    bool  _isDeviceInternetConnectionActive;
    bool  _isPasscodeGracePeriodUsable;
    bool  _isUserFindMyAccountPresent;
    bool  _isUserRequestedEraseEnabled;
}

@property (nonatomic, readonly) bool isDeviceInternetConnectionActive;
@property (nonatomic, readonly) bool isPasscodeGracePeriodUsable;
@property (nonatomic, readonly) bool isUserFindMyAccountPresent;
@property (nonatomic, readonly) bool isUserRequestedEraseEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBuilder:(id /* block */)arg1;
- (bool)isDeviceInternetConnectionActive;
- (bool)isEqual:(id)arg1;
- (bool)isPasscodeGracePeriodUsable;
- (bool)isUserFindMyAccountPresent;
- (bool)isUserRequestedEraseEnabled;

@end
