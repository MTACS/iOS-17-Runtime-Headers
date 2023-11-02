
@interface PGMomentHasBirthdayFeatureExtractor : PGFeatureExtractor {
    void personNodesByMomentNode;
}

@property (nonatomic, readonly) long long featureLength;
@property (nonatomic, readonly) NSArray *featureNames;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (long long)featureLength;
- (id)featureNames;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)name;

@end
