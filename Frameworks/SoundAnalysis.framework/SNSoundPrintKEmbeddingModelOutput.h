
@interface SNSoundPrintKEmbeddingModelOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _fixedLengthEmbedding;
    MLMultiArray * _framewiseEmbedding;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *fixedLengthEmbedding;
@property (nonatomic, retain) MLMultiArray *framewiseEmbedding;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)fixedLengthEmbedding;
- (id)framewiseEmbedding;
- (id)initWithFixedLengthEmbedding:(id)arg1 framewiseEmbedding:(id)arg2;
- (void)setFixedLengthEmbedding:(id)arg1;
- (void)setFramewiseEmbedding:(id)arg1;

@end
