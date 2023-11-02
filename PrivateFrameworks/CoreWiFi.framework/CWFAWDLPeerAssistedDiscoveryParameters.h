
@interface CWFAWDLPeerAssistedDiscoveryParameters : NSObject <NSCopying, NSSecureCoding> {
    bool  _followMode;
    unsigned long long  _followModePreferredBand;
    unsigned long long  _localAssistedDiscoveryMetric;
    unsigned long long  _localMasterChannel;
    unsigned long long  _localPreferredChannel;
    unsigned long long  _localSecondaryPreferredChannel;
    unsigned long long  _peerAssistedDiscoveryMetric;
    NSString * _peerMACAddress;
    unsigned long long  _peerMasterChannel;
    unsigned long long  _peerPreferredChannel;
    unsigned long long  _peerSecondaryPreferredChannel;
    int  _peerSupportedChannelFlags;
}

@property (nonatomic) bool followMode;
@property (nonatomic) unsigned long long followModePreferredBand;
@property (nonatomic) unsigned long long localAssistedDiscoveryMetric;
@property (nonatomic) unsigned long long localMasterChannel;
@property (nonatomic) unsigned long long localPreferredChannel;
@property (nonatomic) unsigned long long localSecondaryPreferredChannel;
@property (nonatomic) unsigned long long peerAssistedDiscoveryMetric;
@property (nonatomic, copy) NSString *peerMACAddress;
@property (nonatomic) unsigned long long peerMasterChannel;
@property (nonatomic) unsigned long long peerPreferredChannel;
@property (nonatomic) unsigned long long peerSecondaryPreferredChannel;
@property (nonatomic) int peerSupportedChannelFlags;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)followMode;
- (unsigned long long)followModePreferredBand;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAWDLParameters:(id)arg1;
- (unsigned long long)localAssistedDiscoveryMetric;
- (unsigned long long)localMasterChannel;
- (unsigned long long)localPreferredChannel;
- (unsigned long long)localSecondaryPreferredChannel;
- (unsigned long long)peerAssistedDiscoveryMetric;
- (id)peerMACAddress;
- (unsigned long long)peerMasterChannel;
- (unsigned long long)peerPreferredChannel;
- (unsigned long long)peerSecondaryPreferredChannel;
- (int)peerSupportedChannelFlags;
- (void)setFollowMode:(bool)arg1;
- (void)setFollowModePreferredBand:(unsigned long long)arg1;
- (void)setLocalAssistedDiscoveryMetric:(unsigned long long)arg1;
- (void)setLocalMasterChannel:(unsigned long long)arg1;
- (void)setLocalPreferredChannel:(unsigned long long)arg1;
- (void)setLocalSecondaryPreferredChannel:(unsigned long long)arg1;
- (void)setPeerAssistedDiscoveryMetric:(unsigned long long)arg1;
- (void)setPeerMACAddress:(id)arg1;
- (void)setPeerMasterChannel:(unsigned long long)arg1;
- (void)setPeerPreferredChannel:(unsigned long long)arg1;
- (void)setPeerSecondaryPreferredChannel:(unsigned long long)arg1;
- (void)setPeerSupportedChannelFlags:(int)arg1;

@end
