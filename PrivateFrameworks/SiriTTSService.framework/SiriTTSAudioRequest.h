
@interface SiriTTSAudioRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol> {
    void audibleContext;
    void audio;
}

@property (nonatomic, retain) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, readonly) SiriTTSAudioData *audio;
@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audibleContext;
- (id)audio;
- (unsigned int)audioSessionId;
- (id)description;
- (id /* block */)didStartSpeaking;
- (void)encodeWithCoder:(id)arg1;
- (bool)immediate;
- (id)init;
- (id)initWithAudio:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)playbackVolume;
- (void)setAudibleContext:(id)arg1;
- (void)setAudioSessionId:(unsigned int)arg1;
- (void)setDidStartSpeaking:(id /* block */)arg1;
- (void)setImmediate:(bool)arg1;
- (void)setPlaybackVolume:(float)arg1;
- (void)setSiriRequestId:(id)arg1;
- (id)siriRequestId;

@end
