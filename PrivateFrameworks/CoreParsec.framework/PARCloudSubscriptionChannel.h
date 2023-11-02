
@interface PARCloudSubscriptionChannel : PARSubscriptionChannel {
    SFCloudChannelsRequestItem * channelItem;
}

@property (nonatomic, retain) SFCloudChannelsRequestItem *channelItem;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)channelItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChannelItem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setChannelItem:(id)arg1;

@end
