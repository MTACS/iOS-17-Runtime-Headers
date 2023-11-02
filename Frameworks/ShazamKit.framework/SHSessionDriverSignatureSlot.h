
@interface SHSessionDriverSignatureSlot : NSObject {
    AVAudioPCMBuffer * _excessAudio;
    SHSignature * _generatedSignature;
    double  _maximumSignatureDuration;
    bool  _shouldGenerateSpectralOutput;
    SHSignatureGenerator * _signatureGenerator;
    long long  _state;
}

@property (nonatomic, readonly) AVAudioPCMBuffer *excessAudio;
@property (nonatomic, readonly) SHSignature *generatedSignature;
@property (nonatomic, readonly) double maximumSignatureDuration;
@property (nonatomic) bool shouldGenerateSpectralOutput;
@property (nonatomic, readonly) SHSignature *signature;
@property (nonatomic, readonly) double signatureDuration;
@property (nonatomic, readonly) SHSignatureGenerator *signatureGenerator;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (long long)appendBuffer:(id)arg1 atTime:(id)arg2 error:(id*)arg3;
- (id)excessAudio;
- (id)generatedSignature;
- (id)initWithMaximumSignatureDuration:(double)arg1;
- (id)initWithSignatureGenerator:(id)arg1;
- (double)maximumSignatureDuration;
- (void)reset;
- (void)setShouldGenerateSpectralOutput:(bool)arg1;
- (void)setState:(long long)arg1;
- (bool)shouldGenerateSpectralOutput;
- (id)signature;
- (double)signatureDuration;
- (id)signatureGenerator;
- (long long)state;

@end
