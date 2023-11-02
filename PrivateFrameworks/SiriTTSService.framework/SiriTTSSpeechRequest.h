
@interface SiriTTSSpeechRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol, SiriTTSSynthesizingRequestProtocol> {
    void audibleContext;
    void synthesisContext;
}

@property (nonatomic, retain) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) SiriTTSSynthesisContext *synthesisContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audibleContext;
- (unsigned int)audioSessionId;
- (id)contextInfo;
- (id)customResourceURLs;
- (id)description;
- (id /* block */)didGenerateAudio;
- (id /* block */)didGenerateWordTimings;
- (id /* block */)didStartSpeaking;
- (bool)disableCompactVoice;
- (void)encodeWithCoder:(id)arg1;
- (bool)immediate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 voice:(id)arg2;
- (float)pitch;
- (float)playbackVolume;
- (bool)privacySensitive;
- (id)prosodyProperties;
- (float)rate;
- (void)setAudibleContext:(id)arg1;
- (void)setAudioSessionId:(unsigned int)arg1;
- (void)setContextInfo:(id)arg1;
- (void)setCustomResourceURLs:(id)arg1;
- (void)setDidGenerateAudio:(id /* block */)arg1;
- (void)setDidGenerateWordTimings:(id /* block */)arg1;
- (void)setDidStartSpeaking:(id /* block */)arg1;
- (void)setDisableCompactVoice:(bool)arg1;
- (void)setImmediate:(bool)arg1;
- (void)setPitch:(float)arg1;
- (void)setPlaybackVolume:(float)arg1;
- (void)setPrivacySensitive:(bool)arg1;
- (void)setProsodyProperties:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setSiriRequestId:(id)arg1;
- (void)setSynthesisContext:(id)arg1;
- (void)setSynthesisProfile:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setVoice:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)setWhisper:(bool)arg1;
- (id)siriRequestId;
- (id)synthesisContext;
- (long long)synthesisProfile;
- (id)text;
- (id)voice;
- (float)volume;
- (bool)whisper;

@end
