
@interface FCRegisterDeviceTokenCommand : FCCommand {
    int  _deviceDigestMode;
    NSString * _deviceToken;
    NSString * _storefrontID;
    NSString * _userID;
}

@property (nonatomic) int deviceDigestMode;
@property (nonatomic, copy) NSString *deviceToken;
@property (nonatomic, copy) NSString *storefrontID;
@property (nonatomic, copy) NSString *userID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)deviceDigestMode;
- (id)deviceToken;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 deviceDigestMode:(int)arg4;
- (void)setDeviceDigestMode:(int)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)setStorefrontID:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)storefrontID;
- (id)userID;

@end
