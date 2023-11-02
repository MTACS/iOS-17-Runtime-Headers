
@interface ATXCandidateRelevanceModelFeaturizationManager : NSObject <NSSecureCoding> {
    NSArray * _featurizers;
}

@property (nonatomic, readonly) NSArray *featurizers;

+ (id)denseLabelVectorFromDataPoints:(id)arg1;
+ (id)labelsFromDataPoints:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)featureNames;
- (id)featuresForContext:(id)arg1 candidate:(id)arg2;
- (id)featurizers;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeaturizers:(id)arg1;
- (id)initWithImmutableFeaturizers:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXCandidateRelevanceModelFeaturizationManager:(id)arg1;
- (unsigned long long)numberOfInputDimensions;
- (id)sparseFeatureMatrixFromDataPoints:(id)arg1;
- (id)sparseFeatureVectorForContext:(id)arg1 candidate:(id)arg2;

@end
