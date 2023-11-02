
@interface SNDetectorHeadModelMetadata : NSObject <NSCopying> {
    NSString * _featureExtractorIdentifier;
    NSNumber * _hopSizeInSamples;
    NSNumber * _sampleRate;
    NSString * _soundIdentifier;
    NSNumber * _windowSizeInSamples;
}

@property (copy) NSString *featureExtractorIdentifier;
@property (copy) NSNumber *hopSizeInSamples;
@property (copy) NSNumber *sampleRate;
@property (copy) NSString *soundIdentifier;
@property (copy) NSNumber *windowSizeInSamples;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)featureExtractorIdentifier;
- (unsigned long long)hash;
- (id)hopSizeInSamples;
- (bool)isEqual:(id)arg1;
- (id)sampleRate;
- (void)setFeatureExtractorIdentifier:(id)arg1;
- (void)setHopSizeInSamples:(id)arg1;
- (void)setSampleRate:(id)arg1;
- (void)setSoundIdentifier:(id)arg1;
- (void)setWindowSizeInSamples:(id)arg1;
- (id)soundIdentifier;
- (id)windowSizeInSamples;

@end
