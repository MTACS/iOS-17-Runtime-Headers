
@interface VCSessionMediaStreamConfigurationProvider : NSObject {
    NSMutableArray * _allocatedStreamIDs;
    NSMutableArray * _audioStreamConfigurations;
    long long  _highestEncodingResolution;
    unsigned int  _internalAudioPacketsPerSecond;
    bool  _isEncodingSqaures;
    long long  _sessionMode;
    <VCIDSStreamIDGenerator> * _streamIDGenerator;
    bool  _use96Tier;
    NSMutableArray * _videoStreamConfigurations;
    unsigned int  _videoStreamConfigurationsCount;
}

@property (nonatomic, readonly) NSArray *audioStreamConfigurations;
@property (nonatomic, readonly) long long highestEncodingResolution;
@property (nonatomic, readonly) bool isEncodingSqaures;
@property (nonatomic, readonly) NSArray *videoStreamConfigurations;

+ (bool)audioConfig:(struct _VCMediaStreamConfigurationProviderAudio { unsigned int x1; unsigned int x2; struct _VCMediaStreamConfigurationProviderAudioBitrateInfo { int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; unsigned int x4; struct _VCMediaStreamConfigurationProviderAudioPayload { long long x_5_1_1; int x_5_1_2; } x5[4]; unsigned int x6; unsigned int x7[4]; int x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; long long x13[9]; }*)arg1 supportsDeviceClass:(long long)arg2;
+ (void)fixAudioStreamConfigurations;
+ (bool)isAudioStreamOnDemand:(struct _VCMediaStreamConfigurationProviderAudio { unsigned int x1; unsigned int x2; struct _VCMediaStreamConfigurationProviderAudioBitrateInfo { int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; unsigned int x4; struct _VCMediaStreamConfigurationProviderAudioPayload { long long x_5_1_1; int x_5_1_2; } x5[4]; unsigned int x6; unsigned int x7[4]; int x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; long long x13[9]; }*)arg1 isLowestQualityAudio:(bool)arg2;
+ (bool)isVideoStreamOnDemand:(struct _VCMediaStreamConfigurationProviderVideo { long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; bool x9; unsigned int x10; int x11; }*)arg1;
+ (unsigned int)maxStreamIDCountFromStreamIndex:(unsigned int)arg1;

- (id)audioRuleCollectionWithAudioConfig:(struct _VCMediaStreamConfigurationProviderAudio { unsigned int x1; unsigned int x2; struct _VCMediaStreamConfigurationProviderAudioBitrateInfo { int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; unsigned int x4; struct _VCMediaStreamConfigurationProviderAudioPayload { long long x_5_1_1; int x_5_1_2; } x5[4]; unsigned int x6; unsigned int x7[4]; int x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; long long x13[9]; }*)arg1 supportedAudioRules:(id)arg2;
- (void)audioStreamConfigs:(struct _VCMediaStreamConfigurationProviderAudio {}**)arg1 configCount:(unsigned int*)arg2;
- (id)audioStreamConfigurations;
- (void)dealloc;
- (long long)highestEncodingResolution;
- (id)initWithStreamIDGenerator:(id)arg1 sessionMode:(long long)arg2 supportedAudioRules:(id)arg3;
- (bool)initializeAudioStreamWithConfig:(struct _VCMediaStreamConfigurationProviderAudio { unsigned int x1; unsigned int x2; struct _VCMediaStreamConfigurationProviderAudioBitrateInfo { int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; unsigned int x4; struct _VCMediaStreamConfigurationProviderAudioPayload { long long x_5_1_1; int x_5_1_2; } x5[4]; unsigned int x6; unsigned int x7[4]; int x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; long long x13[9]; }*)arg1 maxIDSStreamIDCount:(unsigned int)arg2 supportedAudioRules:(id)arg3 isLowestQualityAudio:(bool)arg4;
- (bool)initializeAudioStreamsWithSupportedRules:(id)arg1;
- (bool)initializeStreamsWithSupportedAudioRules:(id)arg1;
- (bool)initializeVideoStreamWithConfig:(struct _VCMediaStreamConfigurationProviderVideo { long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; bool x9; unsigned int x10; int x11; }*)arg1 streamIndex:(unsigned int)arg2;
- (bool)initializeVideoStreamWithDefaults;
- (bool)initializeVideoStreams;
- (bool)isEncodingSqaures;
- (int)streamPayloadFromProviderConfig:(struct _VCMediaStreamConfigurationProviderVideo { long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8; bool x9; unsigned int x10; int x11; }*)arg1;
- (id)videoStreamConfigurations;

@end
