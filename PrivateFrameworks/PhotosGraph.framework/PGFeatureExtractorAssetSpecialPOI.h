
@interface PGFeatureExtractorAssetSpecialPOI : PGAssetFeatureExtractor {
    PGGraph * _graph;
}

@property (nonatomic, readonly) PGGraph *graph;

- (void).cxx_destruct;
- (bool)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3;
- (long long)featureLength;
- (id)featureNames;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)floatVectorWithMoment:(id)arg1 error:(id*)arg2;
- (id)graph;
- (id)initWithGraph:(id)arg1;
- (id)name;

@end
