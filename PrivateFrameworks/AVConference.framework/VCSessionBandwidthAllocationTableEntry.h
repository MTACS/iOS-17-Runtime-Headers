
@interface VCSessionBandwidthAllocationTableEntry : NSObject {
    unsigned int  _actualNetworkBitrate;
    <VCSessionDownlinkBandwidthAllocatorClient> * _client;
    unsigned int  _encoderGroupID;
    bool  _hasRepairStreamID;
    bool  _isLowestQuality;
    unsigned int  _maxMediaBitrate;
    unsigned int  _maxNetworkBitrate;
    unsigned int  _minNetworkBitrate;
    bool  _onDemand;
    unsigned int  _qualityIndex;
    unsigned int  _repairMaxNetworkBitrate;
    unsigned int  _repairStreamID;
    bool  _startOnDemand;
    unsigned int  _streamGroupID;
    unsigned int  _streamID;
    NSNumber * _streamToken;
    bool  _subscribedTo;
    unsigned char  _type;
    NSDictionary * _upgradeQualityTiers;
    <VCSessionUplinkBandwidthAllocatorClient> * _uplinkClient;
}

@property unsigned int actualNetworkBitrate;
@property (readonly) <VCSessionDownlinkBandwidthAllocatorClient> *client;
@property (readonly) unsigned int encoderGroupID;
@property (readonly) bool hasRepairStreamID;
@property bool isLowestQuality;
@property (readonly) unsigned int maxMediaBitrate;
@property (readonly) unsigned int maxNetworkBitrate;
@property (readonly) unsigned int minNetworkBitrate;
@property (readonly) unsigned int qualityIndex;
@property (readonly) unsigned int repairMaxNetworkBitrate;
@property (readonly) unsigned int repairStreamID;
@property (getter=isStartOnDemand, readonly) bool startOnDemand;
@property (readonly) unsigned int streamGroupID;
@property (readonly) unsigned int streamID;
@property (readonly) NSNumber *streamToken;
@property (getter=isSubscribedTo) bool subscribedTo;
@property (readonly) unsigned char type;
@property (readonly) <VCSessionUplinkBandwidthAllocatorClient> *uplinkClient;

+ (long long)compareAudioEntry:(id)arg1 audioEntry:(id)arg2;
+ (long long)compareAudioEntry:(id)arg1 videoEntry:(id)arg2;
+ (long long)compareVideoEntry:(id)arg1 videoEntry:(id)arg2;
+ (unsigned char)entryTypeForMediaType:(unsigned int)arg1;

- (unsigned int)actualNetworkBitrate;
- (id)client;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)encoderGroupID;
- (bool)hasRepairStreamID;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 streamToken:(long long)arg3 minNetworkBitrate:(unsigned int)arg4 maxNetworkBitrate:(unsigned int)arg5 mediaBitrate:(unsigned int)arg6 qualityIndex:(unsigned int)arg7 streamID:(unsigned int)arg8 hasRepairStreamID:(bool)arg9 repairStreamID:(unsigned int)arg10 repairMaxNetworkBitrate:(unsigned int)arg11 subscribedTo:(bool)arg12 startOnDemand:(bool)arg13 streamGroupID:(unsigned int)arg14 encoderGroupID:(unsigned int)arg15;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 streamToken:(long long)arg3 networkBitrate:(unsigned int)arg4 mediaBitrate:(unsigned int)arg5 qualityIndex:(unsigned int)arg6 streamID:(unsigned int)arg7 streamGroupID:(unsigned int)arg8;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 streamToken:(long long)arg3 streamID:(unsigned int)arg4 streamGroupID:(unsigned int)arg5;
- (bool)isLowestQuality;
- (bool)isStartOnDemand;
- (bool)isSubscribedTo;
- (unsigned int)maxMediaBitrate;
- (unsigned int)maxNetworkBitrate;
- (unsigned int)minNetworkBitrate;
- (unsigned int)qualityIndex;
- (unsigned int)repairMaxNetworkBitrate;
- (unsigned int)repairStreamID;
- (void)setActualNetworkBitrate:(unsigned int)arg1;
- (void)setIsLowestQuality:(bool)arg1;
- (void)setSubscribedTo:(bool)arg1;
- (unsigned int)streamGroupID;
- (unsigned int)streamID;
- (id)streamToken;
- (unsigned char)type;
- (id)uplinkClient;

@end
