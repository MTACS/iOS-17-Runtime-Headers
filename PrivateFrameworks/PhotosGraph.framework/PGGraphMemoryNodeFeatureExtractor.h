
@interface PGGraphMemoryNodeFeatureExtractor : MARelationCollectionFeatureExtractor <PGGraphFeatureExtractorProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long featureLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)featureExtractorWithError:(id*)arg1;

- (unsigned long long)featureLength;
- (id)initWithError:(id*)arg1;

@end
