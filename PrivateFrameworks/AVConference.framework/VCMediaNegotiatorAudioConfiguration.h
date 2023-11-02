
@interface VCMediaNegotiatorAudioConfiguration : NSObject <NSCopying> {
    bool  _allowAudioRecording;
    bool  _allowAudioSwitching;
    NSMutableSet * _audioPayloads;
    unsigned int  _audioUnitNumber;
    NSMutableSet * _secondaryPayloads;
    unsigned int  _ssrc;
    bool  _useSBR;
}

@property (nonatomic) bool allowAudioRecording;
@property (nonatomic) bool allowAudioSwitching;
@property (nonatomic, readonly) NSSet *audioPayloads;
@property (nonatomic) unsigned int audioUnitNumber;
@property (nonatomic) unsigned int ssrc;
@property (nonatomic) bool useSBR;

- (void)addAudioPayload:(int)arg1 isSecondary:(bool)arg2;
- (bool)allowAudioRecording;
- (bool)allowAudioSwitching;
- (id)audioPayloads;
- (unsigned int)audioUnitNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithAllowAudioSwitching:(bool)arg1 allowAudioRecording:(bool)arg2 useSBR:(bool)arg3 ssrc:(unsigned int)arg4 audioUnitNumber:(unsigned int)arg5;
- (id)initWithAllowAudioSwitching:(bool)arg1 allowAudioRecording:(bool)arg2 useSBR:(bool)arg3 ssrc:(unsigned int)arg4 audioUnitNumber:(unsigned int)arg5 audioRuleCollection:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isSecondaryPayload:(int)arg1;
- (void)setAllowAudioRecording:(bool)arg1;
- (void)setAllowAudioSwitching:(bool)arg1;
- (void)setAudioUnitNumber:(unsigned int)arg1;
- (void)setSsrc:(unsigned int)arg1;
- (void)setUseSBR:(bool)arg1;
- (unsigned int)ssrc;
- (bool)useSBR;

@end
