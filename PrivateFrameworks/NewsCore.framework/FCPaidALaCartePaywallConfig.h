
@interface FCPaidALaCartePaywallConfig : NSObject <NSCopying> {
    NSString * _channelID;
    NSString * _channelId;
    NSString * _channelPaywallTitle;
    NSString * _hardPaywallTitle;
    NSString * _leakyPaywallTitle;
    NSString * _promotionalPaywallTitle;
}

@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, copy) NSString *channelId;
@property (nonatomic, copy) NSString *channelPaywallTitle;
@property (nonatomic, copy) NSString *hardPaywallTitle;
@property (nonatomic, copy) NSString *leakyPaywallTitle;
@property (nonatomic, copy) NSString *promotionalPaywallTitle;

- (void).cxx_destruct;
- (id)channelID;
- (id)channelId;
- (id)channelPaywallTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)hardPaywallTitle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithChannelID:(id)arg1 channelPaywallTitle:(id)arg2 hardPaywallTitle:(id)arg3 leakyPaywallTitle:(id)arg4 promotionalPaywallTitle:(id)arg5;
- (id)initWithChannelID:(id)arg1 configDictionary:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)leakyPaywallTitle;
- (id)promotionalPaywallTitle;
- (void)setChannelId:(id)arg1;
- (void)setChannelPaywallTitle:(id)arg1;
- (void)setHardPaywallTitle:(id)arg1;
- (void)setLeakyPaywallTitle:(id)arg1;
- (void)setPromotionalPaywallTitle:(id)arg1;

@end
