
@interface SNSoundPrintAEmbeddingModelInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _audioSamples;
}

@property (nonatomic, retain) MLMultiArray *audioSamples;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)audioSamples;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithAudioSamples:(id)arg1;
- (void)setAudioSamples:(id)arg1;

@end
