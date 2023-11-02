
@interface SiriTTSSynthesisEngineRequest : NSObject {
    id /* block */  _audioHandler;
    id /* block */  _neuralFallbackHandler;
    float  _neuralSentenceDuration;
    float  _neuralSentenceEnergy;
    float  _neuralSentencePitch;
    float  _neuralSentencePitchRange;
    float  _neuralSentenceTilt;
    float  _pitch;
    bool  _privacySensitive;
    unsigned long long  _profile;
    id /* block */  _promptHandler;
    float  _rate;
    NSString * _text;
    float  _volume;
    id /* block */  _wordTimingsHandler;
}

@property (nonatomic, copy) id /* block */ audioHandler;
@property (nonatomic, copy) id /* block */ neuralFallbackHandler;
@property (nonatomic) float neuralSentenceDuration;
@property (nonatomic) float neuralSentenceEnergy;
@property (nonatomic) float neuralSentencePitch;
@property (nonatomic) float neuralSentencePitchRange;
@property (nonatomic) float neuralSentenceTilt;
@property (nonatomic) float pitch;
@property (nonatomic) bool privacySensitive;
@property (nonatomic) unsigned long long profile;
@property (nonatomic, copy) id /* block */ promptHandler;
@property (nonatomic) float rate;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) float volume;
@property (nonatomic, copy) id /* block */ wordTimingsHandler;

- (void).cxx_destruct;
- (id /* block */)audioHandler;
- (id /* block */)neuralFallbackHandler;
- (float)neuralSentenceDuration;
- (float)neuralSentenceEnergy;
- (float)neuralSentencePitch;
- (float)neuralSentencePitchRange;
- (float)neuralSentenceTilt;
- (float)pitch;
- (bool)privacySensitive;
- (unsigned long long)profile;
- (id /* block */)promptHandler;
- (float)rate;
- (void)setAudioHandler:(id /* block */)arg1;
- (void)setNeuralFallbackHandler:(id /* block */)arg1;
- (void)setNeuralSentenceDuration:(float)arg1;
- (void)setNeuralSentenceEnergy:(float)arg1;
- (void)setNeuralSentencePitch:(float)arg1;
- (void)setNeuralSentencePitchRange:(float)arg1;
- (void)setNeuralSentenceTilt:(float)arg1;
- (void)setPitch:(float)arg1;
- (void)setPrivacySensitive:(bool)arg1;
- (void)setProfile:(unsigned long long)arg1;
- (void)setPromptHandler:(id /* block */)arg1;
- (void)setRate:(float)arg1;
- (void)setText:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)setWordTimingsHandler:(id /* block */)arg1;
- (id)text;
- (float)volume;
- (id /* block */)wordTimingsHandler;

@end
