
@interface WFScanRequest : NSObject {
    NSUUID * _UUID;
    bool  _applyRssiThresholdFilter;
    bool  _channelListIncludesTwoFour;
    NSArray * _channels;
    unsigned long long  _dwellTime;
    bool  _includeBSSList;
    bool  _lowPriorityScan;
    long long  _rssiThreshold;
    NSString * _ssid;
}

@property (nonatomic, retain) NSUUID *UUID;
@property bool applyRssiThresholdFilter;
@property (nonatomic) bool channelListIncludesTwoFour;
@property (nonatomic, retain) NSArray *channels;
@property unsigned long long dwellTime;
@property bool includeBSSList;
@property bool lowPriorityScan;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic, copy) NSString *ssid;

+ (id)scanRequestForChannels:(id)arg1;
+ (id)scanRequestForSSID:(id)arg1 channels:(id)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (id)_channelListFromArrayOfChannels:(id)arg1;
- (bool)_channelListIncludesTwoFour:(id)arg1;
- (id)_defaultScanDictionary;
- (bool)applyRssiThresholdFilter;
- (id)cScanParameters;
- (bool)channelListIncludesTwoFour;
- (id)channels;
- (id)description;
- (unsigned long long)dwellTime;
- (bool)includeBSSList;
- (id)init;
- (id)initWithSSID:(id)arg1 channels:(id)arg2;
- (bool)lowPriorityScan;
- (long long)rssiThreshold;
- (id)scanParameters;
- (void)setApplyRssiThresholdFilter:(bool)arg1;
- (void)setChannelListIncludesTwoFour:(bool)arg1;
- (void)setChannels:(id)arg1;
- (void)setDwellTime:(unsigned long long)arg1;
- (void)setIncludeBSSList:(bool)arg1;
- (void)setLowPriorityScan:(bool)arg1;
- (void)setRssiThreshold:(long long)arg1;
- (void)setSsid:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)ssid;

@end
