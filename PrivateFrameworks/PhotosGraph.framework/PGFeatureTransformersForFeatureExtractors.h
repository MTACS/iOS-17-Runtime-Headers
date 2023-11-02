
@interface PGFeatureTransformersForFeatureExtractors : NSObject {
    NSMutableDictionary * featureTransformersForFeatureExtractors;
}

@property (nonatomic, retain) NSMutableDictionary *featureTransformersForFeatureExtractors;

- (void).cxx_destruct;
- (void)addFeatureTransformers:(id)arg1 forFeatureExtractorName:(id)arg2;
- (id)featureTransformersForFeatureExtractorName:(id)arg1;
- (id)featureTransformersForFeatureExtractors;
- (id)init;
- (void)setFeatureTransformersForFeatureExtractors:(id)arg1;

@end
