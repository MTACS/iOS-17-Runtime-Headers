
@interface VCSessionMediaStreamPresenceConfigurationProvider : NSObject {
    NSDictionary * _configuration;
    NSSet * _streamGroupConfigurations;
    NSSet * _streamInputConfigurations;
}

@property (nonatomic, readonly) NSSet *streamGroupConfigurations;
@property (nonatomic, readonly) NSSet *streamInputConfigurations;

+ (id)bdatGroupDisabled;
+ (id)defaultOneToOneTierTable:(unsigned int)arg1;
+ (unsigned int)defaultRemainingBitrateSplit:(unsigned int)arg1;
+ (id)fdatGroupDisabled;
+ (id)foregroundCameraOneToOneTierTable:(unsigned int)arg1;
+ (unsigned int)foregroundCameraRemainingBitrateSplit:(unsigned int)arg1;
+ (id)ftxtGroupDisabled;
+ (id)loadSessionConfigurationWithResourceName:(id)arg1;
+ (id)oneToOneTierTableForStreamGroupID:(unsigned int)arg1 splitType:(unsigned int)arg2;
+ (id)publicSessionConfigurationForType:(unsigned int)arg1;
+ (unsigned int)readUint32WithPList:(id)arg1 key:(id)arg2 defaultValue:(unsigned int)arg3;
+ (unsigned int)remainingBitrateSplitQualityIndexForStreamGroup:(unsigned int)arg1 splitType:(unsigned int)arg2;
+ (id)replaceTag:(id)arg1;
+ (id)resourceNameForConfigurationType:(unsigned int)arg1;
+ (id)screenGroupDisabled;
+ (id)screenStreamBaseTierFramerate;
+ (id)sessionConfigurationForType:(unsigned int)arg1;
+ (id)siriGroupDisabled;
+ (unsigned int)streamSSRCForStreamGroupID:(unsigned int)arg1 streamIndex:(int)arg2;
+ (id)sysaGroupDisabled;

- (bool)addPayload:(int)arg1 audioStreamConfig:(id)arg2 supportedAudioRules:(id)arg3;
- (bool)checkEncoderSupportForCodecType:(long long)arg1;
- (bool)checkEncoderSupportForConfig:(id)arg1;
- (void)dealloc;
- (id)getVideoCodecConfigFromStreamConfigPList:(id)arg1;
- (long long)getVideoCodecFromStreamCodecPList:(id)arg1;
- (id)initWithConfigurationType:(unsigned int)arg1 supportedAudioRules:(id)arg2 streamIDGenerator:(id)arg3;
- (id)newAudioMultiwayConfigWithPList:(id)arg1 audioRules:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3 streamIDGenerator:(id)arg4 ssrc:(unsigned int)arg5;
- (id)newAudioStreamGroupStreamConfigWithPList:(id)arg1 supportedAudioRules:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3 streamIDGenerator:(id)arg4 ssrc:(unsigned int)arg5 groupID:(unsigned int)arg6;
- (id)newDataStreamInputConfigurationWithPList:(id)arg1;
- (id)newStreamGroupConfigurationWithPList:(id)arg1 supportedAudioRules:(id)arg2 streamIDGenerator:(id)arg3;
- (id)newStreamGroupConfigurationsWithSupportedAudioRules:(id)arg1 streamIDGenerator:(id)arg2;
- (id)newStreamInputConfigurations;
- (id)newVideoMultiwayConfigWithPList:(id)arg1 codecType:(long long)arg2 streamIDGenerator:(id)arg3 ssrc:(unsigned int)arg4;
- (id)newVideoStreamGroupStreamConfigWithPList:(id)arg1 streamIDGenerator:(id)arg2 ssrc:(unsigned int)arg3 groupID:(unsigned int)arg4 shouldSkip:(bool*)arg5;
- (id)newVideoStreamInputConfigurationWithPList:(id)arg1;
- (unsigned short)setParentStreamID:(unsigned short)arg1 videoConfig:(id)arg2;
- (bool)setupAudioRedWithPlist:(id)arg1 audioStreamConfig:(id)arg2 supportedAudioRules:(id)arg3;
- (bool)setupAudioRulesWithPList:(id)arg1 audioStreamConfig:(id)arg2 supportedAudioRules:(id)arg3;
- (bool)setupAudioStreamGroupStreams:(id)arg1 streamGroupConfig:(id)arg2 supportedAudioRules:(id)arg3 streamIDGenerator:(id)arg4;
- (bool)setupRedFactorsWithPList:(id)arg1 audioStreamConfig:(id)arg2;
- (bool)setupVideoStreamGroupStreams:(id)arg1 streamGroupConfig:(id)arg2 streamIDGenerator:(id)arg3;
- (id)streamGroupConfigurations;
- (id)streamInputConfigurations;
- (void)updateStreamConfig:(id)arg1 forPayload:(int)arg2 networkPayload:(unsigned int)arg3 groupID:(unsigned int)arg4;

@end
