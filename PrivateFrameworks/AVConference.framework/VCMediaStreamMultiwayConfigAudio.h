
@interface VCMediaStreamMultiwayConfigAudio : VCMediaStreamMultiwayConfig {
    VCAudioRuleCollection * _audioRules;
    unsigned int  _preferredMediaBitrate;
}

@property (nonatomic, retain) VCAudioRuleCollection *audioRules;
@property (nonatomic) unsigned int preferredMediaBitrate;

- (id)audioRules;
- (void)dealloc;
- (unsigned int)preferredMediaBitrate;
- (void)setAudioRules:(id)arg1;
- (void)setPreferredMediaBitrate:(unsigned int)arg1;

@end
