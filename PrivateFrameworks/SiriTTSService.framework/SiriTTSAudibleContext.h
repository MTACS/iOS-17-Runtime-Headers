
@interface SiriTTSAudibleContext : NSObject <NSSecureCoding> {
    void audioSessionId;
    void didStartSpeaking;
    void immediate;
    void playbackVolume;
}

@property (nonatomic) unsigned int audioSessionId;
@property (nonatomic, copy) id /* block */ didStartSpeaking;
@property (nonatomic) bool immediate;
@property (nonatomic) float playbackVolume;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)audioSessionId;
- (id /* block */)didStartSpeaking;
- (void)encodeWithCoder:(id)arg1;
- (bool)immediate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)playbackVolume;
- (void)setAudioSessionId:(unsigned int)arg1;
- (void)setDidStartSpeaking:(id /* block */)arg1;
- (void)setImmediate:(bool)arg1;
- (void)setPlaybackVolume:(float)arg1;

@end
