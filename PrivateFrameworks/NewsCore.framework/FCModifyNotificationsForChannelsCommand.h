
@interface FCModifyNotificationsForChannelsCommand : FCCommand {
    NSArray * _channelIDsToAdd;
    NSArray * _channelIDsToRemove;
    int  _deviceDigestMode;
    NSString * _deviceToken;
    NSArray * _paidChannelIDsToAdd;
    NSString * _storefrontID;
    NSString * _userID;
}

@property (nonatomic, copy) NSArray *channelIDsToAdd;
@property (nonatomic, copy) NSArray *channelIDsToRemove;
@property (nonatomic) int deviceDigestMode;
@property (nonatomic, copy) NSString *deviceToken;
@property (nonatomic, copy) NSArray *paidChannelIDsToAdd;
@property (nonatomic, copy) NSString *storefrontID;
@property (nonatomic, copy) NSString *userID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canCoalesceWithCommand:(id)arg1;
- (id)channelIDsToAdd;
- (id)channelIDsToRemove;
- (void)coalesceWithCommand:(id)arg1;
- (int)deviceDigestMode;
- (id)deviceToken;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithChannelIDsToAdd:(id)arg1 paidChannelIDsToAdd:(id)arg2 channelIDsToRemove:(id)arg3 userID:(id)arg4 deviceToken:(id)arg5 storefrontID:(id)arg6 deviceDigestMode:(int)arg7;
- (id)initWithCoder:(id)arg1;
- (id)paidChannelIDsToAdd;
- (void)setChannelIDsToAdd:(id)arg1;
- (void)setChannelIDsToRemove:(id)arg1;
- (void)setDeviceDigestMode:(int)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)setPaidChannelIDsToAdd:(id)arg1;
- (void)setStorefrontID:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)storefrontID;
- (id)userID;

@end
