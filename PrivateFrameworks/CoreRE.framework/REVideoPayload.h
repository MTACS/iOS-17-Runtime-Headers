
@interface REVideoPayload : RESharedResourcePayload {
    unsigned char  _audioInputMode;
    float  _reverbSendLevel;
}

@property (nonatomic, readonly) unsigned char audioInputMode;
@property (nonatomic, readonly) float reverbSendLevel;

+ (bool)supportsSecureCoding;

- (unsigned char)audioInputMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAudioInputMode:(unsigned char)arg1 reverbSendLevel:(float)arg2;
- (id)initWithCoder:(id)arg1;
- (float)reverbSendLevel;

@end
