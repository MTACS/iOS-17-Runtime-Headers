
@interface SiriTTSProsodyProperties : NSObject <NSSecureCoding> {
    void neuralSentenceDuration;
    void neuralSentenceEnergy;
    void neuralSentencePitch;
    void neuralSentencePitchRange;
    void neuralSentenceTilt;
}

@property (nonatomic) float neuralSentenceDuration;
@property (nonatomic) float neuralSentenceEnergy;
@property (nonatomic) float neuralSentencePitch;
@property (nonatomic) float neuralSentencePitchRange;
@property (nonatomic) float neuralSentenceTilt;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)neuralSentenceDuration;
- (float)neuralSentenceEnergy;
- (float)neuralSentencePitch;
- (float)neuralSentencePitchRange;
- (float)neuralSentenceTilt;
- (void)setNeuralSentenceDuration:(float)arg1;
- (void)setNeuralSentenceEnergy:(float)arg1;
- (void)setNeuralSentencePitch:(float)arg1;
- (void)setNeuralSentencePitchRange:(float)arg1;
- (void)setNeuralSentenceTilt:(float)arg1;

@end
