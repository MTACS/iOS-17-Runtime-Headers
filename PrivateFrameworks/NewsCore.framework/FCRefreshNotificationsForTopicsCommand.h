
@interface FCRefreshNotificationsForTopicsCommand : FCCommand {
    NSString * _channelID;
    int  _deviceDigestMode;
    NSString * _deviceToken;
    NSString * _storefrontID;
    NSString * _topicGroupingID;
    NSArray * _topicIDs;
    NSString * _userID;
}

@property (nonatomic, copy) NSString *channelID;
@property (nonatomic) int deviceDigestMode;
@property (nonatomic, copy) NSString *deviceToken;
@property (nonatomic, copy) NSString *storefrontID;
@property (nonatomic, copy) NSString *topicGroupingID;
@property (nonatomic, copy) NSArray *topicIDs;
@property (nonatomic, copy) NSString *userID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)channelID;
- (int)deviceDigestMode;
- (id)deviceToken;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopicsIDs:(id)arg1 withTopicGroupingID:(id)arg2 fromChannelID:(id)arg3 userID:(id)arg4 deviceToken:(id)arg5 storefrontID:(id)arg6 deviceDigestMode:(int)arg7;
- (void)setChannelID:(id)arg1;
- (void)setDeviceDigestMode:(int)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)setStorefrontID:(id)arg1;
- (void)setTopicGroupingID:(id)arg1;
- (void)setTopicIDs:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)storefrontID;
- (id)topicGroupingID;
- (id)topicIDs;
- (id)userID;

@end
