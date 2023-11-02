
@interface PGFeatureExtractorAssetAverage : PGFeatureExtractor {
    void featureExtractor;
    void skipAssetsWithErrors;
}

@property (nonatomic, readonly) long long featureLength;
@property (nonatomic, readonly) NSArray *featureNames;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (long long)featureLength;
- (id)featureNames;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithFeatureExtractor:(id)arg1 skipAssetsWithErrors:(bool)arg2;
- (id)name;

@end
