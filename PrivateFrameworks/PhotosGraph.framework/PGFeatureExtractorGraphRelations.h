
@interface PGFeatureExtractorGraphRelations : PGAssetFeatureExtractor {
    MAFeatureExtractor * _featureExtractor;
    PGGraph * _graph;
}

@property (nonatomic, readonly) MAFeatureExtractor *featureExtractor;
@property (nonatomic, readonly) PGGraph *graph;

- (void).cxx_destruct;
- (bool)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3;
- (id)featureExtractor;
- (long long)featureLength;
- (id)featureNames;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)floatVectorWithMomentNodeCollection:(id)arg1 error:(id*)arg2;
- (id)graph;
- (id)initWithGraph:(id)arg1 featureExtractor:(id)arg2;
- (id)name;

@end
