
@interface TCGECDecoderModel : NSObject <TCGECModel> {
    unsigned long long  _embeddingDimension;
    void * _embeddings;
    struct MontrealNeuralNetwork { } * _gecDecoder;
    unsigned long long  _kNumFragments;
    unsigned long long  _spanCategories;
    struct MontrealNeuralNetwork { } * _spanDetector;
}

- (id)classifierPredictions:(float*)arg1 tokenCount:(unsigned long long)arg2;
- (void)dealloc;
- (id)decoderPredictions:(float*)arg1 fragmentCount:(unsigned long long)arg2;
- (id)embeddingsForTokenizedSentence:(id)arg1;
- (void)enumerateIssuesForSentence:(id)arg1 checkTermination:(bool)arg2 withBlock:(id /* block */)arg3;
- (id)initWithModelPath:(id)arg1 OTABundlePath:(id)arg2 options:(id)arg3;
- (bool)useANEWithOptions:(id)arg1;

@end
