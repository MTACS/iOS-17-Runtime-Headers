
@interface SiriTTSSynthesisContext : NSObject <NSSecureCoding> {
    void contextInfo;
    void customResourceURLs;
    void didGenerateAudio;
    void didGenerateWordTimings;
    void disableCompactVoice;
    void forceOspreyTTS;
    void pitch;
    void privacySensitive;
    void prosodyProperties;
    void rate;
    void synthesisProfile;
    void text;
    void voice;
    void volume;
    void whisper;
}

@property (nonatomic, copy) NSDictionary *contextInfo;
@property (nonatomic, copy) NSArray *customResourceURLs;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) id /* block */ didGenerateAudio;
@property (nonatomic, copy) id /* block */ didGenerateWordTimings;
@property (nonatomic) bool disableCompactVoice;
@property (nonatomic) bool forceOspreyTTS;
@property (nonatomic) float pitch;
@property (nonatomic) bool privacySensitive;
@property (nonatomic, retain) SiriTTSProsodyProperties *prosodyProperties;
@property (nonatomic) float rate;
@property (nonatomic) long long synthesisProfile;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) SiriTTSSynthesisVoice *voice;
@property (nonatomic) float volume;
@property (nonatomic) bool whisper;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextInfo;
- (id)customResourceURLs;
- (id)description;
- (id /* block */)didGenerateAudio;
- (id /* block */)didGenerateWordTimings;
- (bool)disableCompactVoice;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceOspreyTTS;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)pitch;
- (bool)privacySensitive;
- (id)prosodyProperties;
- (float)rate;
- (void)setContextInfo:(id)arg1;
- (void)setCustomResourceURLs:(id)arg1;
- (void)setDidGenerateAudio:(id /* block */)arg1;
- (void)setDidGenerateWordTimings:(id /* block */)arg1;
- (void)setDisableCompactVoice:(bool)arg1;
- (void)setForceOspreyTTS:(bool)arg1;
- (void)setPitch:(float)arg1;
- (void)setPrivacySensitive:(bool)arg1;
- (void)setProsodyProperties:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setSynthesisProfile:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setVoice:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)setWhisper:(bool)arg1;
- (long long)synthesisProfile;
- (id)text;
- (id)voice;
- (float)volume;
- (bool)whisper;

@end
