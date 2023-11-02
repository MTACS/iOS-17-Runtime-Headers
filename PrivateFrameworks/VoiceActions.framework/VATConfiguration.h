
@interface VATConfiguration : NSObject {
    void decoder;
    void featureExtractor;
    void neuralNetwork;
    void runtime;
    void secondPass;
}

@property (nonatomic, retain) DecoderConfig *decoder;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) FeatureExtractorConfig *featureExtractor;
@property (nonatomic, retain) NeuralNetworkConfig *neuralNetwork;
@property (nonatomic, retain) RuntimeConfig *runtime;
@property (nonatomic, retain) SecondPassConfig *secondPass;

+ (id)logger;

- (void).cxx_destruct;
- (void)_replaceModelPathWithCustomModelPathForTestWithPrefix:(id)arg1;
- (id)decoder;
- (id)description;
- (id)featureExtractor;
- (id)init;
- (id)initWithFilename:(id)arg1 error:(id*)arg2;
- (id)neuralNetwork;
- (id)runtime;
- (id)secondPass;
- (void)setDecoder:(id)arg1;
- (void)setFeatureExtractor:(id)arg1;
- (void)setNeuralNetwork:(id)arg1;
- (void)setRuntime:(id)arg1;
- (void)setSecondPass:(id)arg1;

@end
