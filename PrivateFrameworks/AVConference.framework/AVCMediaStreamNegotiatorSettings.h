
@interface AVCMediaStreamNegotiatorSettings : NSObject {
    long long  _accessNetworkType;
    VCMediaNegotiatorAudioConfiguration * _audioConfiguration;
    NSArray * _hdrModePixelFormats;
    NSMutableSet * _hdrModesSupported;
    unsigned int  _localSSRC;
    long long  _mediaStreamDirection;
    VCVideoRuleCollections * _screenRuleCollections;
    bool  _shouldApply16AlignedAdjustment;
    bool  _shouldSetJitterBufferMode;
    long long  _tilesPerFrame;
    VCVideoRuleCollections * _videoRuleCollections;
}

@property (nonatomic) long long accessNetworkType;
@property (nonatomic, readonly) unsigned long long audioChannelCount;
@property (nonatomic, readonly) VCMediaNegotiatorAudioConfiguration *audioConfiguration;
@property (nonatomic, readonly) long long audioStreamMode;
@property (nonatomic, readonly) long long captureSource;
@property (nonatomic, readonly) int connectionType;
@property (nonatomic, readonly) NSDictionary *featureListString;
@property (nonatomic, readonly) unsigned char featureListStringType;
@property (nonatomic, readonly) NSArray *hdrModePixelFormats;
@property (nonatomic, readonly) NSSet *hdrModesSupported;
@property (nonatomic, readonly) unsigned int jitterBufferMode;
@property (nonatomic, readonly) unsigned int localSSRC;
@property (nonatomic, readonly) unsigned long long maxBandwidth;
@property (nonatomic, readonly) long long mediaStreamDirection;
@property (nonatomic, readonly) unsigned long long minBandwidth;
@property (nonatomic, readonly) int operatingMode;
@property (nonatomic, readonly) int preferredAudioCodec;
@property (nonatomic, readonly) unsigned long long preferredMediaBitRate;
@property (nonatomic, readonly) unsigned long long ptime;
@property (nonatomic, readonly) double rtcpSendInterval;
@property (nonatomic, readonly) bool rtcpTimeOutEnabled;
@property (nonatomic, readonly) double rtcpTimeOutInterval;
@property (nonatomic, readonly) VCVideoRuleCollections *screenRuleCollections;
@property (nonatomic, readonly) bool shouldApply16AlignedAdjustment;
@property (nonatomic, readonly) bool shouldSetJitterBufferMode;
@property (nonatomic, readonly) long long tilesPerFrame;
@property (nonatomic, readonly) VCVideoRuleCollections *videoRuleCollections;
@property (nonatomic, readonly) long long videoStreamMode;

+ (unsigned long long)hdrModeWithNegotiatorInitOptions:(id)arg1;
+ (id)negotiatorSettingsForMode:(long long)arg1 deviceRole:(unsigned char)arg2 options:(id)arg3 errorString:(id*)arg4;

- (long long)accessNetworkType;
- (unsigned long long)audioChannelCount;
- (id)audioConfiguration;
- (long long)audioStreamMode;
- (long long)captureSource;
- (int)connectionType;
- (void)dealloc;
- (id)featureListString;
- (unsigned char)featureListStringType;
- (id)hdrModePixelFormats;
- (id)hdrModesSupported;
- (id)init;
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id*)arg3;
- (unsigned int)jitterBufferMode;
- (unsigned int)localSSRC;
- (unsigned long long)maxBandwidth;
- (long long)mediaStreamDirection;
- (unsigned long long)minBandwidth;
- (int)operatingMode;
- (int)preferredAudioCodec;
- (unsigned long long)preferredMediaBitRate;
- (unsigned long long)ptime;
- (double)rtcpSendInterval;
- (bool)rtcpTimeOutEnabled;
- (double)rtcpTimeOutInterval;
- (id)screenRuleCollections;
- (void)setAccessNetworkType:(long long)arg1;
- (bool)shouldApply16AlignedAdjustment;
- (bool)shouldSetJitterBufferMode;
- (long long)tilesPerFrame;
- (id)videoRuleCollections;
- (long long)videoStreamMode;

@end
