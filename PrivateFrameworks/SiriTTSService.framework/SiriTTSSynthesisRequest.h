
@interface SiriTTSSynthesisRequest : SiriTTSBaseRequest <SiriTTSSynthesizingRequestProtocol> {
    void synthesisContext;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) SiriTTSSynthesisContext *synthesisContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextInfo;
- (id)customResourceURLs;
- (id)description;
- (id /* block */)didGenerateAudio;
- (id /* block */)didGenerateWordTimings;
- (bool)disableCompactVoice;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 voice:(id)arg2;
- (float)pitch;
- (bool)privacySensitive;
- (id)prosodyProperties;
- (float)rate;
- (void)setContextInfo:(id)arg1;
- (void)setCustomResourceURLs:(id)arg1;
- (void)setDidGenerateAudio:(id /* block */)arg1;
- (void)setDidGenerateWordTimings:(id /* block */)arg1;
- (void)setDisableCompactVoice:(bool)arg1;
- (void)setPitch:(float)arg1;
- (void)setPrivacySensitive:(bool)arg1;
- (void)setProsodyProperties:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setSynthesisContext:(id)arg1;
- (void)setSynthesisProfile:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setVoice:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)setWhisper:(bool)arg1;
- (id)synthesisContext;
- (long long)synthesisProfile;
- (id)text;
- (id)voice;
- (float)volume;
- (bool)whisper;

@end
