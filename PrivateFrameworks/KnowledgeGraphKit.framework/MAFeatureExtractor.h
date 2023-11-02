
@interface MAFeatureExtractor : NSObject

@property (nonatomic, readonly) NSArray *featureNames;
@property (nonatomic, readonly) NSString *name;

+ (void)setShouldRetryFailures:(bool)arg1;
+ (bool)shouldRetryFailures;

- (id)defaultFloatVectorWithError:(id*)arg1;
- (id)featureNames;
- (id)featureVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)featureVectorsWithEntities:(id)arg1 entityLabels:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
- (id)floatMatrixWithEntities:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)floatVectorWithRetryForEntity:(id)arg1 error:(id*)arg2;
- (id)name;

@end
