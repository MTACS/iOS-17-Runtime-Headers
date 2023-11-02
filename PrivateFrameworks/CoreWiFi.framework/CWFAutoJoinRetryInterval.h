
@interface CWFAutoJoinRetryInterval : NSObject <NSCopying> {
    bool  _BSSChannelsOnly;
    bool  _allowAutoHotspotFallback;
    bool  _alwaysIncludeRemainingNon2GHzChannels;
    unsigned long long  _count;
    unsigned long long  _dwellTime;
    bool  _includeAdjacent5GHzChannel;
    unsigned long long  _interval;
    unsigned long long  _maxBSSChannelAge;
    unsigned long long  _maxBSSChannelCount;
    bool  _passiveScan;
}

@property (nonatomic) bool BSSChannelsOnly;
@property (nonatomic) bool allowAutoHotspotFallback;
@property (nonatomic) bool alwaysIncludeRemainingNon2GHzChannels;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long dwellTime;
@property (nonatomic) bool includeAdjacent5GHzChannel;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) unsigned long long maxBSSChannelAge;
@property (nonatomic) unsigned long long maxBSSChannelCount;
@property (nonatomic) bool passiveScan;

- (bool)BSSChannelsOnly;
- (bool)allowAutoHotspotFallback;
- (bool)alwaysIncludeRemainingNon2GHzChannels;
- (id)autoJoinRetryInterval:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)dwellTime;
- (bool)includeAdjacent5GHzChannel;
- (unsigned long long)interval;
- (unsigned long long)maxBSSChannelAge;
- (unsigned long long)maxBSSChannelCount;
- (bool)passiveScan;
- (void)setAllowAutoHotspotFallback:(bool)arg1;
- (void)setAlwaysIncludeRemainingNon2GHzChannels:(bool)arg1;
- (void)setBSSChannelsOnly:(bool)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setDwellTime:(unsigned long long)arg1;
- (void)setIncludeAdjacent5GHzChannel:(bool)arg1;
- (void)setInterval:(unsigned long long)arg1;
- (void)setMaxBSSChannelAge:(unsigned long long)arg1;
- (void)setMaxBSSChannelCount:(unsigned long long)arg1;
- (void)setPassiveScan:(bool)arg1;

@end
