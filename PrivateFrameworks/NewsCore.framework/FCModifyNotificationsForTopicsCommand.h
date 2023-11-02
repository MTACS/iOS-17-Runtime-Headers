
@interface FCModifyNotificationsForTopicsCommand : FCCommand {
    NSString * _channelID;
    int  _deviceDigestMode;
    NSString * _deviceToken;
    NSString * _storefrontID;
    NSString * _topicGroupingID;
    NSArray * _topicIDsToAdd;
    NSArray * _topicIDsToRemove;
    NSString * _userID;
}

@property (nonatomic, copy) NSString *channelID;
@property (nonatomic) int deviceDigestMode;
@property (nonatomic, copy) NSString *deviceToken;
@property (nonatomic, copy) NSString *storefrontID;
@property (nonatomic, copy) NSString *topicGroupingID;
@property (nonatomic, copy) NSArray *topicIDsToAdd;
@property (nonatomic, copy) NSArray *topicIDsToRemove;
@property (nonatomic, copy) NSString *userID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canCoalesceWithCommand:(id)arg1;
- (id)channelID;
- (void)coalesceWithCommand:(id)arg1;
- (int)deviceDigestMode;
- (id)deviceToken;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopicIDsToAdd:(id)arg1 topicIDsToRemove:(id)arg2 withTopicGroupingID:(id)arg3 fromChannelID:(id)arg4 userID:(id)arg5 deviceToken:(id)arg6 storefrontID:(id)arg7 deviceDigestMode:(int)arg8;
- (void)setChannelID:(id)arg1;
- (void)setDeviceDigestMode:(int)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)setStorefrontID:(id)arg1;
- (void)setTopicGroupingID:(id)arg1;
- (void)setTopicIDsToAdd:(id)arg1;
- (void)setTopicIDsToRemove:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)storefrontID;
- (id)topicGroupingID;
- (id)topicIDsToAdd;
- (id)topicIDsToRemove;
- (id)userID;

@end
