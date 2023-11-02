
@interface PGFeatureExtractor : MAFeatureExtractor <PGFeatureExtractorProtocol> {
    long long  featureLength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long featureLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)featureExtractor;

- (long long)featureLength;

@end
