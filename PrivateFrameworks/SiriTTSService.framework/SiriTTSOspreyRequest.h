
@interface SiriTTSOspreyRequest : NSObject {
    NSString * _appId;
    NSString * _experimentId;
    NSString * _language;
    float  _neuralSentenceDuration;
    float  _neuralSentenceEnergy;
    float  _neuralSentencePitch;
    float  _neuralSentencePitchRange;
    float  _neuralSentenceTilt;
    float  _pitch;
    NSString * _preferredType;
    float  _rate;
    unsigned long long  _requestCreatedTime;
    bool  _serverLogs;
    NSString * _speechId;
    NSString * _text;
    NSString * _voiceName;
    float  _volume;
}

@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) float neuralSentenceDuration;
@property (nonatomic) float neuralSentenceEnergy;
@property (nonatomic) float neuralSentencePitch;
@property (nonatomic) float neuralSentencePitchRange;
@property (nonatomic) float neuralSentenceTilt;
@property (nonatomic) float pitch;
@property (nonatomic, copy) NSString *preferredType;
@property (nonatomic) float rate;
@property (nonatomic) unsigned long long requestCreatedTime;
@property (nonatomic) bool serverLogs;
@property (nonatomic, copy) NSString *speechId;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *voiceName;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (id)appId;
- (id)experimentId;
- (id)language;
- (float)neuralSentenceDuration;
- (float)neuralSentenceEnergy;
- (float)neuralSentencePitch;
- (float)neuralSentencePitchRange;
- (float)neuralSentenceTilt;
- (float)pitch;
- (id)preferredType;
- (float)rate;
- (unsigned long long)requestCreatedTime;
- (bool)serverLogs;
- (void)setAppId:(id)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setNeuralSentenceDuration:(float)arg1;
- (void)setNeuralSentenceEnergy:(float)arg1;
- (void)setNeuralSentencePitch:(float)arg1;
- (void)setNeuralSentencePitchRange:(float)arg1;
- (void)setNeuralSentenceTilt:(float)arg1;
- (void)setPitch:(float)arg1;
- (void)setPreferredType:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setRequestCreatedTime:(unsigned long long)arg1;
- (void)setServerLogs:(bool)arg1;
- (void)setSpeechId:(id)arg1;
- (void)setText:(id)arg1;
- (void)setVoiceName:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)speechId;
- (id)text;
- (id)underlyingRequest;
- (id)voiceName;
- (float)volume;

@end
