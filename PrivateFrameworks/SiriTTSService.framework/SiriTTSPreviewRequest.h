
@interface SiriTTSPreviewRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol> {
    void audibleContext;
    void previewType;
    void voice;
}

@property (nonatomic, retain) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long previewType;
@property (nonatomic, retain) SiriTTSSynthesisVoice *voice;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audibleContext;
- (unsigned int)audioSessionId;
- (id)description;
- (id /* block */)didStartSpeaking;
- (void)encodeWithCoder:(id)arg1;
- (bool)immediate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVoice:(id)arg1 previewType:(long long)arg2;
- (float)playbackVolume;
- (long long)previewType;
- (void)setAudibleContext:(id)arg1;
- (void)setAudioSessionId:(unsigned int)arg1;
- (void)setDidStartSpeaking:(id /* block */)arg1;
- (void)setImmediate:(bool)arg1;
- (void)setPlaybackVolume:(float)arg1;
- (void)setPreviewType:(long long)arg1;
- (void)setSiriRequestId:(id)arg1;
- (void)setVoice:(id)arg1;
- (id)siriRequestId;
- (id)voice;

@end
