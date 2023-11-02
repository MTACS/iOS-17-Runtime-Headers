
@interface PGMomentIngestCLIPFeatureVectorExtractor : NSObject {
    void ingestMomentContainer;
}

+ (id)decodeEncodedCLIPFeatureVector:(id)arg1 withError:(id*)arg2;
+ (id)encodeCLIPFeatureVector:(id)arg1;

- (void).cxx_destruct;
- (id)extractCLIPFeatureVectorWithError:(id*)arg1;
- (id)init;
- (id)initWithIngestMomentContainer:(id)arg1;

@end
