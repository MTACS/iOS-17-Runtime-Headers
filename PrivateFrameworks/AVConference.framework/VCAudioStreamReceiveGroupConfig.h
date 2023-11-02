
@interface VCAudioStreamReceiveGroupConfig : VCMediaStreamGroupConfig <VCAudioStreamGroupConfig> {
    VCAudioStreamGroupCommonConfig * _audioStreamGroupConfig;
}

@property (retain) VCAudioStreamGroupCommonConfig *audioStreamGroupConfig;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)audioStreamGroupConfig;
- (void)dealloc;
- (id)init;
- (void)setAudioStreamGroupConfig:(id)arg1;

@end
