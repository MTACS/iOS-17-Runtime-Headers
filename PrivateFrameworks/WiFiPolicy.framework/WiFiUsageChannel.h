
@interface WiFiUsageChannel : NSObject <NSCopying> {
    int  _band;
    long long  _channel;
    unsigned long long  _channelFlags;
    long long  _channelWidth;
    bool  _isDFSChannel;
}

@property (nonatomic) int band;
@property (nonatomic) long long channel;
@property (nonatomic) unsigned long long channelFlags;
@property (nonatomic) long long channelWidth;
@property (nonatomic) bool isDFSChannel;

+ (id)channelWithBssDetails:(id)arg1 andChannelInfoList:(id)arg2;

- (int)band;
- (long long)channel;
- (unsigned long long)channelFlags;
- (long long)channelWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)dfsChannel:(id)arg1;
- (unsigned long long)hash;
- (bool)isDFSChannel;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChannel:(id)arg1;
- (void)setBand:(int)arg1;
- (void)setChannel:(long long)arg1;
- (void)setChannelFlags:(unsigned long long)arg1;
- (void)setChannelWidth:(long long)arg1;
- (void)setIsDFSChannel:(bool)arg1;

@end
